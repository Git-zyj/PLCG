#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3935112260U;
unsigned int var_3 = 1603121595U;
long long int var_5 = 5282097351406539723LL;
signed char var_6 = (signed char)-82;
signed char var_10 = (signed char)91;
int var_12 = -1722766779;
short var_13 = (short)-9155;
long long int var_14 = -2270071293291781571LL;
int zero = 0;
unsigned char var_15 = (unsigned char)141;
unsigned short var_16 = (unsigned short)5977;
unsigned long long int var_17 = 8211863681305048138ULL;
short var_18 = (short)13934;
_Bool var_19 = (_Bool)0;
short var_20 = (short)20150;
unsigned long long int var_21 = 15088117130408285422ULL;
long long int var_22 = -1523413429084574168LL;
unsigned long long int arr_0 [17] [17] ;
short arr_2 [17] [17] ;
long long int arr_4 [21] [21] ;
unsigned short arr_5 [21] ;
unsigned long long int arr_6 [21] ;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 8208835181792215836ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-32387 : (short)25636;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 1640520967631341843LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)29141;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 6402608075614288165ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
