#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4519504601282099391ULL;
unsigned short var_2 = (unsigned short)24211;
unsigned short var_4 = (unsigned short)9607;
unsigned long long int var_8 = 9789334495745370931ULL;
long long int var_15 = 1517406859854598178LL;
long long int var_16 = -983398384462712282LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)66;
void init() {
}

void checksum() {
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
