#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4850965587192818274LL;
unsigned int var_3 = 1201474517U;
unsigned long long int var_6 = 12531082955580867000ULL;
signed char var_7 = (signed char)-119;
unsigned short var_8 = (unsigned short)47946;
int zero = 0;
unsigned short var_18 = (unsigned short)19952;
unsigned short var_19 = (unsigned short)32665;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
