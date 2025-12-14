#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1274557714U;
signed char var_2 = (signed char)13;
short var_5 = (short)-13329;
unsigned char var_9 = (unsigned char)155;
unsigned short var_10 = (unsigned short)4308;
signed char var_11 = (signed char)75;
unsigned long long int var_12 = 15005174918947610194ULL;
signed char var_13 = (signed char)103;
unsigned long long int var_15 = 9294501399014631868ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-78;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)26964;
unsigned short var_21 = (unsigned short)14507;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
