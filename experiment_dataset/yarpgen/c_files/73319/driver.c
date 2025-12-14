#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12166970496200771342ULL;
unsigned long long int var_3 = 4453210687109060258ULL;
unsigned char var_5 = (unsigned char)200;
unsigned short var_9 = (unsigned short)29089;
short var_11 = (short)-17778;
long long int var_17 = 8679517014467638726LL;
int zero = 0;
unsigned short var_19 = (unsigned short)28565;
long long int var_20 = 4109321211290208061LL;
unsigned char var_21 = (unsigned char)11;
void init() {
}

void checksum() {
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
