#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8417238248034970207LL;
long long int var_1 = -9110148674976843405LL;
long long int var_2 = 6994473682149190327LL;
unsigned long long int var_3 = 3587903461606799486ULL;
long long int var_4 = -8008235453861827756LL;
long long int var_5 = 7389621376147975623LL;
unsigned long long int var_6 = 8711258020208779598ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)31756;
long long int var_9 = -3870326952654502018LL;
short var_10 = (short)16712;
short var_11 = (short)11722;
short var_12 = (short)-1468;
unsigned int var_13 = 2500843671U;
unsigned int var_14 = 1964099619U;
signed char var_15 = (signed char)-45;
unsigned int var_16 = 3701344547U;
unsigned int var_17 = 3854115969U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 543035381;
unsigned short var_20 = (unsigned short)52465;
unsigned long long int var_21 = 8723087787462505711ULL;
unsigned short var_22 = (unsigned short)46405;
unsigned long long int var_23 = 18296387868900471799ULL;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)149;
unsigned short var_26 = (unsigned short)15783;
unsigned short var_27 = (unsigned short)6606;
long long int var_28 = -9078666046664592740LL;
unsigned int var_29 = 1849229929U;
unsigned int var_30 = 263771804U;
signed char var_31 = (signed char)108;
unsigned int var_32 = 4182573803U;
int var_33 = -756092160;
signed char var_34 = (signed char)-65;
unsigned int var_35 = 4032870301U;
long long int var_36 = 6405490411611500922LL;
unsigned short var_37 = (unsigned short)30716;
signed char var_38 = (signed char)19;
signed char var_39 = (signed char)-1;
unsigned long long int var_40 = 1007964739661772112ULL;
unsigned char var_41 = (unsigned char)188;
unsigned short var_42 = (unsigned short)46342;
int arr_3 [21] ;
signed char arr_4 [21] ;
long long int arr_6 [21] [21] [21] [21] ;
long long int arr_7 [21] [21] [21] [21] [21] ;
long long int arr_8 [21] [21] [21] [21] [21] [21] ;
short arr_10 [21] [21] ;
unsigned int arr_11 [21] [21] [21] [21] [21] ;
unsigned short arr_13 [21] ;
unsigned long long int arr_14 [21] [21] [21] [21] [21] [21] ;
long long int arr_15 [21] [21] [21] ;
long long int arr_16 [21] [21] [21] [21] [21] ;
unsigned int arr_17 [21] [21] [21] [21] ;
unsigned char arr_19 [21] [21] [21] [21] ;
short arr_23 [21] [21] [21] [21] [21] ;
unsigned long long int arr_34 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1470118130;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1801798551831360593LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = -5154145741288964494LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4758944972469920297LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-29911;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 4226833899U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20689 : (unsigned short)38049;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1639225905162840253ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 3352874796456003135LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1265797545152021445LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 1714928745U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-12365;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 16172893932601352868ULL;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
