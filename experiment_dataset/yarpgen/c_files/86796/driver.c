#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 420076100;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 2790097431469165769ULL;
unsigned long long int var_9 = 10428500763829899224ULL;
int zero = 0;
unsigned long long int var_14 = 15878909679928888044ULL;
signed char var_15 = (signed char)76;
_Bool var_16 = (_Bool)1;
int var_17 = 1956418608;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
