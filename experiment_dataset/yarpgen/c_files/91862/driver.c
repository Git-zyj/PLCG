#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)223;
short var_11 = (short)-23666;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 1961164088U;
int zero = 0;
short var_20 = (short)-28389;
unsigned long long int var_21 = 12855638132292576374ULL;
void init() {
}

void checksum() {
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
