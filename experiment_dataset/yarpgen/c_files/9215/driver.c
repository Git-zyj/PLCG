#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3336865513U;
unsigned short var_6 = (unsigned short)11624;
unsigned long long int var_16 = 12328750798323274508ULL;
signed char var_17 = (signed char)2;
int zero = 0;
long long int var_18 = 3236559358478877861LL;
int var_19 = -1146756296;
long long int var_20 = -7326954511646121608LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
