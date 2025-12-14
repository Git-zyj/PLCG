#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1502803531;
int var_3 = 219167782;
int var_4 = 1740501374;
unsigned short var_5 = (unsigned short)11705;
unsigned short var_6 = (unsigned short)19015;
unsigned char var_7 = (unsigned char)67;
int var_8 = 133836779;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 10121381917269530240ULL;
unsigned int var_12 = 3697967253U;
unsigned short var_13 = (unsigned short)36413;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
