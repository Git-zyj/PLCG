#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
short var_1 = (short)28508;
int var_4 = -1130960021;
long long int var_5 = -217402624792442928LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4167007567978925330LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 9293680800787505867ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
