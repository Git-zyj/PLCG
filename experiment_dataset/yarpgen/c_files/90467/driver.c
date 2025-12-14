#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
short var_3 = (short)-32209;
signed char var_4 = (signed char)-105;
unsigned short var_6 = (unsigned short)59082;
unsigned short var_8 = (unsigned short)38845;
short var_10 = (short)460;
signed char var_12 = (signed char)-123;
unsigned char var_13 = (unsigned char)123;
int zero = 0;
unsigned short var_16 = (unsigned short)21702;
signed char var_17 = (signed char)-104;
short var_18 = (short)15982;
unsigned short var_19 = (unsigned short)26921;
int var_20 = 340642207;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
