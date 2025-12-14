#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2948029981456096359ULL;
unsigned int var_6 = 3840161779U;
unsigned long long int var_7 = 17736335629646583679ULL;
unsigned char var_8 = (unsigned char)165;
int zero = 0;
short var_11 = (short)-457;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)31;
unsigned int var_14 = 4256687819U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
