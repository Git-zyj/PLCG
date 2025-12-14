#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4656301672654515902LL;
_Bool var_3 = (_Bool)0;
int var_6 = 326929842;
unsigned char var_7 = (unsigned char)38;
unsigned char var_11 = (unsigned char)22;
int var_13 = 923684186;
int zero = 0;
unsigned char var_20 = (unsigned char)110;
long long int var_21 = -3789374332985589765LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)10649;
long long int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -154264012578688087LL;
}

void checksum() {
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
