#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 300962683409125524LL;
unsigned short var_1 = (unsigned short)728;
int var_7 = -1095976168;
long long int var_9 = -6572825920578674459LL;
int var_11 = -2060239004;
unsigned char var_14 = (unsigned char)13;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
long long int var_16 = 9067679990655654579LL;
unsigned long long int var_17 = 6697354069208594899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
