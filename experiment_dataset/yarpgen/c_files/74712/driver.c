#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-104;
unsigned char var_6 = (unsigned char)116;
signed char var_11 = (signed char)70;
unsigned char var_13 = (unsigned char)252;
unsigned char var_17 = (unsigned char)28;
int zero = 0;
signed char var_18 = (signed char)-80;
unsigned char var_19 = (unsigned char)163;
unsigned char var_20 = (unsigned char)91;
signed char var_21 = (signed char)-64;
void init() {
}

void checksum() {
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
