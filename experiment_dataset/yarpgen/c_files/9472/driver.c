#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1421325974;
unsigned long long int var_4 = 1499133059411602748ULL;
int var_11 = 1262993353;
long long int var_18 = 6599139780624650017LL;
int zero = 0;
signed char var_20 = (signed char)-60;
int var_21 = -1541241119;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-18245;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
