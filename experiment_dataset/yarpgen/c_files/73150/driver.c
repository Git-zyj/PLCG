#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1715024381U;
short var_3 = (short)1537;
unsigned long long int var_6 = 5283297547355876406ULL;
unsigned int var_14 = 4134816159U;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 2550760535U;
int zero = 0;
long long int var_19 = 4956953239832046760LL;
unsigned int var_20 = 2604697370U;
signed char var_21 = (signed char)47;
long long int var_22 = -3039043165120782457LL;
unsigned int var_23 = 4220220295U;
long long int var_24 = 3212804863455327785LL;
short var_25 = (short)16467;
signed char var_26 = (signed char)-73;
signed char var_27 = (signed char)51;
int var_28 = -1686309051;
unsigned short arr_0 [22] ;
signed char arr_1 [22] [22] ;
unsigned int arr_2 [22] [22] ;
int arr_3 [22] ;
int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)13830;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 220463136U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1632410875;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1477251542;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
