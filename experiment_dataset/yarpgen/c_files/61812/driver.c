#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4803160165454684487ULL;
short var_5 = (short)-12362;
unsigned char var_6 = (unsigned char)35;
unsigned long long int var_15 = 3898641782004712203ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)133;
long long int var_21 = -5848046204622379150LL;
void init() {
}

void checksum() {
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
