#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12997;
short var_6 = (short)-4234;
long long int var_8 = 7353082682701718088LL;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)25689;
int zero = 0;
unsigned char var_13 = (unsigned char)246;
short var_14 = (short)-19608;
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
