#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
_Bool var_6 = (_Bool)0;
long long int var_8 = -3269843720815922311LL;
unsigned int var_10 = 1970374176U;
short var_12 = (short)-6478;
unsigned short var_13 = (unsigned short)10572;
int zero = 0;
int var_14 = 1483555187;
unsigned short var_15 = (unsigned short)15407;
int var_16 = 1193566469;
void init() {
}

void checksum() {
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
