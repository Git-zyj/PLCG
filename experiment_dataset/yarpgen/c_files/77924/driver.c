#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
short var_1 = (short)26101;
short var_2 = (short)-7659;
int var_3 = 873999447;
int var_4 = 213700243;
unsigned long long int var_5 = 792360978629774022ULL;
short var_6 = (short)22943;
short var_7 = (short)-15741;
int var_9 = -1706294135;
long long int var_10 = -8605479966048254908LL;
short var_11 = (short)-28749;
short var_12 = (short)-11012;
unsigned long long int var_13 = 6236306864745177838ULL;
short var_15 = (short)24780;
unsigned int var_16 = 3167879354U;
int zero = 0;
unsigned char var_17 = (unsigned char)246;
short var_18 = (short)28943;
int var_19 = -208481365;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
