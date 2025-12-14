#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17315541414033563876ULL;
unsigned long long int var_6 = 5808396102432514412ULL;
signed char var_7 = (signed char)-127;
int var_10 = -291501051;
int var_12 = 161859337;
unsigned long long int var_13 = 5781942140803056348ULL;
int zero = 0;
signed char var_15 = (signed char)59;
unsigned long long int var_16 = 11302567746040074821ULL;
int var_17 = -1527319773;
int var_18 = 454725317;
signed char var_19 = (signed char)-94;
int var_20 = -1339416380;
unsigned long long int var_21 = 7799530426070862268ULL;
signed char arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 10115341019229746590ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-81;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
