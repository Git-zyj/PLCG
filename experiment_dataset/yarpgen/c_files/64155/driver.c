#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)35705;
unsigned short var_4 = (unsigned short)27932;
unsigned char var_6 = (unsigned char)162;
short var_7 = (short)-1185;
short var_11 = (short)-4728;
int var_14 = 1425174048;
signed char var_15 = (signed char)32;
unsigned long long int var_16 = 1675026881041865799ULL;
unsigned long long int var_17 = 7635513554235075626ULL;
unsigned short var_18 = (unsigned short)61705;
signed char var_19 = (signed char)15;
int zero = 0;
unsigned short var_20 = (unsigned short)26474;
short var_21 = (short)7;
short var_22 = (short)14809;
unsigned short var_23 = (unsigned short)60349;
signed char var_24 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
