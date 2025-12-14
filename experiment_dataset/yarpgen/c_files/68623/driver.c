#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7423208204212026900LL;
unsigned short var_1 = (unsigned short)65318;
unsigned long long int var_2 = 2500643975482568212ULL;
unsigned long long int var_3 = 15461389279227932027ULL;
unsigned int var_4 = 843774298U;
unsigned short var_5 = (unsigned short)44435;
unsigned long long int var_6 = 16855148099452767707ULL;
signed char var_8 = (signed char)107;
unsigned long long int var_9 = 2671935822190676368ULL;
unsigned long long int var_10 = 753680622787838518ULL;
unsigned char var_11 = (unsigned char)36;
long long int var_12 = -6536252471380396798LL;
int zero = 0;
unsigned char var_13 = (unsigned char)22;
unsigned short var_14 = (unsigned short)14744;
unsigned short var_15 = (unsigned short)15399;
signed char var_16 = (signed char)-116;
unsigned char var_17 = (unsigned char)240;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-18185;
long long int var_20 = 7415573359832720473LL;
long long int var_21 = 9030052120211057332LL;
unsigned int var_22 = 2221678985U;
long long int var_23 = 1735838841651326520LL;
signed char var_24 = (signed char)27;
unsigned long long int var_25 = 1465195542565053390ULL;
signed char var_26 = (signed char)52;
long long int var_27 = -5997872291005749781LL;
unsigned short var_28 = (unsigned short)31391;
short var_29 = (short)-23355;
unsigned int arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned int arr_4 [22] [22] ;
signed char arr_8 [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] ;
long long int arr_13 [22] [22] [22] [22] [22] ;
unsigned char arr_18 [22] [22] [22] [22] ;
long long int arr_15 [22] ;
unsigned int arr_16 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2339518616U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 686628792U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-112 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 15449506989278963731ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)211 : (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -3207358515172807376LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -8320218857350449118LL : 1114034106307134927LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3952179952U : 3531824211U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
