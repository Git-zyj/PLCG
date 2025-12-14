#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
_Bool var_3 = (_Bool)0;
int var_4 = 1188270906;
int var_7 = -478580224;
unsigned short var_9 = (unsigned short)47114;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)195;
short var_13 = (short)-17509;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
