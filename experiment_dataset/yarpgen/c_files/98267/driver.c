#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1338232174;
signed char var_2 = (signed char)-97;
long long int var_6 = -3528424159666197149LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1151157740U;
unsigned long long int var_15 = 1850040870831263982ULL;
unsigned char var_16 = (unsigned char)226;
void init() {
}

void checksum() {
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
