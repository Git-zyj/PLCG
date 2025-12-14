#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5254846403315038704LL;
signed char var_3 = (signed char)108;
short var_4 = (short)-14209;
unsigned char var_5 = (unsigned char)132;
unsigned long long int var_9 = 9563686041445405493ULL;
long long int var_11 = -1256670422768041189LL;
short var_12 = (short)29796;
long long int var_14 = -4369881204946204534LL;
unsigned short var_17 = (unsigned short)38322;
int zero = 0;
short var_18 = (short)-23837;
long long int var_19 = -4271507490252824335LL;
int var_20 = 1531456675;
unsigned int var_21 = 1095747777U;
signed char var_22 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
