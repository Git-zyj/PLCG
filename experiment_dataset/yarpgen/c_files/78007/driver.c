#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1713176306;
unsigned long long int var_3 = 10938750921451209874ULL;
short var_4 = (short)4685;
int var_5 = -826214752;
long long int var_7 = 6309480830532500293LL;
unsigned short var_8 = (unsigned short)40495;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 203723364346173993ULL;
short var_13 = (short)10093;
long long int var_15 = -6248497814691833843LL;
int zero = 0;
long long int var_17 = 4885489884252496231LL;
unsigned char var_18 = (unsigned char)234;
long long int var_19 = 1522081834707961981LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
