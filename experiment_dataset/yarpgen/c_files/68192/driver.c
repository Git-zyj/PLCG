#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7152837686635293012ULL;
unsigned int var_2 = 3378360835U;
unsigned short var_3 = (unsigned short)21076;
long long int var_4 = 3893272743503426638LL;
signed char var_5 = (signed char)59;
long long int var_6 = 1825363863838036718LL;
signed char var_9 = (signed char)-99;
long long int var_10 = -6725715155448171389LL;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 16959264787549577110ULL;
signed char var_16 = (signed char)-25;
unsigned int var_17 = 1491361276U;
long long int var_18 = 3994614993333858335LL;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 11229792057428990632ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
