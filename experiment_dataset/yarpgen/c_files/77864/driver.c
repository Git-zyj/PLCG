#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-25509;
short var_7 = (short)-24276;
unsigned long long int var_9 = 10858778023660631106ULL;
unsigned short var_10 = (unsigned short)13710;
unsigned int var_12 = 2442937277U;
unsigned int var_14 = 4139589484U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
