#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7635883473910471519LL;
signed char var_1 = (signed char)-21;
long long int var_2 = 295351123561103879LL;
long long int var_4 = -4087939607076508132LL;
unsigned short var_5 = (unsigned short)42172;
long long int var_6 = 4894892801417477625LL;
signed char var_9 = (signed char)-121;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)36;
unsigned short var_13 = (unsigned short)62755;
long long int var_14 = -2926353696818786218LL;
signed char var_16 = (signed char)81;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-51;
signed char var_20 = (signed char)-110;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)28710;
unsigned short var_23 = (unsigned short)883;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
