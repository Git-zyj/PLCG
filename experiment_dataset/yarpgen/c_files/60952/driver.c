#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6054954814299915273LL;
unsigned long long int var_1 = 13010195393851938356ULL;
unsigned long long int var_12 = 16652021825765860238ULL;
int zero = 0;
unsigned long long int var_13 = 6087809159618348279ULL;
long long int var_14 = 1199952986432828373LL;
unsigned short var_15 = (unsigned short)26917;
signed char var_16 = (signed char)75;
unsigned int var_17 = 2325185716U;
_Bool var_18 = (_Bool)1;
unsigned int arr_0 [10] [10] ;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 4102961168U : 1040863511U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
