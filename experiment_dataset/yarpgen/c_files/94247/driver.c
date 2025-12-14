#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)158;
unsigned long long int var_4 = 450710912362270534ULL;
unsigned int var_5 = 3522073920U;
signed char var_9 = (signed char)-97;
unsigned int var_10 = 25816549U;
long long int var_11 = 4157346582239760051LL;
int zero = 0;
int var_12 = 386306736;
signed char var_13 = (signed char)49;
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
