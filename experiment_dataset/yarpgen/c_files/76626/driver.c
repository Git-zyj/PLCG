#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned short var_2 = (unsigned short)7468;
signed char var_3 = (signed char)117;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 4999370990572587383ULL;
unsigned long long int var_12 = 6167244762356592252ULL;
int zero = 0;
short var_14 = (short)8211;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1025152945U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
