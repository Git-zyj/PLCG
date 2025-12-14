#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 432424064079239396ULL;
long long int var_3 = 8756550595806016860LL;
short var_4 = (short)16767;
unsigned short var_10 = (unsigned short)31868;
short var_11 = (short)-1497;
long long int var_12 = 2546030583717382110LL;
short var_13 = (short)12161;
int zero = 0;
long long int var_14 = -6419912014156696481LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
