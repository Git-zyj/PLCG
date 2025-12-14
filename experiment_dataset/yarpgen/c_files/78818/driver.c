#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
long long int var_2 = -4278476775565365957LL;
long long int var_4 = -6971181526577434735LL;
short var_6 = (short)21933;
signed char var_7 = (signed char)47;
long long int var_9 = -8805240630315503796LL;
unsigned short var_11 = (unsigned short)29665;
signed char var_16 = (signed char)-16;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)1357;
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
