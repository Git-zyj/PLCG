#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3017689173884296173ULL;
unsigned char var_5 = (unsigned char)254;
unsigned short var_7 = (unsigned short)42029;
short var_8 = (short)-11165;
int zero = 0;
long long int var_14 = 7651391990298460307LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)31584;
void init() {
}

void checksum() {
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
