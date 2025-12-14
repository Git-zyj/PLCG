#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36637;
signed char var_5 = (signed char)63;
unsigned short var_9 = (unsigned short)15137;
unsigned char var_10 = (unsigned char)157;
unsigned char var_14 = (unsigned char)170;
int zero = 0;
unsigned long long int var_15 = 625971624590612721ULL;
unsigned long long int var_16 = 16803355174215866737ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
