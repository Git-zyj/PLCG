#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16882;
signed char var_6 = (signed char)78;
signed char var_9 = (signed char)76;
int var_11 = -372391031;
unsigned int var_12 = 2158023745U;
int zero = 0;
long long int var_15 = 4505643440673194505LL;
unsigned int var_16 = 786823529U;
int var_17 = 752512121;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
