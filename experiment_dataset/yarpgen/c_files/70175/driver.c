#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10924;
int var_1 = 2082687600;
unsigned int var_3 = 1202010042U;
signed char var_4 = (signed char)44;
unsigned short var_6 = (unsigned short)22954;
int var_9 = -1705316446;
short var_10 = (short)-24930;
unsigned long long int var_11 = 5137736981604679686ULL;
unsigned char var_12 = (unsigned char)84;
long long int var_13 = 4058310594992370945LL;
short var_14 = (short)-5733;
int zero = 0;
unsigned char var_15 = (unsigned char)188;
signed char var_16 = (signed char)62;
signed char var_17 = (signed char)-106;
long long int var_18 = -3721471249644342694LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
