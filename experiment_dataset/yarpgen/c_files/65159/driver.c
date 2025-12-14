#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-32003;
long long int var_8 = 5037789892449794397LL;
long long int var_10 = 4215844906476118996LL;
int zero = 0;
unsigned long long int var_13 = 12434994620364963356ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)78;
unsigned int var_16 = 2886414470U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
