#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7825953363499777385ULL;
unsigned long long int var_5 = 5009177548610481330ULL;
signed char var_6 = (signed char)109;
unsigned char var_9 = (unsigned char)119;
signed char var_10 = (signed char)-32;
int var_14 = 688850152;
unsigned long long int var_16 = 1492760321930330032ULL;
unsigned long long int var_17 = 12642120928036094749ULL;
int zero = 0;
int var_18 = -1380989545;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
