#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-395;
unsigned int var_5 = 68476370U;
_Bool var_6 = (_Bool)0;
int var_7 = 1651549075;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 640631368U;
int zero = 0;
unsigned long long int var_14 = 2126789842641313877ULL;
short var_15 = (short)-111;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-104;
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
