#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63364;
unsigned short var_2 = (unsigned short)50336;
long long int var_3 = 2225033013343863398LL;
unsigned long long int var_7 = 1336111768919909951ULL;
unsigned char var_9 = (unsigned char)94;
int zero = 0;
int var_10 = -1598019641;
int var_11 = 1520315142;
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
