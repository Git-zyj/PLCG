#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
unsigned char var_1 = (unsigned char)19;
int var_2 = -586402633;
_Bool var_3 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 10123586514813943336ULL;
unsigned short var_11 = (unsigned short)34155;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
