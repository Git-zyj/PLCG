#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
int var_2 = 1980349237;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-9;
unsigned char var_7 = (unsigned char)58;
signed char var_8 = (signed char)-74;
int var_16 = -1067486289;
int zero = 0;
unsigned int var_17 = 1639973134U;
unsigned char var_18 = (unsigned char)145;
unsigned int var_19 = 4194265480U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
