#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
unsigned long long int var_7 = 10710410104552435846ULL;
unsigned char var_9 = (unsigned char)117;
long long int var_11 = -6321037656956760736LL;
long long int var_13 = 2876657782001437500LL;
int zero = 0;
unsigned int var_17 = 2473849814U;
unsigned int var_18 = 3609429110U;
unsigned int var_19 = 1910340697U;
unsigned long long int var_20 = 9593541428993202086ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
