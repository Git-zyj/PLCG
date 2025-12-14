#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 354503830;
unsigned short var_1 = (unsigned short)62477;
int var_2 = 1258472663;
int var_3 = -361356;
signed char var_4 = (signed char)71;
int var_5 = -213256040;
short var_6 = (short)-17950;
unsigned long long int var_7 = 1321981525046267246ULL;
unsigned long long int var_8 = 7482726748507597101ULL;
unsigned long long int var_9 = 3008811292165746942ULL;
unsigned long long int var_10 = 14741847094184230416ULL;
signed char var_11 = (signed char)-57;
unsigned char var_12 = (unsigned char)13;
int zero = 0;
unsigned int var_13 = 3746055578U;
signed char var_14 = (signed char)36;
unsigned int var_15 = 495876234U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
