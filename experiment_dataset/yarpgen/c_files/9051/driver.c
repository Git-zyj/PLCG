#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1006201270U;
int var_3 = 953180295;
unsigned char var_5 = (unsigned char)135;
unsigned char var_8 = (unsigned char)50;
unsigned char var_9 = (unsigned char)250;
long long int var_10 = 6732692140873539926LL;
unsigned long long int var_11 = 17142010790658039325ULL;
unsigned char var_13 = (unsigned char)144;
unsigned int var_14 = 3970739620U;
int zero = 0;
unsigned long long int var_16 = 16862144227996897182ULL;
unsigned short var_17 = (unsigned short)48286;
unsigned int var_18 = 26168180U;
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
