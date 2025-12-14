#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 970143740U;
long long int var_3 = 6944827838899605320LL;
short var_8 = (short)-2190;
unsigned char var_11 = (unsigned char)183;
int zero = 0;
int var_19 = 1242782633;
signed char var_20 = (signed char)-66;
short var_21 = (short)10295;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
