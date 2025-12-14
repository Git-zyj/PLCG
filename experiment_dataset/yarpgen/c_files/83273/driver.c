#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-18932;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_5 = (short)28845;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3055371078U;
int var_9 = 328963880;
unsigned int var_10 = 3875347811U;
unsigned short var_11 = (unsigned short)43417;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3917554226U;
short var_14 = (short)-31460;
int var_15 = -147953662;
int var_16 = -1457313065;
unsigned int var_17 = 863966027U;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 636202383;
unsigned long long int var_21 = 14958879222848680673ULL;
long long int var_22 = -5333424086482140364LL;
int var_23 = -975780520;
unsigned short var_24 = (unsigned short)65166;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)24970;
unsigned long long int var_27 = 15553582513178103871ULL;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)21990;
unsigned short var_31 = (unsigned short)19934;
unsigned char var_32 = (unsigned char)146;
unsigned short var_33 = (unsigned short)26290;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 3888279277U;
unsigned short var_36 = (unsigned short)6905;
unsigned int var_37 = 1263880350U;
long long int var_38 = -1130245926242144589LL;
_Bool var_39 = (_Bool)0;
unsigned short var_40 = (unsigned short)29228;
unsigned char var_41 = (unsigned char)41;
signed char var_42 = (signed char)101;
unsigned int var_43 = 4120102795U;
unsigned int var_44 = 934712006U;
unsigned char var_45 = (unsigned char)5;
long long int var_46 = -2288135246474922159LL;
unsigned char var_47 = (unsigned char)38;
short var_48 = (short)-29048;
long long int var_49 = 7177346666436207803LL;
int var_50 = 206298000;
unsigned short var_51 = (unsigned short)50439;
unsigned long long int var_52 = 8898287603219713477ULL;
unsigned long long int var_53 = 2769624577934644154ULL;
unsigned long long int var_54 = 16929064640611469170ULL;
long long int var_55 = -2869990753401910927LL;
unsigned char var_56 = (unsigned char)254;
long long int var_57 = 8741155272009895795LL;
_Bool var_58 = (_Bool)0;
_Bool var_59 = (_Bool)0;
short var_60 = (short)31545;
unsigned int var_61 = 3655572448U;
unsigned int var_62 = 1307856676U;
_Bool var_63 = (_Bool)0;
unsigned int var_64 = 672752593U;
int var_65 = 1879902528;
short var_66 = (short)12575;
unsigned short var_67 = (unsigned short)62477;
signed char var_68 = (signed char)-76;
signed char var_69 = (signed char)98;
unsigned int var_70 = 1507834790U;
_Bool var_71 = (_Bool)1;
unsigned char var_72 = (unsigned char)251;
unsigned char var_73 = (unsigned char)93;
unsigned char var_74 = (unsigned char)52;
short var_75 = (short)-13776;
unsigned int var_76 = 4230759894U;
_Bool var_77 = (_Bool)1;
short var_78 = (short)24484;
short var_79 = (short)-22413;
long long int var_80 = 1840556291036806661LL;
unsigned short arr_0 [15] ;
unsigned int arr_1 [15] [15] ;
signed char arr_2 [12] [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
unsigned int arr_5 [12] ;
short arr_6 [12] [12] [12] [12] ;
unsigned short arr_7 [12] ;
unsigned short arr_8 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
short arr_10 [12] [12] ;
signed char arr_11 [12] [12] [12] [12] [12] [12] ;
signed char arr_12 [12] [12] [12] [12] [12] [12] ;
signed char arr_13 [12] [12] [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] [12] [12] [12] [12] ;
unsigned short arr_24 [12] ;
short arr_30 [24] ;
_Bool arr_31 [24] ;
unsigned long long int arr_32 [15] ;
unsigned short arr_45 [15] [15] [15] [15] [15] ;
_Bool arr_48 [15] [15] [15] [15] [15] ;
unsigned long long int arr_61 [15] [15] [15] ;
long long int arr_67 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)43282;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1026303305U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8368421031551019803ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 263495408U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)24587;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)51627;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)58770;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4639755419442676901ULL : 12069829305259059854ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20182 : (short)-31806;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned short)30455 : (unsigned short)11169;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34530 : (unsigned short)17908;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (short)-24841;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 14048547437577468878ULL : 5085755874379376138ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)10746 : (unsigned short)8297;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = 13787982128458083033ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_67 [i_0] = 8326196761521370257LL;
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
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
