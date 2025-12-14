#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)117;
unsigned short var_2 = (unsigned short)22425;
long long int var_6 = 1361798125050460078LL;
int var_7 = -139477081;
short var_10 = (short)-30962;
unsigned int var_11 = 1186333880U;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)28;
unsigned long long int var_14 = 10227035998685221038ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
