#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3198527492842601931LL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3014455251U;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-118;
signed char var_13 = (signed char)-74;
void init() {
}

void checksum() {
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
