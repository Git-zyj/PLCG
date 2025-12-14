#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13678;
signed char var_2 = (signed char)-104;
signed char var_5 = (signed char)46;
unsigned int var_7 = 4000801487U;
int var_11 = -1285686896;
int zero = 0;
unsigned short var_12 = (unsigned short)961;
unsigned int var_13 = 172731617U;
unsigned char var_14 = (unsigned char)224;
unsigned short var_15 = (unsigned short)10051;
unsigned short var_16 = (unsigned short)34755;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
