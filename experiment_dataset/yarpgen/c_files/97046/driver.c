#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
short var_1 = (short)30472;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 5226071895946160492ULL;
long long int var_5 = 7200225582086481940LL;
unsigned long long int var_7 = 2319561179019264706ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 2389866582U;
unsigned short var_14 = (unsigned short)52847;
int zero = 0;
signed char var_18 = (signed char)-113;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2898207270U;
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
