#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_6 = (short)-25957;
int var_8 = 908951106;
unsigned int var_9 = 131353971U;
short var_15 = (short)-4187;
int zero = 0;
short var_16 = (short)996;
unsigned long long int var_17 = 10668035154909511459ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2939673480U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
