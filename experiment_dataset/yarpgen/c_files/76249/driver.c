#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-2;
unsigned short var_2 = (unsigned short)10366;
signed char var_3 = (signed char)127;
short var_4 = (short)29322;
unsigned int var_6 = 1400708576U;
signed char var_8 = (signed char)-76;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3182095398U;
long long int var_16 = 5142940141277280045LL;
signed char var_17 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
