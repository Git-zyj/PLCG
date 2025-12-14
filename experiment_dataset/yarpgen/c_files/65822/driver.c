#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned char var_2 = (unsigned char)207;
unsigned char var_3 = (unsigned char)94;
long long int var_5 = -3314522638045385881LL;
unsigned int var_6 = 326948109U;
unsigned short var_9 = (unsigned short)40134;
int zero = 0;
unsigned long long int var_11 = 16142632255324027071ULL;
unsigned int var_12 = 3476733609U;
unsigned char var_13 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
