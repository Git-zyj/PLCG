#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6748384619270681036ULL;
unsigned short var_1 = (unsigned short)10022;
unsigned long long int var_2 = 1632341821887112404ULL;
long long int var_3 = -6459869136527151480LL;
unsigned int var_5 = 4071164853U;
long long int var_6 = 7232794840251497011LL;
long long int var_7 = 8548780105017368369LL;
unsigned short var_8 = (unsigned short)9979;
unsigned int var_9 = 723021643U;
unsigned long long int var_10 = 9676570412896974249ULL;
unsigned long long int var_11 = 4816859503541350250ULL;
unsigned long long int var_12 = 12577427175878590981ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)5649;
unsigned int var_14 = 3361969729U;
unsigned long long int var_15 = 8776993408903326801ULL;
short var_16 = (short)-31747;
long long int var_17 = -3134828208577646573LL;
signed char var_18 = (signed char)-124;
unsigned int var_19 = 4141988885U;
unsigned short var_20 = (unsigned short)15906;
unsigned short var_21 = (unsigned short)12963;
unsigned long long int var_22 = 9153768572676561422ULL;
unsigned short var_23 = (unsigned short)19661;
unsigned long long int var_24 = 2426921773199966935ULL;
unsigned short var_25 = (unsigned short)37400;
signed char var_26 = (signed char)-105;
unsigned long long int var_27 = 2805083171461407757ULL;
unsigned long long int var_28 = 9870644420808245848ULL;
short var_29 = (short)19801;
unsigned short var_30 = (unsigned short)48180;
unsigned int var_31 = 3327811492U;
short var_32 = (short)-22859;
unsigned int arr_4 [10] ;
signed char arr_16 [14] [14] [14] [14] ;
unsigned short arr_19 [14] ;
long long int arr_29 [14] [14] [14] ;
signed char arr_35 [14] [14] [14] [14] ;
unsigned long long int arr_38 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 3282195571U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (unsigned short)37813;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 4622517840279427782LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)6 : (signed char)-75;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10071440929044090512ULL : 12671850006800626461ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
