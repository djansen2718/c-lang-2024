## Left off in book:
1.9 Character Arrays
https://www.cc4e.com/book/chap01.md

## Pointers
`int *px` is intended as a mnemonic. It is saying that `*px` is of type int. "The combination `*px` is an int." "If px occurs in the context of *px, it is equivalent to a variable of type int."

## Pointers and Arrays
- C deals with "an array" and "a pointer to the start of an array" exactly the same.
- `pa = &a[0]` can also be written as
`pa = a`
- `a[i]` can also be written as
`*(a+i)`
- "In general, pointers can be initialized just like variables. However, the values that make sense are NULL and an expressions involving addresses to previously defined data.