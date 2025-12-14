#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 197066830U;
unsigned short var_1 = (unsigned short)2980;
unsigned char var_2 = (unsigned char)118;
long long int var_3 = -7565810756250207171LL;
signed char var_7 = (signed char)-57;
int var_11 = 1665666036;
unsigned short var_12 = (unsigned short)51457;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)22540;
long long int var_15 = 7297993436719183235LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
