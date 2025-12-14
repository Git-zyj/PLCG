#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21675;
unsigned short var_2 = (unsigned short)15329;
unsigned long long int var_6 = 8451812699290253167ULL;
short var_7 = (short)-19350;
signed char var_9 = (signed char)-118;
unsigned int var_12 = 1120609618U;
unsigned short var_13 = (unsigned short)55856;
unsigned int var_14 = 786849084U;
int zero = 0;
unsigned long long int var_15 = 6777804425830537679ULL;
unsigned int var_16 = 195881403U;
unsigned short var_17 = (unsigned short)8511;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
