#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1572435967U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-19886;
unsigned long long int var_4 = 555872710456008810ULL;
_Bool var_7 = (_Bool)0;
int var_8 = -722896531;
_Bool var_9 = (_Bool)0;
short var_12 = (short)6902;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16396387811135337322ULL;
unsigned long long int var_15 = 17759726113117439934ULL;
short var_16 = (short)-15297;
void init() {
}

void checksum() {
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
