#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10568;
short var_2 = (short)4545;
signed char var_4 = (signed char)-2;
int var_6 = 1273241101;
int var_7 = -1306534173;
short var_10 = (short)16688;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 7731240104708362131LL;
unsigned char var_13 = (unsigned char)162;
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
