#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4254167315U;
unsigned int var_6 = 1389069189U;
unsigned short var_8 = (unsigned short)60808;
int zero = 0;
unsigned short var_12 = (unsigned short)10170;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 17170124596108273580ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
