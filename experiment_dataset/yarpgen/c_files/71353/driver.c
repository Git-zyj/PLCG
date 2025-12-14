#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)13;
unsigned short var_5 = (unsigned short)63834;
unsigned char var_9 = (unsigned char)5;
unsigned int var_10 = 670291275U;
signed char var_13 = (signed char)85;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
unsigned long long int var_20 = 6772673142690435838ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
