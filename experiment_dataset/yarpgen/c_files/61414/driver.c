#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7285013991976867422LL;
int var_7 = 1570660670;
int var_8 = 314926095;
unsigned long long int var_9 = 17405812829189942721ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)24028;
signed char var_14 = (signed char)70;
signed char var_15 = (signed char)-28;
unsigned int var_16 = 1840677833U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
