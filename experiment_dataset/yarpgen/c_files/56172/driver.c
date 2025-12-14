#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
unsigned int var_3 = 1970080153U;
int var_10 = -1896386608;
signed char var_17 = (signed char)25;
int zero = 0;
int var_19 = -11907077;
long long int var_20 = 6229555973238886809LL;
unsigned char var_21 = (unsigned char)25;
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
