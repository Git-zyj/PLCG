#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 229289703U;
unsigned short var_1 = (unsigned short)24714;
unsigned int var_2 = 2464795647U;
unsigned short var_4 = (unsigned short)41673;
unsigned short var_5 = (unsigned short)62424;
long long int var_6 = -8217855591621938932LL;
long long int var_9 = 3790890068208357131LL;
unsigned long long int var_10 = 6432655412509950351ULL;
signed char var_11 = (signed char)-115;
long long int var_12 = 3684509451428292529LL;
signed char var_13 = (signed char)-100;
unsigned int var_15 = 2218073460U;
int zero = 0;
long long int var_16 = 798672034526628259LL;
signed char var_17 = (signed char)-39;
signed char var_18 = (signed char)83;
unsigned int var_19 = 130839883U;
unsigned short var_20 = (unsigned short)31473;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
