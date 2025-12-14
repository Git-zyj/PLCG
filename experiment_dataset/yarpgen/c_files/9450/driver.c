#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19125;
short var_4 = (short)20683;
int var_6 = 660060461;
long long int var_7 = -2790931637132432412LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3613886269U;
int zero = 0;
unsigned long long int var_11 = 13547803743825113397ULL;
unsigned long long int var_12 = 11713412667833695984ULL;
unsigned short var_13 = (unsigned short)55112;
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
