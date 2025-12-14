#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43612;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)103;
unsigned char var_6 = (unsigned char)58;
short var_7 = (short)8679;
signed char var_10 = (signed char)17;
short var_11 = (short)-6797;
unsigned char var_16 = (unsigned char)165;
int zero = 0;
int var_18 = -236097347;
unsigned long long int var_19 = 4615786274138335729ULL;
unsigned long long int var_20 = 16167822079537530130ULL;
_Bool var_21 = (_Bool)0;
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
