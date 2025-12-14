#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)190;
short var_3 = (short)-18933;
unsigned char var_6 = (unsigned char)173;
_Bool var_9 = (_Bool)1;
int var_11 = 722511731;
unsigned char var_14 = (unsigned char)50;
int zero = 0;
unsigned int var_16 = 3226349351U;
unsigned long long int var_17 = 3269437991994281326ULL;
void init() {
}

void checksum() {
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
