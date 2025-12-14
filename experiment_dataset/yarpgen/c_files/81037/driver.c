#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1081177618;
unsigned long long int var_8 = 741878368262014406ULL;
_Bool var_9 = (_Bool)0;
long long int var_11 = 3642023425326225874LL;
short var_12 = (short)-31669;
signed char var_15 = (signed char)-8;
int zero = 0;
unsigned long long int var_16 = 2687361379193998609ULL;
short var_17 = (short)-10126;
unsigned char var_18 = (unsigned char)235;
_Bool var_19 = (_Bool)1;
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
