#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1913823499;
int var_2 = 1340563072;
unsigned long long int var_5 = 1645630578137036235ULL;
signed char var_6 = (signed char)66;
signed char var_7 = (signed char)-90;
signed char var_11 = (signed char)-18;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3947650554871082634LL;
signed char var_16 = (signed char)111;
int zero = 0;
int var_20 = -1352512957;
unsigned short var_21 = (unsigned short)61776;
signed char var_22 = (signed char)-14;
void init() {
}

void checksum() {
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
