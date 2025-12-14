#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55447;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)72;
unsigned long long int var_5 = 4170665434503421389ULL;
unsigned char var_7 = (unsigned char)82;
int zero = 0;
signed char var_10 = (signed char)-4;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-69;
signed char var_13 = (signed char)-66;
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
