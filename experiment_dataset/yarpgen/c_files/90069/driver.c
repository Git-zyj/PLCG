#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5093446586934046264ULL;
long long int var_7 = 790838306994655992LL;
long long int var_8 = -4213051914295157362LL;
signed char var_9 = (signed char)-90;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2632331852U;
long long int var_12 = 3349294856492086446LL;
unsigned short var_13 = (unsigned short)39305;
unsigned char var_14 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
