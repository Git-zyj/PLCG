#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4234;
int var_2 = 393283905;
_Bool var_3 = (_Bool)0;
int var_7 = 419030291;
unsigned int var_9 = 3422929797U;
signed char var_10 = (signed char)-14;
signed char var_11 = (signed char)-49;
int zero = 0;
long long int var_13 = 3372920793618559379LL;
short var_14 = (short)12212;
unsigned short var_15 = (unsigned short)49743;
void init() {
}

void checksum() {
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
