#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15669;
unsigned char var_3 = (unsigned char)232;
unsigned long long int var_5 = 7772823592152721372ULL;
unsigned long long int var_7 = 8880898004575936120ULL;
unsigned short var_8 = (unsigned short)34329;
short var_9 = (short)1152;
unsigned short var_10 = (unsigned short)64928;
signed char var_11 = (signed char)-79;
int zero = 0;
signed char var_13 = (signed char)-116;
unsigned int var_14 = 3677137474U;
unsigned short var_15 = (unsigned short)29482;
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
