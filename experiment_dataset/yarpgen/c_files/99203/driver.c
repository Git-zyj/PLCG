#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned int var_4 = 4216431268U;
signed char var_6 = (signed char)84;
signed char var_7 = (signed char)-33;
long long int var_10 = 2792002478883236182LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2909278800U;
unsigned char var_18 = (unsigned char)140;
_Bool var_19 = (_Bool)1;
int var_20 = -745885987;
unsigned int var_21 = 2123063987U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
