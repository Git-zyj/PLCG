#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_18 = 33561091;
int var_19 = -624474095;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)129;
unsigned short var_22 = (unsigned short)8011;
unsigned short var_23 = (unsigned short)27402;
unsigned short var_24 = (unsigned short)34477;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
