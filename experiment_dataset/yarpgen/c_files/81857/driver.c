#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51560;
unsigned int var_2 = 2935336351U;
long long int var_8 = -7638291185610575639LL;
unsigned long long int var_9 = 9076979382513088419ULL;
int zero = 0;
short var_12 = (short)30322;
long long int var_13 = 344346451366723774LL;
signed char var_14 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
