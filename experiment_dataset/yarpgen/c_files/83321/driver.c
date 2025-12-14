#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21200;
unsigned int var_1 = 3175862334U;
unsigned long long int var_2 = 17858636773517778310ULL;
int var_3 = -999293444;
unsigned long long int var_4 = 8249003595523648780ULL;
int var_5 = 345505375;
int var_6 = -1030395693;
unsigned long long int var_7 = 17217040270556383636ULL;
int var_8 = -1669853032;
unsigned int var_9 = 92426909U;
unsigned int var_10 = 1070783315U;
unsigned int var_11 = 2402426033U;
signed char var_12 = (signed char)-79;
unsigned int var_13 = 1404138031U;
int zero = 0;
unsigned int var_14 = 2616021747U;
unsigned char var_15 = (unsigned char)130;
unsigned int var_16 = 3657351075U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
