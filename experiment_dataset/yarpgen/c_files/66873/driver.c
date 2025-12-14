#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
unsigned short var_5 = (unsigned short)41746;
unsigned short var_7 = (unsigned short)54022;
long long int var_9 = 3263800944817749069LL;
int zero = 0;
short var_19 = (short)-21925;
unsigned int var_20 = 1347644229U;
_Bool var_21 = (_Bool)1;
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
