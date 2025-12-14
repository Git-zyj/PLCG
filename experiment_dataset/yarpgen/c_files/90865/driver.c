#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
signed char var_7 = (signed char)41;
signed char var_9 = (signed char)-45;
unsigned long long int var_10 = 12186093748943369639ULL;
int zero = 0;
unsigned long long int var_13 = 12728296992666035963ULL;
signed char var_14 = (signed char)-98;
int var_15 = 921418986;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
