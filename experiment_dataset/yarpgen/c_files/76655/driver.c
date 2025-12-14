#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
long long int var_5 = -6032270765378153419LL;
unsigned long long int var_7 = 2747676570267998654ULL;
short var_11 = (short)25141;
unsigned short var_16 = (unsigned short)21155;
int zero = 0;
long long int var_18 = -9207928514893708875LL;
unsigned char var_19 = (unsigned char)59;
unsigned short var_20 = (unsigned short)33760;
void init() {
}

void checksum() {
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
