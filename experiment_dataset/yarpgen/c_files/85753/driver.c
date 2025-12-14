#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)869;
unsigned char var_2 = (unsigned char)125;
unsigned short var_4 = (unsigned short)8298;
unsigned char var_9 = (unsigned char)162;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)40671;
unsigned int var_15 = 96926685U;
unsigned long long int var_16 = 12371757226835717328ULL;
unsigned long long int var_17 = 12715068425441737770ULL;
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
