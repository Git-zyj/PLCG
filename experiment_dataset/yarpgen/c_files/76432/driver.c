#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14883851100353086009ULL;
unsigned char var_6 = (unsigned char)163;
short var_8 = (short)32384;
int zero = 0;
unsigned int var_10 = 3797735192U;
unsigned int var_11 = 3457017597U;
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
