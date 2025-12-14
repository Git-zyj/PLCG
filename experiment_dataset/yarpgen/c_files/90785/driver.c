#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_12 = (unsigned char)149;
_Bool var_13 = (_Bool)0;
long long int var_17 = 7202242350143825345LL;
int zero = 0;
unsigned long long int var_20 = 7447978666869978191ULL;
signed char var_21 = (signed char)-40;
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
