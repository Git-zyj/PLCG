#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6882575813574488773LL;
unsigned short var_7 = (unsigned short)7149;
signed char var_9 = (signed char)(-127 - 1);
int zero = 0;
long long int var_13 = 7105024351813863545LL;
unsigned int var_14 = 736652651U;
unsigned char var_15 = (unsigned char)244;
signed char var_16 = (signed char)-97;
unsigned int var_17 = 1293656746U;
signed char var_18 = (signed char)4;
unsigned short var_19 = (unsigned short)12837;
_Bool arr_0 [17] ;
long long int arr_1 [17] ;
unsigned short arr_3 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2916187029895314381LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)38815;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)9686;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
