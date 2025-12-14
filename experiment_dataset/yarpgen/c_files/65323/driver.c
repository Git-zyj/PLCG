#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)61;
unsigned long long int var_5 = 3225538755901942171ULL;
unsigned char var_7 = (unsigned char)55;
unsigned long long int var_9 = 17730133588501784984ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)18969;
long long int var_11 = 943294588045150506LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
