#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 294961875;
unsigned char var_3 = (unsigned char)114;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)53749;
unsigned short var_10 = (unsigned short)4970;
int zero = 0;
signed char var_11 = (signed char)-109;
unsigned long long int var_12 = 17934173296331284211ULL;
unsigned long long int var_13 = 4028081443712514292ULL;
unsigned short var_14 = (unsigned short)63204;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
