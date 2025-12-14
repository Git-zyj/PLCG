#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63219;
unsigned short var_10 = (unsigned short)38109;
unsigned short var_13 = (unsigned short)4225;
int zero = 0;
unsigned long long int var_18 = 3355904939887790155ULL;
int var_19 = 942095542;
long long int var_20 = 5530601341081355008LL;
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
