#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)252;
unsigned short var_4 = (unsigned short)17587;
signed char var_9 = (signed char)74;
unsigned int var_10 = 3646306099U;
_Bool var_11 = (_Bool)1;
int var_16 = 1343650210;
unsigned long long int var_17 = 2553306598052744695ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)251;
signed char var_20 = (signed char)94;
unsigned char var_21 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
