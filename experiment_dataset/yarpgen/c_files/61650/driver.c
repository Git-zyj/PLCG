#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-11711;
unsigned char var_4 = (unsigned char)231;
short var_9 = (short)25723;
unsigned short var_10 = (unsigned short)16104;
int zero = 0;
short var_13 = (short)6821;
long long int var_14 = 9148327134992929388LL;
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
