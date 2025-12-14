#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
short var_2 = (short)-19986;
int var_3 = -1060530570;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2835385944802895960ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17406191532630529118ULL;
long long int var_10 = 7316632608067363451LL;
short var_11 = (short)12568;
_Bool var_12 = (_Bool)1;
short var_13 = (short)14422;
unsigned int var_14 = 3014663920U;
signed char var_15 = (signed char)-91;
int var_16 = 1161620133;
int zero = 0;
signed char var_17 = (signed char)-83;
unsigned long long int var_18 = 3146030305994834323ULL;
long long int var_19 = 6936902425280226644LL;
unsigned long long int var_20 = 8449615523232092733ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
