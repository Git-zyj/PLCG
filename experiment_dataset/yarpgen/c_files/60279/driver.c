#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11276524868672681877ULL;
signed char var_11 = (signed char)-82;
long long int var_13 = -6239725762417308065LL;
signed char var_18 = (signed char)-73;
int zero = 0;
signed char var_19 = (signed char)-78;
short var_20 = (short)-11575;
unsigned short var_21 = (unsigned short)46893;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
