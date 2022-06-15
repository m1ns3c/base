#!/usr/bin/env bash

BIN="$0"

# get git root
function get_git_root ()
{
    if $(git rev-parse --git-dir > /dev/null 2>&1); then
	echo $(git rev-parse --show-toplevel)
    fi
}

function main_ops ()
{
    case "${do_cmd}" in
	GIT_ROOT)
	    get_git_root
	    ;;
    esac
}

function usage()
{
    echo "usage: ${BIN} -h"
}

do_cmd=""
while getopts ':r' o; do
    case "${o}" in
	r)
	    do_cmd="GIT_ROOT"
	    ;;
	*)
	    usage
	    ;;
    esac
done

main_ops
