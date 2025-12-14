#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
short var_1 = (short)-21288;
short var_3 = (short)430;
unsigned long long int var_4 = 8789309371742261288ULL;
short var_5 = (short)21864;
signed char var_7 = (signed char)69;
signed char var_8 = (signed char)55;
short var_11 = (short)9238;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3305656792U;
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
