#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2402461091U;
long long int var_3 = 8272911592122187065LL;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)206;
unsigned char var_10 = (unsigned char)64;
long long int var_11 = 1630995400929285409LL;
long long int var_12 = -2584798417624564145LL;
unsigned char var_13 = (unsigned char)177;
int zero = 0;
signed char var_14 = (signed char)120;
long long int var_15 = 7079870278982926952LL;
signed char var_16 = (signed char)-7;
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
