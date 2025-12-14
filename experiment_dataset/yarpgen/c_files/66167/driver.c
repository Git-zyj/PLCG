#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)125;
unsigned short var_2 = (unsigned short)64112;
short var_4 = (short)27145;
long long int var_5 = 8607626485086323866LL;
unsigned int var_6 = 3137044117U;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
int var_14 = -1436579194;
unsigned char var_15 = (unsigned char)66;
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
