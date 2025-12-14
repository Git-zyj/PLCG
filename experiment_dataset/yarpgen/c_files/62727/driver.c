#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
unsigned int var_3 = 4290734635U;
signed char var_4 = (signed char)-121;
signed char var_7 = (signed char)27;
short var_10 = (short)9866;
signed char var_11 = (signed char)-101;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1676255517;
unsigned int var_14 = 3416703678U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
