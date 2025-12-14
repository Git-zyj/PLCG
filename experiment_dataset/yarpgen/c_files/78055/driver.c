#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3670278264U;
unsigned long long int var_4 = 16773765683527945601ULL;
signed char var_5 = (signed char)-111;
unsigned int var_7 = 3512969769U;
unsigned short var_8 = (unsigned short)11816;
int zero = 0;
signed char var_11 = (signed char)56;
unsigned char var_12 = (unsigned char)20;
short var_13 = (short)-2393;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
