#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
short var_1 = (short)-9865;
long long int var_3 = -8411380375738616739LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 7789398864898055864ULL;
signed char var_9 = (signed char)27;
unsigned long long int var_11 = 12472319547526996761ULL;
signed char var_12 = (signed char)31;
int zero = 0;
unsigned char var_13 = (unsigned char)104;
signed char var_14 = (signed char)57;
void init() {
}

void checksum() {
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
