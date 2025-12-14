#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9985724744377779726ULL;
long long int var_3 = 6112836913090661911LL;
unsigned char var_4 = (unsigned char)247;
unsigned char var_7 = (unsigned char)43;
short var_8 = (short)10413;
signed char var_9 = (signed char)108;
unsigned long long int var_12 = 8282314932324826456ULL;
unsigned char var_19 = (unsigned char)132;
int zero = 0;
unsigned int var_20 = 831582710U;
unsigned char var_21 = (unsigned char)250;
int var_22 = 426242165;
unsigned long long int var_23 = 2524989499315992882ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
