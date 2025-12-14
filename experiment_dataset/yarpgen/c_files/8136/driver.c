#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2088726826U;
long long int var_3 = -7310706779727096482LL;
long long int var_6 = -7609456475808770111LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 2357471707U;
unsigned short var_13 = (unsigned short)21428;
short var_14 = (short)-28345;
unsigned short var_15 = (unsigned short)61947;
short var_16 = (short)-2354;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
