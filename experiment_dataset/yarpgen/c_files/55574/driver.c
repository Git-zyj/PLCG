#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)138;
unsigned int var_16 = 2217635525U;
unsigned long long int var_17 = 6581957726715976315ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-49;
int var_21 = 1988527912;
void init() {
}

void checksum() {
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
