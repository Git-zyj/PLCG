#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1561161775;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)27;
long long int var_12 = 1979662206191107752LL;
int var_14 = -1475916700;
int zero = 0;
unsigned short var_18 = (unsigned short)52935;
int var_19 = 1611929247;
int var_20 = 1780634217;
unsigned char var_21 = (unsigned char)84;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 15499928361574840318ULL;
long long int arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -4132237762732161491LL;
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
