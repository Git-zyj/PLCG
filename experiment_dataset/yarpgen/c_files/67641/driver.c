#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8563647492102500656ULL;
long long int var_4 = 2009286258090099796LL;
unsigned int var_8 = 2752909322U;
unsigned long long int var_9 = 9454078300305966055ULL;
unsigned long long int var_10 = 8718391355398731413ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)33286;
unsigned short var_14 = (unsigned short)263;
unsigned char var_15 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
