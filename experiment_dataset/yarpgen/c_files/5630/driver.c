#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -893966068318397877LL;
signed char var_3 = (signed char)-117;
unsigned int var_4 = 2937001790U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-123;
unsigned long long int var_10 = 7222852224968630329ULL;
int zero = 0;
int var_12 = 787992600;
unsigned char var_13 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
