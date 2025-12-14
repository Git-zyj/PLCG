#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15755454448101168821ULL;
unsigned short var_5 = (unsigned short)28417;
unsigned short var_14 = (unsigned short)25315;
int zero = 0;
unsigned char var_16 = (unsigned char)110;
unsigned short var_17 = (unsigned short)40720;
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
