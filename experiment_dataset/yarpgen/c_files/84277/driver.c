#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1490192496;
int var_3 = 1981794341;
unsigned int var_4 = 255560581U;
long long int var_6 = -3654433609290566704LL;
int var_7 = 2043106985;
int var_8 = -935028533;
signed char var_13 = (signed char)-124;
int zero = 0;
unsigned int var_14 = 4202777909U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)13995;
unsigned int var_17 = 4178059817U;
unsigned short var_18 = (unsigned short)63164;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
