#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)-1734;
short var_6 = (short)27495;
unsigned char var_7 = (unsigned char)149;
int var_9 = -333953358;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = -885306347;
unsigned long long int var_13 = 12596029753667554101ULL;
unsigned char var_14 = (unsigned char)177;
unsigned long long int var_15 = 1979838660098820977ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
