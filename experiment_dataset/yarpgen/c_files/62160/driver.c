#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)70;
unsigned char var_4 = (unsigned char)252;
unsigned char var_9 = (unsigned char)162;
unsigned char var_10 = (unsigned char)228;
unsigned char var_12 = (unsigned char)0;
unsigned char var_14 = (unsigned char)17;
unsigned char var_15 = (unsigned char)181;
int zero = 0;
unsigned char var_19 = (unsigned char)35;
unsigned char var_20 = (unsigned char)126;
unsigned char var_21 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
