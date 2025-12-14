#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-10268;
unsigned long long int var_10 = 16530014759882626896ULL;
signed char var_12 = (signed char)102;
unsigned long long int var_17 = 11414375120528608127ULL;
int zero = 0;
signed char var_19 = (signed char)92;
short var_20 = (short)10946;
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
