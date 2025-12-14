#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
unsigned int var_2 = 1747556367U;
signed char var_3 = (signed char)-78;
int var_4 = 1607378378;
unsigned short var_5 = (unsigned short)621;
int var_6 = 811969586;
long long int var_8 = 4636661669949573032LL;
int var_9 = 1517334517;
unsigned int var_11 = 1014101526U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14153607077369183682ULL;
signed char var_16 = (signed char)65;
unsigned short var_17 = (unsigned short)9700;
signed char var_18 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
