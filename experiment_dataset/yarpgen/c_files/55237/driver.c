#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 690445251U;
unsigned long long int var_2 = 6348196182147929678ULL;
unsigned long long int var_3 = 9188290174784403704ULL;
int var_5 = -1033884690;
unsigned long long int var_6 = 11532724431718474911ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-27;
unsigned char var_17 = (unsigned char)90;
void init() {
}

void checksum() {
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
