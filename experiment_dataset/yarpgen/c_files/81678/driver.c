#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned long long int var_2 = 13313927810451755870ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3141260047U;
unsigned long long int var_11 = 9727968936998182531ULL;
unsigned long long int var_12 = 422508201901068588ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
