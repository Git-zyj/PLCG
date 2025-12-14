#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1254579306023073503LL;
long long int var_2 = 5205631030483128150LL;
unsigned long long int var_4 = 13237286838542572017ULL;
int var_8 = 2038446879;
int zero = 0;
unsigned short var_14 = (unsigned short)3716;
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
