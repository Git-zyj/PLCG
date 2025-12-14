#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 647382230210001073LL;
unsigned short var_2 = (unsigned short)19031;
unsigned char var_4 = (unsigned char)177;
long long int var_9 = -4583582184346818228LL;
unsigned long long int var_10 = 13360026036932793580ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 2369654592959238664LL;
unsigned long long int var_17 = 4859686157173631518ULL;
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
