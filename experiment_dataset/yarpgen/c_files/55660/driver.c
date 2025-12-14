#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3065257037U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-77;
unsigned int var_18 = 1686972212U;
int zero = 0;
signed char var_19 = (signed char)44;
short var_20 = (short)1027;
int var_21 = -252546608;
unsigned long long int var_22 = 17890550521093220766ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
