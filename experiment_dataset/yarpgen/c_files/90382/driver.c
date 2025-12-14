#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -186336966;
unsigned long long int var_3 = 14114463370782774555ULL;
short var_5 = (short)-14300;
unsigned int var_6 = 3171599107U;
unsigned short var_7 = (unsigned short)40243;
unsigned char var_8 = (unsigned char)150;
int zero = 0;
long long int var_10 = -3996301120293774417LL;
unsigned short var_11 = (unsigned short)45689;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
