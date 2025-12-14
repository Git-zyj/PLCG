#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)64;
long long int var_2 = -2766346536517760471LL;
long long int var_3 = -5790215460235294433LL;
long long int var_4 = 4624978354312706088LL;
long long int var_5 = 5036544294767611132LL;
unsigned char var_6 = (unsigned char)167;
long long int var_7 = 2338244837624161309LL;
long long int var_8 = -1864309523132483958LL;
unsigned short var_9 = (unsigned short)28821;
unsigned int var_10 = 315212474U;
long long int var_11 = -4154179306846600982LL;
short var_12 = (short)25227;
unsigned long long int var_13 = 6601711844594537699ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)119;
long long int var_16 = 7606098865921400912LL;
int zero = 0;
unsigned int var_17 = 1269539088U;
unsigned short var_18 = (unsigned short)39728;
long long int var_19 = -6036436871525975878LL;
long long int var_20 = 2482025297999145135LL;
signed char var_21 = (signed char)20;
unsigned long long int var_22 = 10946643412920445579ULL;
long long int var_23 = -6821335240260043114LL;
unsigned long long int var_24 = 2972957628817555542ULL;
long long int var_25 = 3204659661489292154LL;
unsigned int var_26 = 772620023U;
unsigned char var_27 = (unsigned char)146;
unsigned short var_28 = (unsigned short)790;
unsigned long long int var_29 = 14994278938208045554ULL;
unsigned int var_30 = 527294040U;
unsigned short var_31 = (unsigned short)1712;
unsigned long long int var_32 = 3139143956716329094ULL;
unsigned int var_33 = 2222707998U;
unsigned char var_34 = (unsigned char)61;
short var_35 = (short)-8073;
_Bool var_36 = (_Bool)0;
long long int var_37 = -7236019385970478377LL;
long long int var_38 = -5025953348366461781LL;
short var_39 = (short)-6133;
long long int var_40 = 7557193647927637721LL;
_Bool var_41 = (_Bool)1;
unsigned char var_42 = (unsigned char)170;
unsigned long long int var_43 = 3777756220163894219ULL;
unsigned char var_44 = (unsigned char)203;
unsigned int var_45 = 999401234U;
unsigned char var_46 = (unsigned char)190;
unsigned char var_47 = (unsigned char)141;
short var_48 = (short)-12345;
unsigned char var_49 = (unsigned char)47;
unsigned long long int var_50 = 3553692117448740407ULL;
_Bool arr_0 [22] ;
long long int arr_1 [22] ;
signed char arr_2 [22] ;
unsigned char arr_3 [22] ;
long long int arr_5 [22] [22] ;
short arr_6 [22] [22] [22] ;
long long int arr_7 [22] [22] [22] ;
short arr_12 [15] [15] ;
unsigned short arr_22 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 5225292929297703232LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 2311933776585634522LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)31297;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8982777791079210219LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (short)10232;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)34337;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
