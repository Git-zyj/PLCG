#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 188465968546965360LL;
long long int var_2 = 3213370209073581352LL;
unsigned int var_3 = 4004600470U;
long long int var_4 = 4460616110223257918LL;
long long int var_5 = -5094381872473523009LL;
unsigned int var_6 = 1252141939U;
unsigned long long int var_9 = 3519110394276195589ULL;
int zero = 0;
unsigned long long int var_12 = 12148205074122285019ULL;
unsigned char var_13 = (unsigned char)119;
unsigned int var_14 = 4108843434U;
unsigned char var_15 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
