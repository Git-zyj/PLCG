#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned int var_1 = 370882448U;
unsigned long long int var_3 = 233657547812954458ULL;
unsigned char var_4 = (unsigned char)65;
unsigned short var_5 = (unsigned short)27187;
unsigned char var_6 = (unsigned char)57;
unsigned short var_7 = (unsigned short)20305;
short var_8 = (short)-24874;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)72;
short var_14 = (short)21083;
unsigned short var_15 = (unsigned short)10941;
int zero = 0;
unsigned int var_16 = 1374254673U;
short var_17 = (short)-14182;
unsigned long long int var_18 = 17919477158103100742ULL;
int var_19 = -1891939904;
short var_20 = (short)2447;
unsigned short var_21 = (unsigned short)32797;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)2;
int var_24 = 1562079149;
unsigned short var_25 = (unsigned short)57968;
unsigned short var_26 = (unsigned short)47940;
unsigned short var_27 = (unsigned short)43175;
unsigned int var_28 = 712533589U;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 3275314685U;
unsigned char var_31 = (unsigned char)177;
int arr_0 [20] [20] ;
int arr_1 [20] ;
short arr_3 [15] ;
int arr_4 [15] [15] ;
int arr_5 [15] ;
_Bool arr_6 [15] [15] [15] ;
int arr_7 [15] [15] ;
short arr_8 [15] [15] ;
unsigned short arr_9 [15] [15] ;
unsigned int arr_10 [15] ;
unsigned long long int arr_12 [15] [15] [15] ;
short arr_13 [15] ;
unsigned long long int arr_15 [15] [15] ;
unsigned char arr_19 [15] [15] [15] ;
unsigned long long int arr_21 [15] ;
unsigned int arr_2 [20] ;
unsigned short arr_17 [15] ;
long long int arr_18 [15] ;
unsigned short arr_23 [15] [15] ;
short arr_24 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -925725241;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -620476655;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)4196 : (short)-22240;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1309062735 : 1148401228;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1295354249 : 1863058426;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1301910876 : -1175223557;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-17011 : (short)9129;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)17987 : (unsigned short)62669;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 3918687172U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17401881500195803222ULL : 2166943035408038835ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)1618 : (short)-29011;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 13526257629047106289ULL : 1994257533918477330ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)33 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 157731470441556396ULL : 549848310642737986ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2003583209U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47014 : (unsigned short)45649;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -8534435694772375710LL : -6083011093656426047LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36226 : (unsigned short)47843;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (short)14416 : (short)-10251;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
