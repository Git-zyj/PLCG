#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -901427514;
signed char var_1 = (signed char)-118;
signed char var_2 = (signed char)7;
int var_15 = 297610666;
int var_16 = -756050501;
int zero = 0;
unsigned short var_17 = (unsigned short)18594;
int var_18 = -1377881109;
unsigned char var_19 = (unsigned char)184;
long long int var_20 = -5309529509170881669LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
