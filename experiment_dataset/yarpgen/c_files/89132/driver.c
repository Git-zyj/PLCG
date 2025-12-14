#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8382821809797691477LL;
unsigned char var_3 = (unsigned char)207;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-41;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)197;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)57626;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
