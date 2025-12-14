#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1827728225;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 2631456117008044173ULL;
unsigned short var_9 = (unsigned short)60378;
int zero = 0;
signed char var_10 = (signed char)46;
unsigned int var_11 = 50758180U;
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
