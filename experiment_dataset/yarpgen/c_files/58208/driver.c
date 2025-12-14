#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40621;
unsigned long long int var_2 = 13383574798028593942ULL;
signed char var_4 = (signed char)49;
signed char var_7 = (signed char)-33;
unsigned short var_9 = (unsigned short)51227;
int zero = 0;
unsigned short var_10 = (unsigned short)39764;
unsigned long long int var_11 = 5449587558923713848ULL;
unsigned int var_12 = 2540008643U;
unsigned char var_13 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
