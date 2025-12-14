#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8757021082887688614LL;
long long int var_1 = 92966164216983428LL;
signed char var_5 = (signed char)-124;
signed char var_6 = (signed char)-71;
unsigned short var_7 = (unsigned short)10795;
signed char var_8 = (signed char)125;
signed char var_11 = (signed char)-32;
signed char var_12 = (signed char)-67;
int var_13 = -36808352;
int zero = 0;
unsigned long long int var_15 = 1391481519846838001ULL;
long long int var_16 = 8148244232396637752LL;
signed char var_17 = (signed char)-84;
unsigned long long int var_18 = 10560519809311090513ULL;
void init() {
}

void checksum() {
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
