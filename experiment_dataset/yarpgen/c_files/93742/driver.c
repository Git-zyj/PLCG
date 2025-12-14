#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2529;
int var_2 = -710125600;
long long int var_4 = -101646455950568476LL;
unsigned int var_5 = 2925301740U;
unsigned char var_6 = (unsigned char)201;
short var_7 = (short)-7913;
short var_8 = (short)-20298;
unsigned char var_9 = (unsigned char)62;
signed char var_10 = (signed char)50;
signed char var_11 = (signed char)-56;
int var_12 = -713002676;
unsigned char var_13 = (unsigned char)75;
unsigned short var_14 = (unsigned short)33146;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4278728491098495459LL;
unsigned int var_17 = 776442428U;
unsigned long long int var_18 = 9265132642549150342ULL;
int zero = 0;
unsigned int var_19 = 1824486031U;
short var_20 = (short)18510;
unsigned int var_21 = 4238895934U;
unsigned short var_22 = (unsigned short)4793;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-13447;
unsigned char var_25 = (unsigned char)228;
unsigned short var_26 = (unsigned short)38669;
unsigned short var_27 = (unsigned short)7853;
int var_28 = 353406809;
unsigned int var_29 = 2446044385U;
signed char var_30 = (signed char)53;
unsigned int var_31 = 2262367410U;
unsigned long long int var_32 = 13111035742996345415ULL;
long long int var_33 = 4785192962960897428LL;
unsigned int var_34 = 842926184U;
unsigned int var_35 = 3001381807U;
unsigned char var_36 = (unsigned char)55;
_Bool arr_2 [17] ;
int arr_6 [17] ;
int arr_9 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -849594479;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -1527865449;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
