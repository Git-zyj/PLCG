#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 158928621U;
unsigned int var_4 = 211760621U;
short var_6 = (short)6934;
unsigned int var_7 = 894775183U;
signed char var_10 = (signed char)-1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-30942;
int zero = 0;
unsigned char var_18 = (unsigned char)139;
int var_19 = -434811072;
unsigned char var_20 = (unsigned char)254;
int var_21 = 868199446;
long long int var_22 = 8127851326206137074LL;
unsigned int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 278291020U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
