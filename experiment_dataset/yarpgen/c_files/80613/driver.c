#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 6981546722250825886ULL;
unsigned long long int var_12 = 1687608228298873119ULL;
unsigned long long int var_14 = 2198426027450513835ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)24292;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
