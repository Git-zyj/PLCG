#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
short var_1 = (short)-15127;
long long int var_3 = -4390761924068658824LL;
long long int var_4 = -2508571479994246791LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)11038;
short var_8 = (short)-25943;
long long int var_9 = 2876669797647410411LL;
int zero = 0;
short var_10 = (short)25043;
short var_11 = (short)7381;
short var_12 = (short)-969;
unsigned short var_13 = (unsigned short)60456;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
