#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
int var_4 = -1723627094;
short var_5 = (short)28218;
short var_8 = (short)31202;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)93;
unsigned char var_12 = (unsigned char)90;
long long int var_14 = 6151948846453560991LL;
short var_15 = (short)11927;
int zero = 0;
signed char var_16 = (signed char)-46;
unsigned long long int var_17 = 11470305753050765281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
