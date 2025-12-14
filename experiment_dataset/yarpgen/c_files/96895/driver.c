#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_11 = 3815843237U;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_19 = -941657513;
long long int var_20 = 1339033259596730987LL;
unsigned int var_21 = 3415796263U;
unsigned long long int var_22 = 5305401322661184846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
