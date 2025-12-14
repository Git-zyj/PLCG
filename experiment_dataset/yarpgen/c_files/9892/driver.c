#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned char var_2 = (unsigned char)39;
unsigned short var_5 = (unsigned short)50152;
short var_7 = (short)-2504;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 13160213974240838431ULL;
unsigned long long int var_13 = 4793331985842998816ULL;
void init() {
}

void checksum() {
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
