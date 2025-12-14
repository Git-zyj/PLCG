#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1562287101;
short var_3 = (short)-17683;
short var_4 = (short)-19818;
long long int var_5 = 7080412788641185229LL;
long long int var_7 = -4747567480810210184LL;
short var_8 = (short)14568;
unsigned short var_10 = (unsigned short)3117;
short var_11 = (short)15958;
unsigned long long int var_12 = 3798078668277513459ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)189;
unsigned int var_14 = 1332435987U;
unsigned char var_15 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
