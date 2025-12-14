#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned char var_4 = (unsigned char)126;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)36970;
unsigned long long int var_8 = 15971658902924848626ULL;
int var_9 = -1790320206;
int zero = 0;
short var_10 = (short)13744;
_Bool var_11 = (_Bool)0;
long long int var_12 = -7220025483279667511LL;
unsigned long long int var_13 = 1779573454947123420ULL;
unsigned char var_14 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
