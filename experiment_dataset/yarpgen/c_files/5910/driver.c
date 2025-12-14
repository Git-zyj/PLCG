#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41083;
unsigned long long int var_8 = 16469403054626007162ULL;
unsigned char var_11 = (unsigned char)231;
unsigned long long int var_14 = 12372560366770614098ULL;
int zero = 0;
unsigned int var_19 = 3626808222U;
short var_20 = (short)9563;
signed char var_21 = (signed char)-31;
unsigned short var_22 = (unsigned short)18163;
unsigned short var_23 = (unsigned short)10597;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
