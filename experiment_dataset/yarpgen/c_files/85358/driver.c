#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7022;
int var_5 = -418369576;
unsigned int var_7 = 3311327145U;
unsigned char var_8 = (unsigned char)137;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1603169086U;
int zero = 0;
unsigned char var_18 = (unsigned char)240;
unsigned int var_19 = 1241906126U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
