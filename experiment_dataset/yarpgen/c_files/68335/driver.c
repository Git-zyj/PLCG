#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
unsigned long long int var_2 = 10066402099172167101ULL;
int var_3 = 1373666912;
long long int var_8 = 1302343141231784985LL;
signed char var_9 = (signed char)22;
signed char var_10 = (signed char)-15;
short var_11 = (short)-7855;
signed char var_12 = (signed char)84;
short var_13 = (short)25802;
unsigned long long int var_15 = 9716559445163475349ULL;
int zero = 0;
short var_18 = (short)7865;
unsigned char var_19 = (unsigned char)201;
long long int var_20 = 5297328335718390369LL;
long long int var_21 = 8183822595477204947LL;
unsigned long long int var_22 = 8420911112748823613ULL;
int arr_3 [11] [11] [11] ;
unsigned long long int arr_4 [11] [11] [11] ;
signed char arr_5 [11] [11] [11] ;
unsigned long long int arr_6 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 741778784;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2039795509711574038ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 18378684374491581160ULL;
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
