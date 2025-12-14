#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 693623683U;
unsigned long long int var_2 = 1725043133120025140ULL;
long long int var_3 = -717540186134843716LL;
signed char var_4 = (signed char)71;
short var_6 = (short)25951;
int var_7 = -1139477163;
unsigned short var_9 = (unsigned short)46658;
int zero = 0;
int var_10 = -133451005;
long long int var_11 = 6063426663321410098LL;
long long int var_12 = 5245810804658364633LL;
signed char var_13 = (signed char)-125;
int var_14 = -705711899;
signed char var_15 = (signed char)-70;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
