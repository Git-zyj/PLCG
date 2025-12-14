#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_10 = 313284471;
unsigned int var_11 = 4020614388U;
unsigned long long int var_12 = 13222452895777358668ULL;
long long int var_13 = -4564499442871951768LL;
long long int var_14 = -2991061526106451418LL;
signed char var_15 = (signed char)-46;
unsigned char var_16 = (unsigned char)255;
long long int var_17 = -6080374034583832393LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2864459417U;
signed char var_21 = (signed char)-46;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-126;
unsigned long long int var_25 = 10510285528503753932ULL;
_Bool var_26 = (_Bool)0;
int var_27 = 425333344;
signed char var_28 = (signed char)-35;
long long int var_29 = 5375511597495259620LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
