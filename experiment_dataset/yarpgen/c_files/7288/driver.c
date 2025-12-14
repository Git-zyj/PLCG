#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_11 = (signed char)-78;
signed char var_15 = (signed char)-54;
int zero = 0;
unsigned char var_18 = (unsigned char)113;
unsigned long long int var_19 = 13099977345946918218ULL;
signed char var_20 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
