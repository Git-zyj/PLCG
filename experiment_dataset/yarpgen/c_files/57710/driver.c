#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55546;
unsigned short var_4 = (unsigned short)43238;
int var_8 = -1141567653;
unsigned short var_10 = (unsigned short)43476;
int zero = 0;
long long int var_12 = 1712372349061099368LL;
int var_13 = 1199410832;
long long int var_14 = -7495325222293970298LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
