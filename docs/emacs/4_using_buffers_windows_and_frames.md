# 4. Using Buffers, Windows, and Frames

Window: Emacs `windows` are split screens.

Frame: Emacs calls GUI windows `frames`.

## Working with Multiple Buffers

`C-x b` switch buffer

`C-x C-b` list buffer

`C-x ->` go to next buffer

`C-x <-` go to previous buffer

### Deleting Buffers

`C-x k` for `kill-buffer` kill buffer

`M-x kill-some-buffer` kill some buffer

## Working with Windows

`Marks` are associated with buffers, not with windows, and each buffer can have only one mark.

Each window has its own `point`.

### Creating Horizontal Windows

`C-x 2` for `split-window-vertically` split window vertically

"other window" commands are just the ordinary command with a `4` inserted in it.

`C-x 4 f` find file in another window

`C-x 4 b` select a different buffer in another window

`C-x C-f` and `C-x b` move the window, give a command, and move back

`C-M-v` scroll window without moving there

### Moving Between Windows

`C-x o` move another

### Getting Rid of Windows

`C-x 0` delete window

`C-x 1` delete other windows, make this one only window

`M-x delete-windows-on` delete all windows on a certain buffer

## Working with Frames

### Creating a New Frame

`C-x 5 2` for `make-frame` new frame

```lisp
(setq initial-frame-alist '((top . 10) (left . 30) (width . 90) (height . 50))
(setq default-frame-alist '((width . 80) (height . 45)))
```

`C-x 5 f buffer_name` open a frame on buffer

`C-x 5 b` move to a buffer and put it in a new frame

### Moving Between Frames

`C-x 5 o` go to another frame

### Deleting and Minimizing Frames

`C-x 5 0` delete the frame

`C-z` minimize a frame

### Frame commands

| Key | Command | Action|
| -- | -- | -- |
| C-x 5 o Buffers -> Frames | other-frame | Move to other frame |
| C-x 5 0 File -> Delete Frame | delete-frame | Delete current frame |
| C-x 5 2 File -> New Frame | make-frame | Create a new frame on the current buffer |
| C-x 5 f | find-file-other-frame | Find file in a new frame |
| C-x 5 r | find-file-read-only-other-frame | Finds a file in a new frame, but it is read-only |
| C-x 5 b | switch-to-buffer-other-frame | Make frame and display other buffer in it |

## More About Buffers

### Saving Multiple Buffers

`C-x C-s` save buffer

`C-x s` for `save-some-buffers` save all buffer

`y` save, `n` not save, `!` save all without asking, `.` save this and no more, `q` cancel

`C-r` enter view mode, look at the buffer, `q` exit view mode

### Renaming Buffers

`M-x rename-buffer` rename buffer

`C-x C-v` if found the wrong file with `C-x C-f`, use this to replace it

### Read-Only Buffers

`C-x C-q` read-only switch, `%%` read-only, `**` changed

`C-x 4 r` read-only in new window, `C-x 5 r` in a new frame

`4` means window


`5` means frame

### Getting a List of Buffers

`C-x C-b` list buffers

### Working with the Buffer List

display, delete, save

`n` `C-n` `SPACE` move down a line or `p` `C-p` `DEL` move up a line

one-character commands

`d` or `k` delete buffer

`x` execute

`u` unmark

`s` save buffer

`~` tilde mark as unmodified, without auto-save

`%` change read-only

`1` one, display the buffer in a full-screen window

`f` display

`o` put in another window

`C-o` display other window and put the cursor there

`m` for mark, will display `>`, then press `v` horizontal windows to display

### Buffer manipulation commands

| Key | Command | Action |
| -- | -- | -- |
| C-x b Buffers -> Select Named Buffer | switch-to-buffer | Move to the buffer specified |
| C-x -> Buffers -> Next Buffer | next-buffer | Move to the next buffer in the buffer list |
| C-x Buffers -> Previous Buffer | previous-buffer | Move to the previous buffer in the buffer list |
| C-x C-b Buffers -> List All Buffers | list-buffer | Display the buffer list |
| C-x k | kill-buffer | Delete the buffer specified |
| (none) | kill-some-buffers | Ask about deleting each buffer |
| (none) | rename-buffer | Change the buffer's name to the name specified |
| C-x s | save-some-buffer | Ask whether you want to save each modified buffer |

### Buffer list commands

| Key | Action | Occurs |
| -- | -- | -- |
| C-n, SPACE, n | move to the next buffer | |
| C-p, DEL, p | move to the previous buffer | |
| d, k | mark for deletion | when x |
| s | save | when x |
| u | unmark | |
| x | execute | |
| DEL | unmark previous | |
| ~ | mark as unmodified | |
| % | toggle read-only | |
| 1 | display in full screen | |
| 2 | display in horizontal windows | |
| f | replace with this buffer | |
| o | replace other window with this buffer | |
| m | mark to be displayed | when v |
| v | displays | |
| q | quit list | |

## More About Windows

### Creating Vertical or Side-by-Side Windows

`C-x 3` split vertical windows

`C-x <` see right content

`C-x >` see left content

### Enlarging and Shrinking Windows

`C-x ^` winodw taller

`C-x }` window wider

`M-x shrink-window` shrink window

`C-x {` shirink window horizontally

`C-x -` for `shrink-window-if-larger-than-buffer`

`C-x +` for `balance-windows` equal size again

### Limits on Window Size

`window-min-height` variables default four lines

`window-min-width` variables default ten characters

### Comparing Files Between Windows

`M-x compare-windows` compare window

### Window commands

| Key | Command | Action |
| -- | -- | -- |
| C-x 2 File -> Split Window | split-window-vertically | Divide into two, one above the other |
| C-x 3 | split-window-horizontally | Divide into two side-by-side windows |
| C-x > | scroll-right | Scroll the window right |
| C-x < | scroll-left | Scroll the window left |
| C-x o | other-window | move other |
| C-x 0 | delete-window | Delete current window |
| C-x 1 File -> Unsplit Windows | delete-other-windows | Delete all windows but this one |
| (none) | delete-windows-on | Delete all windows on a given buffer |
| C-x ^ | enlarge-window | Make window taller |
| (none) | shrink-window | Make window shorter |
| C-x } | enlarge-window-horizontally | wider |
| C-x { | shrink-window-horizontally | narrower |
| C-x - | shrink-window-if larger-than-buffer | |
| C-x + | balance-window | same size |
| C-M-v | scroll-other-window | scroll other window |
| C-x 4 f | find-file-other-window | find a file in the other window |
| C-x 4 b | switch-to-buffer-other-window | select a buffer in the other window |