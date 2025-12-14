#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -132510700;
int var_1 = -286619074;
int var_2 = 831743388;
short var_3 = (short)-14644;
int var_5 = -376366414;
unsigned short var_6 = (unsigned short)31476;
unsigned char var_7 = (unsigned char)207;
unsigned short var_10 = (unsigned short)38767;
unsigned long long int var_11 = 17190809101887511333ULL;
unsigned long long int var_12 = 14420083475127457702ULL;
short var_15 = (short)-26755;
unsigned long long int var_17 = 14998954900702050654ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 6003741849937506120ULL;
unsigned short var_20 = (unsigned short)49894;
unsigned char var_21 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
