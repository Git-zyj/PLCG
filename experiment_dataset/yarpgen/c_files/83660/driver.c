#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1186302317;
unsigned int var_7 = 3258864321U;
long long int var_8 = -610853420692839487LL;
unsigned int var_9 = 3596395838U;
unsigned long long int var_10 = 17087333253823712829ULL;
signed char var_12 = (signed char)108;
signed char var_13 = (signed char)124;
int zero = 0;
unsigned int var_15 = 2310705268U;
int var_16 = 1935110967;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
