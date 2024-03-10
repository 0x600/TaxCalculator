# Tax Calculator

Figure out how much robux you need for a specific amount of robux

## Syntax
```
./tax <n>

n - Robux you want to calculate
```

## Some formula I stole from idk where

$\large{\text{ceil}\left(\frac{n}{1 - 0.3}\right)}$

n being the number which is inputted

## How to compile?

```
gcc main.c -o tax <- Linux compilation
gcc main.c -o tax.exe <- Windows compilation
```
