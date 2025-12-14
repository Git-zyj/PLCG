#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2635775898103217933ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)2;
signed char var_15 = (signed char)34;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-19146;
short var_19 = (short)-16680;
unsigned long long int var_20 = 6763044649638930675ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
