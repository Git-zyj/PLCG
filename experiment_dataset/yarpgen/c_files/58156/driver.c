#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2004888249;
unsigned long long int var_4 = 16003224265747718029ULL;
short var_7 = (short)14824;
unsigned long long int var_11 = 5082241193794096856ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9909915072792819509ULL;
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
