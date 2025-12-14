#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4148303439U;
int var_4 = -2020208563;
unsigned int var_5 = 3990466348U;
unsigned short var_6 = (unsigned short)21927;
unsigned char var_7 = (unsigned char)62;
unsigned short var_9 = (unsigned short)17363;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -579810998;
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
