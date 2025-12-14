#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 501264918;
int var_7 = -2128782395;
long long int var_9 = 100439016171752745LL;
signed char var_10 = (signed char)-106;
int zero = 0;
unsigned short var_14 = (unsigned short)26275;
unsigned char var_15 = (unsigned char)36;
void init() {
}

void checksum() {
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
