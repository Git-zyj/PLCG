#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)15833;
unsigned short var_4 = (unsigned short)42317;
unsigned long long int var_5 = 4846892075837938529ULL;
unsigned char var_6 = (unsigned char)79;
signed char var_7 = (signed char)-67;
unsigned short var_8 = (unsigned short)6737;
long long int var_9 = 4533177738324430155LL;
unsigned short var_10 = (unsigned short)37547;
int zero = 0;
unsigned long long int var_11 = 7133898916914445368ULL;
unsigned short var_12 = (unsigned short)40654;
unsigned int var_13 = 1370188635U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
