#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)225;
int var_4 = -737724977;
long long int var_6 = -6868026275306299473LL;
signed char var_7 = (signed char)106;
int zero = 0;
unsigned int var_15 = 246586050U;
long long int var_16 = 8976965664802006336LL;
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
