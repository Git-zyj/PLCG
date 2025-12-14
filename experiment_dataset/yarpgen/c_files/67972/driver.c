#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2737349280466573202LL;
unsigned short var_1 = (unsigned short)43478;
unsigned int var_2 = 3098144544U;
short var_6 = (short)32530;
long long int var_10 = -2100745663334166630LL;
unsigned int var_11 = 209306860U;
int zero = 0;
short var_12 = (short)19949;
unsigned short var_13 = (unsigned short)14488;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2859780387U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
