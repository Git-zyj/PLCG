#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3536656614U;
signed char var_1 = (signed char)-25;
unsigned char var_2 = (unsigned char)175;
_Bool var_5 = (_Bool)1;
long long int var_7 = -717772959577897753LL;
unsigned int var_9 = 959144060U;
int var_10 = 2383526;
int var_12 = 1906167996;
long long int var_13 = -354953035301402022LL;
_Bool var_15 = (_Bool)1;
int var_17 = 269808352;
int zero = 0;
unsigned int var_18 = 711734843U;
signed char var_19 = (signed char)-39;
short var_20 = (short)-1036;
void init() {
}

void checksum() {
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
