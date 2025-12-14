#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-98;
long long int var_10 = 6605150571508669783LL;
unsigned long long int var_11 = 2803938685559628834ULL;
short var_13 = (short)4513;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)51;
void init() {
}

void checksum() {
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
