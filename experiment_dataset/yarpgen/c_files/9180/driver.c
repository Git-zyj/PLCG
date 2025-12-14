#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1800321734;
signed char var_7 = (signed char)-116;
long long int var_11 = -4068292572863681256LL;
unsigned long long int var_13 = 17354231918098747785ULL;
int zero = 0;
long long int var_18 = 3587864311341931764LL;
int var_19 = -156648703;
unsigned int var_20 = 1442067066U;
short var_21 = (short)12177;
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
