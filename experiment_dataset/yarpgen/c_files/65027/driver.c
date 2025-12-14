#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1145496147;
unsigned int var_4 = 1091725174U;
unsigned int var_5 = 3617087773U;
unsigned int var_6 = 324780954U;
short var_9 = (short)-32515;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 775322743U;
long long int var_12 = -8263690040228130518LL;
long long int var_14 = -6649612831048925510LL;
int zero = 0;
int var_15 = 702751732;
long long int var_16 = -4283552930455445266LL;
unsigned char var_17 = (unsigned char)97;
long long int var_18 = 2060410940464931036LL;
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
