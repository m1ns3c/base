# Chapter 2. Search and Replace

## Different Kinds of Searched

- Simple search
- Incremental search
- Word search
- Regular expression search
- Incremental regular expression search
- Simple search and replace
- Query-replace
- Regular expression replace

### Incremental Search

`C-s` Isearch mode, `Enter` stop search, `DEL`move back

`C-g` cancel

`C-r` search backward

`C-s C-w` copy word into search

`C-s C-y` copy to end of the line into search

`C-s M-y` search from kill ring, `M-p` previous item, `M-n` next item

### Incremental search commands

| Key | Command | Action |
| -- | -- | -- |
| C-s Edit -> Search -> Incremental String -> Forward | isearch-forward | incremental forward |
| C-r Edit -> Backward | isearch-backward | Incremental backward |
| Enter | isearch-exit | exit |
| C-g | keyboard-quit | cancel |
| Del | isearch-delete-char | delete character |
| C-s C-w | isearch-yank-word | word in cursor |
| C-s C-y | isearch-yank-line | end of line |
| C-s M-y | isearch-yank-kill | from kill ring |
| C-s C-s | isearch-repeat-forward | Repeat previous search |
| C-r C-r | isearch-repeat-backward | Repeat previous search backward |


### Simple Searches

`C-s Enter`

`C-r Enter`

### Simple search commands

| Key | Action |
| -- | -- |
| C-s Enter searchstring Enter Edit -> Search -> Forward | nonincremental forward |
| C-s | Repeat forward |
| C-r Enter | nonincremental backward |
| C-r | Repeat backward |

### Word Search

`C-s Enter C-w` for `word-search-forward` prompt WORD

`C-r Enter C-w`


## Search and Replace

### Simple Search and Replace Operations

`M-x replace-string`

### Query-Replace

`M-%` prompt Query

| Key | Action |
| -- | -- |
| SPACE, y | Replace |
| DEL, n | don't replace, move to next |
| . | replace current and quit |
| , | replace not move, SPACE/y move |
| ! | replace all rest |
| ^ | backup to the previous instance |
| ENTER, q | Exit |
| E | modify the replacement string |
| C-r | enter a recursive edit |
| C-w | delete this instance and enter a recursive edit |
| C-M-c | exit recursive edit and resume query-replace |
| C-] | exit recursive edit and exit query-replace |

`M-x set-variable` Enter `case-replace` Enter `nil`

### Regular Expressions for Search and Replacement Operations

### Characters for creating regular expressions

| Character | Match |
| . | single character |
| .* | any group of zero or more characters
| \< | beginning of a word |
| \> | end of a word |
| [] | |
| \s, \S | whitespace |
| \d, \D | single digit, \D not digit |
| \w, \W | any word, \W not word |

### Regular expression search commands

| Key | Command | Action |
| -- | -- | -- |
| C-M-s Enter Edit -> Search -> Regexp Forward | re-search-forward | regular forward |
| C-M-r | re-search-backward | regular backward |
| C-M-s Edit -> Search -> Incremental forward | isearch-forward-regexp | |
| C-M-r | | |
| C-M-% Edit -> Replace -> Regexp | query-replace-regexp | |
| (none) | replace-regexp | |
