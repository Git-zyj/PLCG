#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2019920899907271524ULL;
long long int var_3 = -565333104027725573LL;
short var_7 = (short)23516;
unsigned char var_8 = (unsigned char)145;
unsigned char var_13 = (unsigned char)215;
_Bool var_16 = (_Bool)0;
signed char var_19 = (signed char)-73;
int zero = 0;
long long int var_20 = 1682670127421782892LL;
unsigned char var_21 = (unsigned char)94;
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
