#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -746420854;
unsigned int var_1 = 3403562748U;
unsigned short var_2 = (unsigned short)21648;
unsigned short var_4 = (unsigned short)62270;
unsigned short var_5 = (unsigned short)31217;
unsigned short var_6 = (unsigned short)13959;
unsigned short var_8 = (unsigned short)26018;
signed char var_9 = (signed char)-64;
int zero = 0;
signed char var_10 = (signed char)-22;
signed char var_11 = (signed char)98;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5045051731928717305ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
