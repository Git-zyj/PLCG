#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30150;
int var_4 = 504072132;
int var_7 = -1820501156;
long long int var_11 = 3844059409443791995LL;
unsigned short var_14 = (unsigned short)62239;
long long int var_15 = 3833153245617542285LL;
int zero = 0;
unsigned short var_18 = (unsigned short)48385;
int var_19 = -1865125696;
long long int var_20 = -1899148486300289926LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
