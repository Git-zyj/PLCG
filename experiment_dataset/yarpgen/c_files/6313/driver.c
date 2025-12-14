#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 274815884;
long long int var_2 = -6665543351869250996LL;
short var_4 = (short)10501;
unsigned long long int var_5 = 17436879546888398357ULL;
signed char var_6 = (signed char)37;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-7;
signed char var_17 = (signed char)122;
signed char var_18 = (signed char)-91;
int zero = 0;
int var_20 = -666148421;
long long int var_21 = -4361020988055007281LL;
long long int var_22 = -731551048916564833LL;
unsigned long long int var_23 = 2318000816001982690ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
