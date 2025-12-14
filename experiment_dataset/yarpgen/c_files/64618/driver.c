#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-104;
unsigned char var_3 = (unsigned char)186;
unsigned long long int var_4 = 7925893651381784336ULL;
signed char var_7 = (signed char)116;
unsigned char var_9 = (unsigned char)255;
int zero = 0;
unsigned char var_10 = (unsigned char)129;
unsigned char var_11 = (unsigned char)80;
unsigned short var_12 = (unsigned short)54574;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
