#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1768953641221311715LL;
unsigned long long int var_5 = 17612689851739155765ULL;
unsigned long long int var_6 = 14990098866818196486ULL;
unsigned long long int var_8 = 15554716193006382075ULL;
int zero = 0;
long long int var_11 = 4836686122488978204LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)63114;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
