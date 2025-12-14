#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 523409273U;
_Bool var_9 = (_Bool)0;
long long int var_10 = 4289955952409281277LL;
unsigned long long int var_14 = 2548746753405563501ULL;
unsigned long long int var_15 = 14778462171804883468ULL;
unsigned int var_18 = 1378156963U;
int zero = 0;
unsigned short var_19 = (unsigned short)54935;
int var_20 = 1600197189;
unsigned short var_21 = (unsigned short)19926;
unsigned short var_22 = (unsigned short)60846;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
