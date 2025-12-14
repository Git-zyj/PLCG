#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6270507644001420515ULL;
long long int var_11 = -6436034245391109625LL;
unsigned short var_12 = (unsigned short)40302;
long long int var_13 = 5293626162579623970LL;
unsigned char var_15 = (unsigned char)209;
unsigned short var_18 = (unsigned short)11739;
int zero = 0;
unsigned short var_19 = (unsigned short)40183;
short var_20 = (short)9339;
short var_21 = (short)6758;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
