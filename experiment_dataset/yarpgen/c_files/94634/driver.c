#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3589;
unsigned char var_1 = (unsigned char)118;
unsigned short var_3 = (unsigned short)60641;
unsigned char var_5 = (unsigned char)217;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3619721924U;
unsigned long long int var_11 = 7815594160067972436ULL;
int var_12 = 1327526327;
short var_13 = (short)3849;
unsigned short var_14 = (unsigned short)9851;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
