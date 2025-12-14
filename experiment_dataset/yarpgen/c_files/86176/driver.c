#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13428749111175191448ULL;
unsigned long long int var_6 = 9812258884860636638ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 17563751203774992752ULL;
short var_12 = (short)29691;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
