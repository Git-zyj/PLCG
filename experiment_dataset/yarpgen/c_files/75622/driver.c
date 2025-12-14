#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29621;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-70;
unsigned char var_5 = (unsigned char)104;
unsigned long long int var_8 = 4085260369498088314ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4895712247068006803LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
