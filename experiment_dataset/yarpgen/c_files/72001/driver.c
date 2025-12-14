#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 45524868;
unsigned short var_6 = (unsigned short)35422;
_Bool var_12 = (_Bool)0;
unsigned int var_15 = 2623157212U;
int zero = 0;
unsigned int var_18 = 1567113365U;
int var_19 = -1338241367;
long long int var_20 = -6993770007675415246LL;
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
