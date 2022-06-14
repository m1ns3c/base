## get terminal width and height

```c
// print width and height

#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <termios.h>

int main(int argc, char **argv) {
  struct winsize size;
  ioctl(0, TIOCSWINSZ, (char *)&size);
  printf("Rows: %u\nCols: %u\n", size.ws_row, size.ws_col);
  return 0;
}

```

I changed `TIOCSWINSZ` to `TIOCGWINSZ`. When you use an S, it sets the terminal dimensions, and when you use a G, it gets the dimensions.

The problem was that it set the terminal dimensions to fields in an uninitialized structure, which caused the terminal program to verload as it tried to make an arbitrarily large window.


## difference between <string.h> and <strings.h>

strings.h comes from the BSD branch in the unix evolution. Its content has been standardized by POSIX, but most of it is marked as legacy and can be easily replaced with other functions.

```c
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __THROW __attribute_pure__ __nonnull ((1, 2));

extern void bcopy (const void *__src, void *__dest, size_t __n)
  __THROW __nonnull ((1, 2));

extern void bzero (void *__s, size_t __n) __THROW __nonnull ((1));

extern char *index (char *__s, int __c)
     __THROW __asm ("index") __attribute_pure__ __nonnull ((1));

extern char *rindex (char *__s, int __c)
     __THROW __asm ("rindex") __attribute_pure__ __nonnull ((1));
extern const char *rindex (const char *__s, int __c)
     __THROW __asm ("rindex") __attribute_pure__ __nonnull ((1));

/* Return the position of the first bit set in I, or 0 if none are set.
   The least-significant bit is position 1, the most-significant 32.  */
extern int ffs (int __i) __THROW __attribute_const__;

/* The following two functions are non-standard but necessary for non-32 bit
   platforms.  */
extern int ffsl (long int __l) __THROW __attribute_const__;
__extension__ extern int ffsll (long long int __ll)
     __THROW __attribute_const__;

/* Compare S1 and S2, ignoring case.  */
extern int strcasecmp (const char *__s1, const char *__s2)
     __THROW __attribute_pure__ __nonnull ((1, 2));

/* Compare no more than N chars of S1 and S2, ignoring case.  */
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __THROW __attribute_pure__ __nonnull ((1, 2));
```
