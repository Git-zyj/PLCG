#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -934453690;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 371745830U;
unsigned long long int var_14 = 15029693674611583681ULL;
int zero = 0;
unsigned long long int var_15 = 15048275304626811028ULL;
unsigned int var_16 = 3061991677U;
unsigned char var_17 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
