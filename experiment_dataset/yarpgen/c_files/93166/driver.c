#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_6 = 576475424;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3947790649U;
int zero = 0;
short var_17 = (short)4600;
short var_18 = (short)31754;
long long int var_19 = 965869787159583007LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
