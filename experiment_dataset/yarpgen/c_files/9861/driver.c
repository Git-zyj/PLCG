#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62483;
signed char var_1 = (signed char)-82;
short var_2 = (short)-5334;
signed char var_4 = (signed char)100;
unsigned long long int var_5 = 6996019400226580607ULL;
signed char var_8 = (signed char)-7;
int var_11 = -2000325926;
unsigned short var_12 = (unsigned short)47207;
int zero = 0;
unsigned long long int var_14 = 6775229534353780239ULL;
unsigned int var_15 = 1033169621U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-34;
signed char var_18 = (signed char)-118;
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
