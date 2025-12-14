#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1376370877;
short var_5 = (short)-14354;
signed char var_9 = (signed char)-1;
unsigned int var_10 = 4102754583U;
unsigned long long int var_15 = 1522153868654205768ULL;
int var_17 = 1762032743;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 8745460093341179201ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
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
