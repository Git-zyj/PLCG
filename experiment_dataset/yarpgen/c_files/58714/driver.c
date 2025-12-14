#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8047673599664287238LL;
long long int var_2 = -905753557728376181LL;
signed char var_5 = (signed char)26;
unsigned short var_8 = (unsigned short)20756;
unsigned char var_9 = (unsigned char)48;
short var_10 = (short)-5729;
long long int var_12 = -7830973471975765429LL;
int zero = 0;
int var_13 = 1984223611;
int var_14 = 1873351616;
unsigned short var_15 = (unsigned short)24691;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
