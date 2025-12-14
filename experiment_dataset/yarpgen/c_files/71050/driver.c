#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1149962016;
unsigned short var_5 = (unsigned short)994;
unsigned char var_7 = (unsigned char)136;
unsigned long long int var_9 = 6446059476641514986ULL;
signed char var_11 = (signed char)-36;
signed char var_12 = (signed char)-88;
short var_15 = (short)17172;
long long int var_16 = 6502566255733665438LL;
unsigned long long int var_17 = 5649842965158431770ULL;
int zero = 0;
long long int var_18 = -2782972016673545846LL;
int var_19 = 398913435;
long long int var_20 = 4819034185034281429LL;
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
