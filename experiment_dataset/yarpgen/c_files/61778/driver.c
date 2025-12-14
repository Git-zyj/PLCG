#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)12474;
unsigned int var_5 = 450511248U;
unsigned long long int var_9 = 819862488085897606ULL;
unsigned long long int var_10 = 10388669526009061656ULL;
unsigned char var_12 = (unsigned char)169;
int zero = 0;
long long int var_17 = 6542506915335203733LL;
int var_18 = 219164570;
unsigned char var_19 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
