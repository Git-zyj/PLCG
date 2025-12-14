#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2854143275614152245LL;
signed char var_6 = (signed char)-27;
unsigned char var_8 = (unsigned char)230;
unsigned char var_10 = (unsigned char)59;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1657274963;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9081586528273394828ULL;
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
