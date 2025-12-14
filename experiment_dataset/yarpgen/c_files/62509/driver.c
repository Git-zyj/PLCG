#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2434784830505357568ULL;
unsigned char var_8 = (unsigned char)189;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 509788790703450263ULL;
unsigned char var_15 = (unsigned char)208;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)19;
unsigned long long int var_20 = 15062339059838622566ULL;
unsigned char var_21 = (unsigned char)153;
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
