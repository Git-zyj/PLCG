#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3380676538855072524LL;
unsigned short var_1 = (unsigned short)44164;
unsigned short var_2 = (unsigned short)53519;
unsigned long long int var_3 = 4824271855010180634ULL;
short var_4 = (short)-15408;
unsigned int var_5 = 3935866784U;
unsigned char var_6 = (unsigned char)192;
unsigned short var_7 = (unsigned short)37019;
short var_8 = (short)16578;
unsigned int var_11 = 2058815280U;
unsigned int var_12 = 2409277785U;
int zero = 0;
int var_13 = -1175896323;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7824093614014468350ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2645051636U;
unsigned char var_18 = (unsigned char)122;
unsigned long long int var_19 = 516461142885664119ULL;
unsigned short var_20 = (unsigned short)43228;
signed char var_21 = (signed char)10;
unsigned char var_22 = (unsigned char)51;
unsigned char var_23 = (unsigned char)17;
signed char var_24 = (signed char)-101;
int var_25 = 1501860010;
short var_26 = (short)31734;
unsigned char var_27 = (unsigned char)240;
int var_28 = 779038370;
signed char var_29 = (signed char)101;
short var_30 = (short)17709;
unsigned long long int var_31 = 17950099193095311944ULL;
signed char var_32 = (signed char)110;
unsigned int var_33 = 3711194742U;
unsigned int arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned short arr_2 [15] ;
_Bool arr_3 [15] [15] ;
unsigned short arr_4 [15] [15] [15] ;
short arr_5 [15] ;
long long int arr_7 [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] ;
unsigned short arr_9 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_15 [15] [15] [15] [15] ;
long long int arr_16 [15] [15] [15] [15] ;
_Bool arr_18 [15] ;
unsigned long long int arr_19 [15] ;
unsigned char arr_13 [15] ;
unsigned char arr_23 [15] [15] [15] [15] [15] ;
unsigned int arr_24 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3532768259U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)65225;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)62505;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)4237;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-28350;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1116201004005279754LL : -2743154999610079284LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 18047645028862204006ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)27215;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)9426;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 7105068547029630842LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 13493868331740016365ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)2 : (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)209 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = 2885433097U;
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
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
