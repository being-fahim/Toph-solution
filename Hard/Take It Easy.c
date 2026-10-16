#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

#define MOD INT64_C(1000000007)

static int64_t mod_pow(int64_t base, int64_t exponent) {
    int64_t result = 1;
    base %= MOD;

    while (exponent > 0) {
        if (exponent % 2 == 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int main(void) {
    int64_t n;
    if (scanf("%" SCNd64, &n) != 1 || n < 1 || n > 200000) {
        return EXIT_FAILURE;
    }

    int64_t a = (n * (n + 1) / 2) % MOD;
    int64_t b = mod_pow(n, n);
    int64_t c = 1;
    for (int64_t i = 1; i <= n; ++i) {
        c = (c * i) % MOD;
    }
    int64_t d = (mod_pow(2, n) + mod_pow(3, n)) % MOD;

    printf("%" PRId64 " %" PRId64 " %" PRId64 " %" PRId64 "\n",
           a, b, c, d);
    return EXIT_SUCCESS;
}

