# export M1NS3C_ROOT="/data/base"
# [ -s ${M1NS3C_ROOT}/tools/zsh/base.sh ] && source ${M1NS3C_ROOT}/tools/zsh/base.sh

# export go
export GOROOT="/usr/local/go"
export GOPATH="/data/go"

export PATH=$PATH:$GOROOT/bin:$GOPATH/bin

# git alias
alias p='git pull'
alias s='git push'
alias sf='git push --force'
alias su='git push -u origin'

# editor alias
alias vim='emacs --no-splash'
alias vi='emacs --no-splash'
alias e='emacs --no-splash'

# path alias
alias jr='cd "$(${M1NS3C_ROOT}/tools/tools.sh -r)"'
alias jb='cd "${M1NS3C_ROOT}"'

# bazel
alias bazel='bazelisk'
