#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 327947586;
unsigned long long int var_2 = 17130841707923191100ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)29362;
unsigned char var_13 = (unsigned char)142;
int var_14 = -2099217608;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
