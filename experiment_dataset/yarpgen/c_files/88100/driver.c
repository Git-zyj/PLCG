#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
unsigned long long int var_2 = 551060959356149427ULL;
unsigned long long int var_4 = 4685367516939544985ULL;
unsigned char var_5 = (unsigned char)186;
unsigned long long int var_7 = 1603549756306020057ULL;
unsigned long long int var_10 = 15071968746669600623ULL;
unsigned char var_11 = (unsigned char)182;
unsigned char var_12 = (unsigned char)240;
int zero = 0;
unsigned long long int var_13 = 6473312541152134676ULL;
unsigned long long int var_14 = 191242313242127714ULL;
unsigned long long int var_15 = 9843900283680622349ULL;
short var_16 = (short)31068;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
