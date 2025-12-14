#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 41720347251184109LL;
long long int var_1 = 4819061135822032936LL;
unsigned long long int var_2 = 15653586266235956179ULL;
int var_3 = -137386928;
long long int var_4 = 4893362056783430866LL;
unsigned short var_5 = (unsigned short)42242;
unsigned long long int var_10 = 1481190864174086997ULL;
int var_11 = -1957273561;
int zero = 0;
unsigned char var_12 = (unsigned char)20;
long long int var_13 = -5363582551043728347LL;
unsigned long long int var_14 = 2099760245724921383ULL;
int var_15 = 69974938;
signed char var_16 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
