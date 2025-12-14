#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3134089025U;
_Bool var_6 = (_Bool)0;
unsigned int var_11 = 2953430051U;
unsigned short var_12 = (unsigned short)25999;
signed char var_14 = (signed char)118;
int zero = 0;
short var_15 = (short)-3701;
unsigned long long int var_16 = 15790076774549056311ULL;
unsigned long long int var_17 = 14442020986543806895ULL;
long long int var_18 = 4440418940517252031LL;
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
