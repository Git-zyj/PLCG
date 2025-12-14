#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)9;
unsigned long long int var_8 = 13271658743356025804ULL;
unsigned long long int var_9 = 704277311329553703ULL;
long long int var_10 = 6549050934157403374LL;
int var_18 = -642988785;
int zero = 0;
signed char var_19 = (signed char)25;
long long int var_20 = 8504988078993422588LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
