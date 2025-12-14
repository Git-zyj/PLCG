#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
_Bool var_2 = (_Bool)0;
short var_3 = (short)15004;
short var_4 = (short)-26631;
unsigned long long int var_5 = 13140750348290650177ULL;
unsigned long long int var_6 = 11005077774641104109ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 63527352;
unsigned short var_11 = (unsigned short)56959;
unsigned char var_12 = (unsigned char)221;
int var_13 = -1553658464;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 35169730U;
void init() {
}

void checksum() {
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
