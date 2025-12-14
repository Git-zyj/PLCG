#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29330;
unsigned long long int var_7 = 5000870034010941478ULL;
long long int var_8 = 3187541060836991963LL;
unsigned char var_10 = (unsigned char)228;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = 1927485413;
unsigned int var_14 = 3897500348U;
short var_15 = (short)24596;
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
