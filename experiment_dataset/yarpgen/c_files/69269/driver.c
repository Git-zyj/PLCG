#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)240;
signed char var_2 = (signed char)-29;
long long int var_4 = -4422274116600979004LL;
signed char var_5 = (signed char)106;
unsigned char var_7 = (unsigned char)97;
int zero = 0;
unsigned char var_10 = (unsigned char)82;
signed char var_11 = (signed char)116;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
