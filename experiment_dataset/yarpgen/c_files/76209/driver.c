#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31855;
signed char var_4 = (signed char)77;
signed char var_7 = (signed char)40;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-30320;
int zero = 0;
int var_13 = 555492872;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 10805695176958817149ULL;
void init() {
}

void checksum() {
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
