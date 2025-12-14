#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7123;
unsigned int var_1 = 1835215129U;
signed char var_6 = (signed char)58;
long long int var_9 = -8081161768466684340LL;
unsigned long long int var_11 = 14507200100664015652ULL;
unsigned int var_12 = 2406631244U;
unsigned long long int var_13 = 2728392489058829981ULL;
int var_14 = 678062720;
int zero = 0;
long long int var_16 = 3227198869746160717LL;
short var_17 = (short)22473;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
