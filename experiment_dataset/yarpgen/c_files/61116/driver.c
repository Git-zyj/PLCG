#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7219287843892914587ULL;
unsigned char var_1 = (unsigned char)181;
unsigned int var_8 = 1332134233U;
long long int var_11 = 93646299675652238LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 5050828098509150538ULL;
void init() {
}

void checksum() {
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
