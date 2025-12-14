#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18969;
unsigned long long int var_1 = 3850192300725514930ULL;
long long int var_2 = -8490609908560609460LL;
unsigned long long int var_4 = 1121507696614561399ULL;
unsigned long long int var_6 = 2891455498097168767ULL;
unsigned short var_8 = (unsigned short)34375;
unsigned long long int var_11 = 11847501066259529954ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)61;
unsigned long long int var_13 = 17609508433516299896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
