## delete remote branch

### delete local

```bash
# --delete
$ git branch -d <branch name>

# --delete --force
$ git branch -D <branch name>
```

### delete remote

```bash
$ git push <remote name> --delete <branch name>

$ git push <remote name> :<branch name>
```


## get root directory

```bash
$ git rev-parse --show-toplevel

# git root
$ git config --global alias.root 'rev-parse --show-toplevel'
```