#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)251;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 13092109794130095073ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)54877;
unsigned short var_15 = (unsigned short)25978;
void init() {
}

void checksum() {
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
