#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57316;
unsigned short var_1 = (unsigned short)62699;
unsigned int var_2 = 1725506039U;
unsigned long long int var_3 = 13863578511181469525ULL;
unsigned short var_6 = (unsigned short)49556;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-76;
int zero = 0;
long long int var_11 = 8492107330922817373LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -2616166062167078883LL;
unsigned long long int var_14 = 2243820929967628063ULL;
int var_15 = -926677120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
