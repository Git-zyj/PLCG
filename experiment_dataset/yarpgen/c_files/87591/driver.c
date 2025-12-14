#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 558330592;
long long int var_6 = 1930644119263179748LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)567;
unsigned short var_12 = (unsigned short)28659;
int zero = 0;
unsigned char var_13 = (unsigned char)193;
unsigned long long int var_14 = 10115780646934818944ULL;
signed char var_15 = (signed char)50;
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
