#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
signed char var_3 = (signed char)111;
unsigned long long int var_6 = 18337028558736261468ULL;
unsigned long long int var_7 = 7525686532329359471ULL;
signed char var_8 = (signed char)119;
int zero = 0;
unsigned int var_10 = 359234499U;
unsigned char var_11 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
