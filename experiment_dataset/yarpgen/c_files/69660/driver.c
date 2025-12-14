#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_3 = (signed char)-38;
long long int var_7 = -4905186768022190914LL;
long long int var_9 = -7528319306031704515LL;
long long int var_10 = 2664365147619378718LL;
long long int var_11 = -3313735651814736435LL;
int var_15 = 201669580;
short var_16 = (short)-22396;
signed char var_17 = (signed char)-100;
int zero = 0;
short var_18 = (short)12792;
unsigned short var_19 = (unsigned short)19179;
long long int var_20 = 6335689022513078969LL;
int var_21 = -100336992;
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
