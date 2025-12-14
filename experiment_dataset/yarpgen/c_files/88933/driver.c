#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51156;
int var_3 = -1208970972;
unsigned short var_7 = (unsigned short)10705;
unsigned long long int var_9 = 5512768737851660927ULL;
unsigned short var_10 = (unsigned short)7771;
unsigned short var_11 = (unsigned short)27711;
unsigned short var_12 = (unsigned short)62719;
long long int var_16 = -1400003597633491546LL;
int zero = 0;
signed char var_20 = (signed char)119;
signed char var_21 = (signed char)-115;
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
