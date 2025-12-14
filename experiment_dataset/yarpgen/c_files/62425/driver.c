#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 101298460U;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)52899;
unsigned long long int var_5 = 16860495286600794697ULL;
unsigned int var_6 = 3806650644U;
unsigned long long int var_9 = 12828385368201608714ULL;
unsigned int var_11 = 3184399860U;
int zero = 0;
unsigned int var_13 = 43572313U;
unsigned short var_14 = (unsigned short)26748;
signed char var_15 = (signed char)83;
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
