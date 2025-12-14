#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1310231043;
unsigned char var_2 = (unsigned char)238;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 6589340043785743709ULL;
short var_9 = (short)7064;
unsigned char var_10 = (unsigned char)17;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)31618;
_Bool var_15 = (_Bool)1;
int var_16 = -407405352;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
