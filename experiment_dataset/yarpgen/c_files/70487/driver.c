#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6955481160061249773LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-49;
short var_4 = (short)27879;
unsigned short var_6 = (unsigned short)39428;
unsigned char var_7 = (unsigned char)124;
unsigned short var_9 = (unsigned short)64635;
int zero = 0;
long long int var_10 = -8758616651470423786LL;
int var_11 = 401709167;
long long int var_12 = -2541880165972114366LL;
unsigned short var_13 = (unsigned short)1657;
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
