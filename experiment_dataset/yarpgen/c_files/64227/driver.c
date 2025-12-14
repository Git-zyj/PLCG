#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned short var_3 = (unsigned short)32442;
long long int var_4 = -1568272705678405220LL;
signed char var_6 = (signed char)-11;
unsigned int var_9 = 3507571088U;
int zero = 0;
unsigned int var_10 = 2727217674U;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
