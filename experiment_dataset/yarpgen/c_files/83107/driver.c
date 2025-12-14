#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3596686838172068209LL;
long long int var_4 = 2080784757951451865LL;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)32229;
int zero = 0;
short var_10 = (short)-3571;
long long int var_11 = 8052497367624443429LL;
unsigned char var_12 = (unsigned char)174;
short var_13 = (short)30145;
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
