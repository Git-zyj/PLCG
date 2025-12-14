#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1171761540U;
unsigned char var_2 = (unsigned char)64;
unsigned long long int var_3 = 12890807186790036157ULL;
unsigned long long int var_4 = 13669581674548185355ULL;
short var_6 = (short)21147;
long long int var_7 = 4201922851638323214LL;
unsigned long long int var_9 = 2044991913538573256ULL;
long long int var_10 = -4207111890802517237LL;
int var_11 = 1335138165;
unsigned long long int var_14 = 17458628221350103699ULL;
long long int var_15 = -3581062209881457264LL;
int zero = 0;
int var_17 = -1148915857;
unsigned char var_18 = (unsigned char)114;
int var_19 = -66167246;
unsigned long long int var_20 = 9344318915978558029ULL;
signed char var_21 = (signed char)-54;
unsigned long long int var_22 = 13967251234626263635ULL;
long long int arr_7 [15] [15] [15] [15] ;
short arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -95690189128598970LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)27844;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
