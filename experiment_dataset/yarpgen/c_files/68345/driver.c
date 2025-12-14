#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3922846795235664015LL;
unsigned char var_4 = (unsigned char)31;
unsigned char var_5 = (unsigned char)36;
unsigned char var_6 = (unsigned char)250;
short var_7 = (short)-24778;
unsigned long long int var_9 = 7170424762170363944ULL;
_Bool var_10 = (_Bool)0;
short var_12 = (short)12087;
int var_13 = 590181713;
int zero = 0;
unsigned long long int var_20 = 1320722398696707338ULL;
unsigned char var_21 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
