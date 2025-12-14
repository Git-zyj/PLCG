#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8574511232070237479LL;
unsigned long long int var_5 = 6173124695196363865ULL;
short var_7 = (short)-21398;
unsigned short var_9 = (unsigned short)65047;
long long int var_12 = -5069278051508584321LL;
unsigned int var_14 = 259107706U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 785067258U;
signed char var_20 = (signed char)-11;
int var_21 = 87182468;
int var_22 = -2074400348;
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
