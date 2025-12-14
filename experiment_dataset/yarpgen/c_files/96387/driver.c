#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -356464154574680290LL;
unsigned char var_1 = (unsigned char)53;
unsigned char var_2 = (unsigned char)72;
_Bool var_3 = (_Bool)1;
unsigned short var_8 = (unsigned short)49316;
int zero = 0;
unsigned short var_10 = (unsigned short)31234;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
