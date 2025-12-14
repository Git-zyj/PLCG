#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 276286458316937743ULL;
long long int var_7 = -1306011721093309043LL;
signed char var_9 = (signed char)5;
int zero = 0;
unsigned short var_10 = (unsigned short)44295;
int var_11 = 213266408;
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
