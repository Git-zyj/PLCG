#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1939303937U;
unsigned short var_2 = (unsigned short)37661;
long long int var_5 = 95158193993266962LL;
int zero = 0;
unsigned long long int var_13 = 10585785609945086899ULL;
int var_14 = 1058641560;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
