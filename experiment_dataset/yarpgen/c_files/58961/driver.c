#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6235020577488836059LL;
short var_1 = (short)-29438;
unsigned char var_2 = (unsigned char)31;
long long int var_3 = -8615105309049967359LL;
unsigned char var_4 = (unsigned char)236;
long long int var_5 = 5287773101359097659LL;
short var_6 = (short)21448;
long long int var_7 = 6055090298621512047LL;
short var_8 = (short)12809;
int zero = 0;
long long int var_10 = -2860643567834839038LL;
long long int var_11 = 2767888186306504332LL;
short var_12 = (short)14043;
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
