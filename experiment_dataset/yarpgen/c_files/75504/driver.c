#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3128326847U;
unsigned short var_1 = (unsigned short)56565;
unsigned short var_3 = (unsigned short)7258;
unsigned short var_6 = (unsigned short)12743;
long long int var_9 = 5889432665927989265LL;
int zero = 0;
unsigned int var_11 = 2993072995U;
unsigned short var_12 = (unsigned short)37159;
unsigned short var_13 = (unsigned short)36614;
long long int var_14 = -2149274489289682561LL;
unsigned short var_15 = (unsigned short)32270;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
