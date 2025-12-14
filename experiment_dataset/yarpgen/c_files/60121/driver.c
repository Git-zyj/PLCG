#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)157;
unsigned long long int var_5 = 6633650577410756805ULL;
unsigned short var_8 = (unsigned short)31362;
unsigned short var_13 = (unsigned short)44042;
unsigned long long int var_14 = 10249627256954196065ULL;
int zero = 0;
signed char var_18 = (signed char)-29;
signed char var_19 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
