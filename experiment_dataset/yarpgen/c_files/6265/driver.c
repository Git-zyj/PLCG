#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65341;
unsigned char var_4 = (unsigned char)253;
int var_6 = 2123054060;
unsigned char var_7 = (unsigned char)121;
unsigned short var_11 = (unsigned short)15319;
long long int var_12 = -2231096131093727919LL;
unsigned char var_13 = (unsigned char)165;
signed char var_14 = (signed char)-1;
long long int var_15 = -7287512292126703676LL;
int zero = 0;
long long int var_18 = 9172877354221080256LL;
int var_19 = 1070086424;
int var_20 = -474452779;
int var_21 = -2144433643;
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
