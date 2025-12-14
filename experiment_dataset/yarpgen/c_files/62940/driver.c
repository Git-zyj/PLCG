#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1952686385378924978ULL;
long long int var_7 = 5949758325552632206LL;
unsigned long long int var_8 = 13082547382698016190ULL;
unsigned char var_11 = (unsigned char)161;
int zero = 0;
signed char var_14 = (signed char)-7;
unsigned short var_15 = (unsigned short)16515;
void init() {
}

void checksum() {
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
