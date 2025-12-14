#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)118;
unsigned char var_4 = (unsigned char)120;
unsigned char var_8 = (unsigned char)103;
unsigned short var_9 = (unsigned short)17224;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)72;
unsigned int var_13 = 209026145U;
long long int var_14 = 8634666914853788981LL;
void init() {
}

void checksum() {
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
