#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 235649002368410255LL;
signed char var_5 = (signed char)-67;
unsigned int var_6 = 3642503508U;
signed char var_7 = (signed char)61;
unsigned char var_12 = (unsigned char)168;
int zero = 0;
unsigned short var_16 = (unsigned short)62137;
unsigned long long int var_17 = 17024846787657256007ULL;
unsigned char var_18 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
