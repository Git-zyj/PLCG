#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
short var_3 = (short)13070;
signed char var_4 = (signed char)-72;
unsigned short var_6 = (unsigned short)59242;
int var_7 = -1457101527;
short var_9 = (short)18951;
int zero = 0;
unsigned short var_13 = (unsigned short)43542;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1708182590907127185LL;
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
