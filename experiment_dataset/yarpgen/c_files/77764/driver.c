#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
unsigned int var_2 = 2954934448U;
int var_4 = -1978370784;
unsigned char var_6 = (unsigned char)32;
_Bool var_7 = (_Bool)1;
short var_11 = (short)17255;
long long int var_13 = -659561319571189742LL;
int zero = 0;
unsigned short var_14 = (unsigned short)15998;
unsigned long long int var_15 = 10016832307210132762ULL;
int var_16 = 1449301395;
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
