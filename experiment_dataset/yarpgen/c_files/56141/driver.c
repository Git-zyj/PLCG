#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8556944900107427608LL;
unsigned int var_5 = 1579512707U;
unsigned char var_7 = (unsigned char)221;
unsigned short var_8 = (unsigned short)49643;
signed char var_10 = (signed char)-78;
unsigned char var_11 = (unsigned char)114;
unsigned char var_13 = (unsigned char)137;
int zero = 0;
unsigned int var_14 = 616387465U;
unsigned long long int var_15 = 14256887325907770000ULL;
unsigned int var_16 = 3651225678U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
