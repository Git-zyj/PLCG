#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19944;
unsigned int var_1 = 2897116392U;
int var_3 = 878938150;
unsigned char var_4 = (unsigned char)40;
_Bool var_7 = (_Bool)1;
int var_11 = -529269794;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)-23483;
unsigned int var_16 = 630337794U;
unsigned int var_17 = 3283889593U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
