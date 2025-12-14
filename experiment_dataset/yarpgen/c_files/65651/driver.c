#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4759307292621590909LL;
unsigned short var_5 = (unsigned short)22490;
signed char var_6 = (signed char)4;
unsigned short var_7 = (unsigned short)4387;
unsigned long long int var_10 = 13096316365185955553ULL;
int var_12 = 2068325349;
unsigned int var_13 = 3067068002U;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2089622498605983197LL;
long long int var_18 = -4828901071536603291LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
