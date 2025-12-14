#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)8;
signed char var_5 = (signed char)114;
unsigned char var_6 = (unsigned char)190;
unsigned short var_7 = (unsigned short)57411;
signed char var_9 = (signed char)47;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -1318106688293030462LL;
unsigned int var_12 = 338469290U;
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
