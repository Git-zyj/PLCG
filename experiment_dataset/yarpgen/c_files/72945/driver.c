#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2523498991U;
short var_1 = (short)-27611;
unsigned short var_2 = (unsigned short)57588;
short var_3 = (short)-17143;
signed char var_7 = (signed char)31;
int var_9 = 1772985306;
long long int var_10 = 4945493210230426457LL;
int var_11 = 920575500;
_Bool var_12 = (_Bool)0;
long long int var_13 = -6740962344183530882LL;
unsigned int var_14 = 2960181056U;
int var_15 = -1269458099;
int zero = 0;
unsigned int var_17 = 3205604309U;
long long int var_18 = -5289627947836736605LL;
int var_19 = 98778647;
int var_20 = 1076873033;
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
