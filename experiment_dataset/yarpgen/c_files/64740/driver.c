#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-65;
unsigned int var_8 = 1703465142U;
unsigned int var_12 = 3668405746U;
int var_15 = 342604374;
unsigned short var_18 = (unsigned short)53853;
int zero = 0;
int var_19 = 416459910;
signed char var_20 = (signed char)-13;
void init() {
}

void checksum() {
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
