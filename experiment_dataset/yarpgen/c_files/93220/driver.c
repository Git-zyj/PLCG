#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8155641009631658846ULL;
long long int var_5 = 3506823256200655803LL;
unsigned long long int var_8 = 13703068186041666581ULL;
unsigned long long int var_10 = 3415092216014576056ULL;
unsigned long long int var_11 = 2392104953030845079ULL;
unsigned short var_13 = (unsigned short)29631;
signed char var_15 = (signed char)46;
int zero = 0;
unsigned long long int var_18 = 13869083535277565317ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
