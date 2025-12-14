#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)68;
signed char var_15 = (signed char)-76;
short var_16 = (short)14641;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-21324;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
