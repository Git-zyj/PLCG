#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1430706359;
long long int var_8 = -2364700139953159603LL;
long long int var_13 = -3040168192441118787LL;
unsigned short var_14 = (unsigned short)57895;
long long int var_15 = 4043080355987778819LL;
int zero = 0;
long long int var_17 = -5618742911642180910LL;
long long int var_18 = -5219693532811994604LL;
long long int var_19 = -2458736214928076988LL;
int var_20 = 517817838;
unsigned short var_21 = (unsigned short)28014;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
