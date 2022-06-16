# https://github.com/m1ns3c zsh theme

function _prompt_privilege() {
  if [ "$(id -un)" = "root" ]; then
    echo '%{%B%F{red}%}»%{%B%F{yellow}%}»%{%B%F{green}%}»%{%f%k%b%}'
  else
    echo '%{%B%F{red}%}»%{%B%F{yellow}%}»%{%B%F{green}%}»%{%f%k%b%}'
  fi
}

# This theme works with both the "dark" and "light" variants of the
# Solarized color schema.  Set the SOLARIZED_THEME variable to one of
# these two values to choose.  If you don't specify, we'll assume you're
# using the "dark" variant.

case ${SOLARIZED_THEME:-dark} in
    light) bkg=white;;
    *)     bkg=black;;
esac

ZSH_THEME_GIT_PROMPT_PREFIX=" %{%f%k%b%}%{%F{yellow}%}"
ZSH_THEME_GIT_PROMPT_SUFFIX=" "
ZSH_THEME_GIT_PROMPT_DIRTY="%{%F{red}%}*%{%f%k%b%}"
ZSH_THEME_GIT_PROMPT_CLEAN=""

PROMPT='%{%f%k%b%} %{%B%F{red}%}[%l] %{%b%F{gray}%}%~$(git_prompt_info)%E%{%f%k%b%} %{%K{${bkg}}%}%{%f%k%b%}$(_prompt_privilege) '