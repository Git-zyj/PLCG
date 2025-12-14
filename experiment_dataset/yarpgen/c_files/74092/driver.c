#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6802776594527946615ULL;
signed char var_4 = (signed char)-33;
unsigned int var_8 = 2804144497U;
long long int var_9 = 1597665305711707822LL;
unsigned char var_12 = (unsigned char)110;
long long int var_13 = 8578062398535417808LL;
short var_14 = (short)7350;
long long int var_15 = -8871647926327425590LL;
long long int var_16 = -5398011807534030485LL;
int zero = 0;
unsigned int var_17 = 3479056758U;
unsigned int var_18 = 17388978U;
long long int var_19 = -504470486068803322LL;
unsigned int var_20 = 1082848600U;
unsigned int var_21 = 1772151929U;
long long int var_22 = 9041097304804962039LL;
_Bool arr_2 [20] ;
short arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)27781 : (short)14993;
}

void checksum() {
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
