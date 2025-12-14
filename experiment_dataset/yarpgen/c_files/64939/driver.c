#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned char var_1 = (unsigned char)68;
int var_3 = -1042426996;
unsigned char var_5 = (unsigned char)124;
signed char var_6 = (signed char)1;
int var_8 = 814536630;
signed char var_9 = (signed char)-116;
unsigned long long int var_10 = 4296876606928081128ULL;
unsigned char var_12 = (unsigned char)128;
int var_13 = 1815698762;
short var_14 = (short)18987;
long long int var_15 = -1038765956766761231LL;
unsigned char var_16 = (unsigned char)43;
int zero = 0;
signed char var_17 = (signed char)-46;
signed char var_18 = (signed char)92;
unsigned long long int var_19 = 36496295375120147ULL;
void init() {
}

void checksum() {
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
