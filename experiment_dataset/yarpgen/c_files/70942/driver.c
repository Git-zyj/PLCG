#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1131793323582844619ULL;
int var_1 = 520943725;
unsigned int var_5 = 766358250U;
unsigned short var_10 = (unsigned short)40042;
int zero = 0;
unsigned short var_11 = (unsigned short)44463;
long long int var_12 = 9100435862719525180LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
