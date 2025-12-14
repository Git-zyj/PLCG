#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3940756626417117161LL;
long long int var_4 = 2712571607821268452LL;
int var_5 = 1703234730;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)206;
int zero = 0;
long long int var_10 = -1502554423771248614LL;
short var_11 = (short)31974;
unsigned char var_12 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
