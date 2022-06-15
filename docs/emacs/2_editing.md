# Chapter 2. Editing

`M-x refill-mode`

`M-x auto-fill-mode`

`C-_` or `C-x u` undo

`M-q` for `fill-paragraph`

## Moving the Cursor

`C-f` for `forward-character`

`C-b` for `backward-character`

`C-p` for `previous-line`

`C-n` for `next-line`

### Other Ways to Move the Cursor

`M-f` forward word

`M-b` backward word

`C-a` beginning of line

`C-e` end of line

`M-a` backward one sentence

`M-e` forward one sentence

`M-}` forward paragraph

`M-{` backward paragraph

`C-x ]` for `forward-page`

`C-x [` for `backward-page`

`C-q C-l` insert page break, insert C-l

`C-q` quoted-insert

### Moving a Screen (or Move) at a Time

`C-v` PgDown

`M-v` PgUp

`M->` or END go to the end of a buffer

`M-<` or HOME go to the beginning of a buffer

`M-x goto-line` go to line

`M-g M-g` go to line

`M-x goto-char`

### Repeating Commands

`M-n` before the command, n=number

`M-500 C-n`

`M-5` or `C-u 5` equal

`C-u` equal 4 time

### Centering the Display

`C-l` recenter command

## Deleting Text

`C-d` for `delete-character`

`M-d` for `kill-word`

`M-DEL` for `backward-kill-word`

`C-k` for `kill-line`, to join two lines

### The Kill Ring

`C-y` for `yank`

### Deletion commands

| Key | Command | Action |
| -- | -- | -- |
| C-d | delete-char | Delete char |
| DEL | delete-backward-cahr | Delete previous char |
| M-d | kill-word | delete next word |
| M-Del | backward-kill-word | delete previous word |
| C-k | kill-line | delete from cursor to end of line |
| M-k | kill-sentence | delete next sentence |
| C-x DEL | backward-kill-sentence | Delete previous sentence |
| C-y | yank | |
| C-w Edit -> Cut | kill-region | delete a marked region |
| (none) | kill-paragraph | |
| (none) | backward-kill-paragraph | |

## Marking Text to Delete, Move, or Copy

`C-SPACE` or `C-@` set the mark

`C-x C-x` for `exchange-point-and-mark`

`C-w` for `kill-region`

`M-h` mark paragraph

`C-x h` for `mark-whole-buffer`

`C-x C-p` mark the current page

### Copying Text

`M-w` for `kill-ring-save`


### Clipboard commands

| Key | Command | Action |
| -- | -- | -- |
| (none) | clipboard-kill-region | cut region and place both in kill ring and on system clipboard |
| (none) | clipboard-yank | |
| (none) | clipboard-kill-ring-save | |

### Changing Capitalization

| Key | Command | Action |
| -- | -- | -- |
| M-c | capitalize-word | Capitalize |
| M-u | upcase-word | Uppercase |
| M-l | downcase-word | Lowercase |
| Meta - M-c | negative-argument; capitalize-word | Capitalize previous |
| Meta - M-u | negative-argument; upcase-word | Uppercase previous |
| Meta - M-l | negative-argument; downcase-word | |

`M-x overwrite-mode`

`C-g` cancel

`M-x revert-buffer`
