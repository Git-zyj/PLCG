#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
int var_2 = -906115475;
long long int var_4 = -4325037650331330009LL;
unsigned char var_5 = (unsigned char)111;
long long int var_8 = 9131413223749743868LL;
long long int var_12 = 5048078506408748781LL;
int var_13 = -376122611;
long long int var_14 = 8184716148160369653LL;
int var_15 = -1013416525;
int var_17 = 548871532;
unsigned char var_18 = (unsigned char)184;
int zero = 0;
int var_19 = -432550623;
long long int var_20 = 6267849843469087987LL;
unsigned char var_21 = (unsigned char)105;
unsigned char var_22 = (unsigned char)38;
long long int var_23 = 3125450224833201621LL;
unsigned char var_24 = (unsigned char)189;
long long int var_25 = -9212946029525963505LL;
unsigned char var_26 = (unsigned char)78;
long long int arr_1 [15] ;
int arr_2 [15] ;
long long int arr_3 [15] ;
long long int arr_6 [15] [15] [15] ;
long long int arr_7 [15] [15] [15] ;
int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2332224091928019230LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -149162562;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -8562220225683607793LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7707792693551866901LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -3609078186791036640LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -345865517;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
