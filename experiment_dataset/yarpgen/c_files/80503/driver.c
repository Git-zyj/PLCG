#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1050258364985846490LL;
long long int var_6 = 5081357655419976297LL;
unsigned int var_7 = 1623386077U;
long long int var_9 = -6900473136238181950LL;
int var_14 = -1022878295;
int var_16 = -330425496;
int zero = 0;
unsigned int var_18 = 4072410822U;
unsigned int var_19 = 2785731481U;
void init() {
}

void checksum() {
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
