#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2978907010U;
unsigned short var_8 = (unsigned short)51482;
long long int var_9 = 5190090437284436418LL;
signed char var_13 = (signed char)-49;
signed char var_14 = (signed char)-46;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-7;
int zero = 0;
unsigned int var_18 = 132925716U;
long long int var_19 = 6315765969870687289LL;
unsigned short var_20 = (unsigned short)60666;
signed char var_21 = (signed char)10;
_Bool var_22 = (_Bool)0;
long long int var_23 = 7862620725255460105LL;
unsigned int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3658268059U;
}

void checksum() {
    hash(&seed, var_18);
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
