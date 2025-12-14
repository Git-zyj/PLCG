#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3094279160657923820ULL;
short var_4 = (short)-3824;
long long int var_6 = -7478312819293716909LL;
long long int var_7 = -1756144716584828004LL;
long long int var_8 = -281792557679069558LL;
int zero = 0;
unsigned char var_10 = (unsigned char)34;
unsigned char var_11 = (unsigned char)85;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
