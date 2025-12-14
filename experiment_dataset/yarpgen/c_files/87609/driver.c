#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3766734037104895488LL;
unsigned long long int var_7 = 10518190597209702895ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 352859983U;
unsigned char var_15 = (unsigned char)228;
signed char var_16 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
