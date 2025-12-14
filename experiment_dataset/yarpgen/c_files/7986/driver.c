#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8729173119794292557ULL;
unsigned long long int var_4 = 9521622546603937757ULL;
unsigned long long int var_7 = 14678469792128645560ULL;
unsigned long long int var_9 = 4316280974166315511ULL;
short var_12 = (short)16065;
short var_17 = (short)10728;
int zero = 0;
int var_18 = -862340523;
unsigned long long int var_19 = 2768338932089982328ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_2 [18] [18] ;
unsigned int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2398576869955378806ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 3666489411U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
