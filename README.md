#### StormDrop64

StormDrop64 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to 64-bit Mersenne Twister, 64-bit SFMT, Xoroshiro1024*, Xoroshiro1024**, Xoroshiro1024++, Xorshift1024*, Xorshift1024+, Xoshiro512**, Xoshiro512+ and Xoshiro512++.

It has a period of at least 2³²⁷⁶⁸.

Seeding `a` with non-overlapping integers and seeding the remaining state with overlapping integers behaves as a jump function with up to 2⁶⁴ parallel instances that each have a non-overlapping period of at least 2⁶⁴. The first several results from each parallel instance should be skipped.

In non-parallel instances, each state integer must be assigned a seed. The first few results from each non-parallel instance should be skipped.

The period is adjustable by changing the count of `elements` and the default `& 511` masks as demonstrated in the following table. Statistical test results vary as the count of `elements` decreases from the default.

```
Elements   2ⁿ Period   & n
n Count    Minimum

4          256         3
8          512         7
16         1024        15
32         2048        31
64         4096        63
128        8192        127
256        16384       255
512        32768       511
```

`stormDrop64` generates and returns a pseudorandom `uint64_t` integer, provided the implementation supports a 64-bit, unsigned integral type for `uint64_t`.

---

#### StormDrop32

StormDrop32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to 32-bit Mersenne Twister, 32-bit SFMT, WELL and Xorwow.

It has a period of at least 2³²⁷⁶⁸.

Seeding `a` with non-overlapping integers and seeding the remaining state with overlapping integers behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

In non-parallel instances, each state integer must be assigned a seed. The first few results from each non-parallel instance should be skipped.

The period is adjustable by changing the count of `elements` and the default `& 1023` masks as demonstrated in the following table. Statistical test results vary as the count of `elements` changes from the default.

```
Elements   2ⁿ Period   & n
n Count    Minimum

4          128         3
8          256         7
16         512         15
32         1024        31
64         2048        63
128        4096        127
256        8192        255
512        16384       511
1024       32768       1023
2048       65536       2047
```

`stormDrop32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports a 32-bit, unsigned integral type for `uint32_t`.
