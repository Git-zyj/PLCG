#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
long long int var_1 = -6196307400916214137LL;
long long int var_2 = -9017932377333767300LL;
int var_4 = -1543441324;
long long int var_5 = 8676933230697827354LL;
long long int var_7 = -4430306833015660298LL;
long long int var_8 = -4523336160088173598LL;
signed char var_9 = (signed char)115;
unsigned long long int var_11 = 6608384571088101337ULL;
long long int var_12 = -2575299674311522669LL;
int zero = 0;
long long int var_13 = -6594531403202646031LL;
signed char var_14 = (signed char)-110;
signed char var_15 = (signed char)-106;
long long int var_16 = -9102863309001085849LL;
unsigned long long int var_17 = 4872378984240138625ULL;
short var_18 = (short)-16762;
long long int arr_8 [14] ;
long long int arr_9 [14] ;
int arr_15 [14] [14] [14] ;
unsigned long long int arr_16 [14] [14] [14] [14] [14] [14] ;
long long int arr_21 [15] [15] ;
long long int arr_22 [15] ;
long long int arr_14 [14] [14] [14] [14] [14] [14] ;
long long int arr_23 [15] ;
unsigned long long int arr_24 [15] ;
signed char arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1184171350082712815LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1126179223093165125LL : -326500095915674122LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1314154320 : -1615447012;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10659473962617695807ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = 8570465052304790539LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 1803713453384119502LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 5862264000820708969LL : -6165535030028978238LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = -4379565970480932774LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 457023924029255403ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (signed char)18;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
