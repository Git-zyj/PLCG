#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2060296639U;
signed char var_1 = (signed char)-84;
int var_4 = -496088332;
unsigned int var_8 = 69027310U;
signed char var_10 = (signed char)29;
int zero = 0;
short var_12 = (short)-10317;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-28874;
unsigned long long int var_15 = 9690570586733039822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
