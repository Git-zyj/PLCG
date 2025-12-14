#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)24926;
signed char var_12 = (signed char)-44;
long long int var_18 = 2502268998020873117LL;
int zero = 0;
unsigned char var_19 = (unsigned char)21;
unsigned long long int var_20 = 8216141213435038701ULL;
unsigned int var_21 = 4288235965U;
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
