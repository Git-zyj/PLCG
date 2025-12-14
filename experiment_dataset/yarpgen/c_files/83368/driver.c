#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 699435650U;
signed char var_4 = (signed char)117;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3574720609U;
short var_15 = (short)21138;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
