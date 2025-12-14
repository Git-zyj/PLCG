#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10223273297991407674ULL;
unsigned long long int var_4 = 1325023325169844482ULL;
long long int var_6 = -4941944236365847173LL;
unsigned long long int var_8 = 9980619240161147607ULL;
unsigned long long int var_9 = 5091958786646218521ULL;
int zero = 0;
unsigned long long int var_16 = 4446264646816600814ULL;
unsigned int var_17 = 1410867751U;
short var_18 = (short)-7035;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
