#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 516562324U;
int var_8 = 1713879405;
int var_9 = -300055485;
int var_10 = 1440160870;
unsigned long long int var_11 = 13244672388469420275ULL;
unsigned long long int var_12 = 14871236878710637196ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)100;
int zero = 0;
int var_17 = -206551696;
unsigned short var_18 = (unsigned short)23842;
int var_19 = -871079888;
unsigned short var_20 = (unsigned short)46425;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
