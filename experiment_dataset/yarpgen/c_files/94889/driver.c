#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1830105669U;
unsigned long long int var_9 = 9421608715688353477ULL;
unsigned int var_12 = 4241119742U;
int var_13 = 1594895044;
unsigned short var_17 = (unsigned short)15688;
int zero = 0;
unsigned char var_18 = (unsigned char)193;
unsigned int var_19 = 3611205733U;
void init() {
}

void checksum() {
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
