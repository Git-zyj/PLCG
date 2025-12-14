#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)13400;
signed char var_7 = (signed char)-119;
unsigned long long int var_11 = 18372852012330302122ULL;
int zero = 0;
int var_17 = 519157974;
signed char var_18 = (signed char)-7;
unsigned long long int var_19 = 15799804619747425977ULL;
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
