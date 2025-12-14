#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25387;
short var_7 = (short)30415;
long long int var_9 = 2932260584475658043LL;
unsigned char var_13 = (unsigned char)244;
unsigned char var_14 = (unsigned char)98;
unsigned long long int var_16 = 15034430415501584135ULL;
int zero = 0;
unsigned int var_17 = 804600960U;
unsigned char var_18 = (unsigned char)76;
unsigned char var_19 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
