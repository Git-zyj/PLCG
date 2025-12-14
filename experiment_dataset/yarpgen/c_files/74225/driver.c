#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 615571863U;
signed char var_5 = (signed char)-66;
short var_9 = (short)-24972;
unsigned int var_12 = 1082213005U;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)15872;
short var_18 = (short)26442;
long long int var_19 = -6944338932303132703LL;
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
