#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5206469417401320311LL;
short var_2 = (short)-21215;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)26724;
signed char var_12 = (signed char)103;
int zero = 0;
unsigned long long int var_14 = 2220534881198558254ULL;
signed char var_15 = (signed char)-44;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
