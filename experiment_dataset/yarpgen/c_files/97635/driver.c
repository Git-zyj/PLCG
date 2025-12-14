#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = 6006650089682387997LL;
unsigned short var_5 = (unsigned short)38522;
unsigned short var_10 = (unsigned short)6690;
signed char var_13 = (signed char)-126;
unsigned char var_14 = (unsigned char)60;
int zero = 0;
long long int var_18 = -4537170814063937525LL;
unsigned long long int var_19 = 17349917808025436329ULL;
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
