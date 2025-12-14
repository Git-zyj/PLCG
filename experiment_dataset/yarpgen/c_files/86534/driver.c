#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-4;
signed char var_10 = (signed char)-90;
long long int var_13 = -2767776195905269028LL;
long long int var_14 = 3466548785117006921LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-24;
int var_18 = 886674864;
void init() {
}

void checksum() {
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
