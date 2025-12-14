#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 2087444288;
long long int var_4 = -2739369409362199234LL;
short var_5 = (short)24355;
int var_7 = -416881606;
unsigned short var_11 = (unsigned short)23485;
long long int var_13 = -762027203700402275LL;
int var_15 = -1931103882;
unsigned long long int var_16 = 16864385369659063294ULL;
int zero = 0;
unsigned int var_18 = 1648050352U;
unsigned int var_19 = 3358106200U;
signed char var_20 = (signed char)-90;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)120;
unsigned int arr_0 [10] ;
long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2065707131U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1198948083286324083LL;
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
