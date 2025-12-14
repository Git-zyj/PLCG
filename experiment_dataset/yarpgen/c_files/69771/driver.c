#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1319913453;
int var_4 = -2099170098;
unsigned char var_6 = (unsigned char)84;
unsigned long long int var_7 = 16771489209168826038ULL;
unsigned short var_11 = (unsigned short)9164;
unsigned char var_12 = (unsigned char)49;
unsigned long long int var_14 = 1032756061550847007ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)148;
int var_16 = -1672072364;
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
