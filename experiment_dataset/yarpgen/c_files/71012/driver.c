#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-85;
unsigned short var_3 = (unsigned short)42454;
unsigned long long int var_5 = 12806769472578233376ULL;
unsigned short var_6 = (unsigned short)12342;
long long int var_7 = 6296101528959973506LL;
signed char var_9 = (signed char)5;
unsigned int var_10 = 2973451919U;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-3;
signed char var_14 = (signed char)-122;
unsigned long long int var_15 = 10278118768068730496ULL;
int var_16 = -1505191060;
void init() {
}

void checksum() {
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
