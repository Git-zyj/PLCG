#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1196891241;
signed char var_1 = (signed char)-84;
unsigned char var_2 = (unsigned char)41;
unsigned char var_3 = (unsigned char)163;
unsigned int var_5 = 1566760698U;
short var_6 = (short)32521;
unsigned int var_7 = 2136393605U;
unsigned short var_8 = (unsigned short)5179;
short var_10 = (short)25559;
long long int var_11 = -3700376193302710698LL;
int zero = 0;
unsigned long long int var_13 = 14143667909431063576ULL;
unsigned short var_14 = (unsigned short)58581;
long long int var_15 = 9129545305864738820LL;
unsigned short var_16 = (unsigned short)40549;
void init() {
}

void checksum() {
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
