#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned long long int var_1 = 3320987555473487918ULL;
unsigned long long int var_4 = 18153850986884894180ULL;
signed char var_6 = (signed char)-63;
signed char var_7 = (signed char)25;
unsigned long long int var_8 = 14815347605186466131ULL;
unsigned char var_9 = (unsigned char)238;
unsigned char var_11 = (unsigned char)113;
unsigned int var_12 = 3662526707U;
int zero = 0;
unsigned char var_13 = (unsigned char)134;
long long int var_14 = -6571716540294875762LL;
unsigned char var_15 = (unsigned char)229;
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
