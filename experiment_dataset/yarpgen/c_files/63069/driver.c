#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8084441830604317218ULL;
signed char var_5 = (signed char)61;
unsigned char var_7 = (unsigned char)105;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 2339922579673689263ULL;
signed char var_19 = (signed char)-32;
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
