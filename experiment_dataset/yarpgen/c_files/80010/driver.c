#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10632160154394663236ULL;
unsigned int var_3 = 4041205587U;
unsigned char var_4 = (unsigned char)136;
unsigned long long int var_7 = 11496717049741579200ULL;
short var_9 = (short)-4046;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1175937786;
short var_13 = (short)-20233;
unsigned short var_14 = (unsigned short)4603;
void init() {
}

void checksum() {
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
