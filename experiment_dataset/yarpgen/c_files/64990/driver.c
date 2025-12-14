#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9069594869114234080LL;
short var_1 = (short)8459;
signed char var_2 = (signed char)-38;
int var_5 = -1897761298;
unsigned char var_6 = (unsigned char)14;
signed char var_8 = (signed char)90;
_Bool var_9 = (_Bool)0;
int var_10 = 673412247;
int var_12 = -1125846379;
signed char var_13 = (signed char)78;
int zero = 0;
int var_14 = -1351384772;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
