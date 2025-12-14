#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-49;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)14627;
unsigned int var_13 = 4223887290U;
unsigned short var_16 = (unsigned short)56451;
int zero = 0;
signed char var_17 = (signed char)24;
int var_18 = -273712126;
unsigned long long int var_19 = 3391927208341752146ULL;
signed char var_20 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
