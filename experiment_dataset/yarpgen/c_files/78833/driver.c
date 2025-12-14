#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2751857563356285872ULL;
long long int var_1 = -5362197961137355646LL;
unsigned char var_7 = (unsigned char)172;
long long int var_8 = 5808294449206949915LL;
unsigned int var_9 = 2856629953U;
unsigned char var_12 = (unsigned char)158;
unsigned long long int var_13 = 2958852699541073204ULL;
int zero = 0;
unsigned long long int var_16 = 1508325129094873312ULL;
unsigned short var_17 = (unsigned short)30135;
long long int var_18 = 9197103223373009441LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
