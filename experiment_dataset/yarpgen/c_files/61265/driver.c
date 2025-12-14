#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18822;
short var_1 = (short)-15717;
unsigned long long int var_4 = 13644706826339751535ULL;
signed char var_5 = (signed char)-114;
unsigned short var_9 = (unsigned short)45820;
unsigned short var_10 = (unsigned short)34731;
short var_13 = (short)15612;
int zero = 0;
short var_16 = (short)-27700;
unsigned short var_17 = (unsigned short)46205;
int var_18 = 1811118003;
unsigned char var_19 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
