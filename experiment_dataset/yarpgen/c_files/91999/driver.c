#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 808491450U;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)1049;
long long int var_13 = -3250184722219701184LL;
unsigned int var_14 = 3149298143U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
