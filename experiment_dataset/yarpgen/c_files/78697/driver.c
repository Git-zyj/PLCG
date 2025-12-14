#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)12963;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)115;
unsigned int var_8 = 2999163918U;
unsigned char var_9 = (unsigned char)10;
unsigned long long int var_10 = 5241919060981975856ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 3406408456U;
int zero = 0;
int var_19 = 1522116136;
int var_20 = 1333743408;
unsigned long long int var_21 = 16704948377533516083ULL;
unsigned char var_22 = (unsigned char)213;
long long int var_23 = -4542242933568110898LL;
unsigned short var_24 = (unsigned short)28735;
unsigned int var_25 = 3954565432U;
unsigned short var_26 = (unsigned short)63214;
signed char var_27 = (signed char)-14;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)-37;
int var_31 = 404864997;
int var_32 = 2032685278;
unsigned long long int var_33 = 11485528008561315459ULL;
unsigned char var_34 = (unsigned char)110;
int var_35 = -450233565;
unsigned char var_36 = (unsigned char)61;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 12517543205525666984ULL;
unsigned long long int var_39 = 434913714785995187ULL;
unsigned long long int var_40 = 4655461500714348846ULL;
signed char var_41 = (signed char)89;
unsigned short var_42 = (unsigned short)9644;
int var_43 = 1904436583;
unsigned int var_44 = 3536273726U;
signed char var_45 = (signed char)101;
unsigned int var_46 = 1833971564U;
unsigned int var_47 = 2587477677U;
unsigned int var_48 = 3381666336U;
_Bool var_49 = (_Bool)0;
unsigned char var_50 = (unsigned char)140;
long long int var_51 = -4482306683305622312LL;
unsigned short var_52 = (unsigned short)30824;
unsigned short var_53 = (unsigned short)15379;
long long int var_54 = 3355383280499813176LL;
_Bool var_55 = (_Bool)0;
unsigned long long int var_56 = 7736399900678791717ULL;
unsigned int var_57 = 1222460122U;
_Bool var_58 = (_Bool)1;
long long int var_59 = -619952542852005803LL;
unsigned char var_60 = (unsigned char)117;
short var_61 = (short)21207;
unsigned char var_62 = (unsigned char)114;
short var_63 = (short)-6910;
int var_64 = 1121198798;
int var_65 = -449121409;
_Bool var_66 = (_Bool)1;
unsigned long long int var_67 = 6187785960202736052ULL;
int var_68 = 255753538;
unsigned int var_69 = 2359366102U;
unsigned short var_70 = (unsigned short)8531;
_Bool var_71 = (_Bool)1;
int var_72 = 1382127610;
unsigned short var_73 = (unsigned short)35651;
unsigned char var_74 = (unsigned char)84;
signed char var_75 = (signed char)27;
int var_76 = 1287507385;
unsigned int var_77 = 3124332282U;
unsigned char var_78 = (unsigned char)238;
unsigned int var_79 = 2041939891U;
int var_80 = 745756824;
unsigned int var_81 = 3502940486U;
unsigned long long int var_82 = 17673292666149964301ULL;
unsigned int arr_1 [23] ;
signed char arr_2 [23] ;
int arr_4 [23] ;
signed char arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] ;
unsigned char arr_9 [23] [23] ;
signed char arr_10 [23] [23] [23] ;
int arr_11 [23] [23] [23] [23] [23] ;
int arr_13 [23] [23] ;
unsigned short arr_15 [23] ;
unsigned long long int arr_20 [23] [23] ;
_Bool arr_22 [23] [23] [23] ;
unsigned short arr_23 [23] [23] ;
unsigned char arr_29 [23] ;
unsigned char arr_33 [23] [23] ;
_Bool arr_36 [23] [23] [23] [23] ;
unsigned int arr_38 [23] [23] [23] ;
unsigned long long int arr_45 [23] ;
unsigned char arr_47 [23] ;
unsigned int arr_54 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1969734324U : 647342903U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 555992122 : -1239812454;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 324221716;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = -2132681860;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned short)22218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 14728934513406817910ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16309 : (unsigned short)26672;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned char)157 : (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 34122683U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 15017417025434020403ULL : 4989305170565091296ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2607921047U : 2569564487U;
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
    hash(&seed, var_81);
    hash(&seed, var_82);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
