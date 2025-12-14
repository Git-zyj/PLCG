#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = 352897044331119037LL;
unsigned char var_7 = (unsigned char)82;
unsigned long long int var_8 = 12914439163651851466ULL;
signed char var_13 = (signed char)-43;
int zero = 0;
unsigned char var_16 = (unsigned char)59;
short var_17 = (short)-19745;
long long int var_18 = -8814981194319669097LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
