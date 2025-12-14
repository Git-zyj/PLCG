#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3000277169212219031LL;
signed char var_4 = (signed char)-90;
signed char var_9 = (signed char)-48;
long long int var_12 = 7812625471576272363LL;
long long int var_13 = -5379895038803891951LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_20 = (short)-32767;
_Bool var_21 = (_Bool)0;
long long int var_22 = 4777542990411631450LL;
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
