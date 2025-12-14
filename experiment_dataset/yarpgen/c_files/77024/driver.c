#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24803;
unsigned long long int var_2 = 658593503148163046ULL;
long long int var_18 = 7955678745699905107LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)52;
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
