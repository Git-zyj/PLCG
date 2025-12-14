#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3186281647U;
_Bool var_3 = (_Bool)1;
short var_7 = (short)5088;
unsigned char var_9 = (unsigned char)147;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)179;
int var_15 = 1631318567;
int zero = 0;
unsigned int var_16 = 719881960U;
short var_17 = (short)26458;
unsigned int var_18 = 3004441377U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
