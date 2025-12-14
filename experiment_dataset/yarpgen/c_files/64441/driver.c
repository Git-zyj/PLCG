#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)31;
unsigned long long int var_4 = 7501012073122660892ULL;
long long int var_10 = 6329024731026072086LL;
unsigned short var_11 = (unsigned short)63274;
int zero = 0;
int var_12 = 1926668337;
unsigned long long int var_13 = 8307915904465724554ULL;
unsigned long long int var_14 = 2823513856534371342ULL;
unsigned long long int var_15 = 9069441268313096841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
