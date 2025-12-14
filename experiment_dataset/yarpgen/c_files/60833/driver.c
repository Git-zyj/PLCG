#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned int var_2 = 2712109364U;
_Bool var_3 = (_Bool)0;
int var_4 = -965948153;
int var_5 = -1322817988;
signed char var_6 = (signed char)94;
_Bool var_7 = (_Bool)1;
int var_8 = 738084909;
int var_9 = -1673962302;
long long int var_10 = -118236982526769570LL;
signed char var_11 = (signed char)18;
unsigned int var_12 = 3282093939U;
int var_13 = -1688551580;
long long int var_14 = -6859034364144217016LL;
int var_15 = -102966012;
unsigned int var_16 = 1353067336U;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int var_19 = -2062309983;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4201569547U;
unsigned int var_22 = 590360824U;
long long int var_23 = 5808773643137075373LL;
_Bool var_24 = (_Bool)0;
int var_25 = 21465264;
int var_26 = -936019072;
int var_27 = -249586660;
int var_28 = 345625583;
signed char var_29 = (signed char)-8;
int var_30 = 913715766;
int var_31 = 2132870384;
unsigned int var_32 = 3988590579U;
long long int var_33 = 5150676241289103212LL;
long long int var_34 = -5262959813382754947LL;
unsigned int var_35 = 801137418U;
int var_36 = 445482351;
int var_37 = 1875456047;
int var_38 = 1370863927;
signed char var_39 = (signed char)116;
unsigned int var_40 = 4217362841U;
signed char var_41 = (signed char)-105;
unsigned int var_42 = 2290454811U;
int var_43 = 7975007;
signed char var_44 = (signed char)-49;
long long int var_45 = 530430375363824404LL;
signed char var_46 = (signed char)-81;
signed char var_47 = (signed char)-126;
_Bool var_48 = (_Bool)0;
signed char var_49 = (signed char)-52;
int var_50 = -2100236039;
signed char var_51 = (signed char)-42;
int var_52 = 1697597996;
long long int var_53 = -2449493825505301329LL;
unsigned int var_54 = 821902057U;
int var_55 = 1807421464;
unsigned int var_56 = 1123523208U;
int var_57 = -254596130;
int var_58 = -406174035;
int var_59 = 179628766;
unsigned short var_60 = (unsigned short)55472;
signed char var_61 = (signed char)52;
unsigned int var_62 = 375267139U;
unsigned int var_63 = 216053827U;
_Bool var_64 = (_Bool)0;
signed char var_65 = (signed char)-124;
unsigned char var_66 = (unsigned char)199;
int var_67 = -676320762;
long long int var_68 = -4755231215524752397LL;
unsigned int var_69 = 357048868U;
signed char var_70 = (signed char)91;
int var_71 = -337300748;
signed char var_72 = (signed char)-80;
unsigned int var_73 = 4231586467U;
int var_74 = 1418358532;
unsigned int var_75 = 4163724686U;
int var_76 = 1088274704;
signed char var_77 = (signed char)-26;
unsigned int var_78 = 1880410830U;
signed char var_79 = (signed char)(-127 - 1);
unsigned short var_80 = (unsigned short)49467;
int var_81 = -46734394;
signed char var_82 = (signed char)-8;
long long int var_83 = -7911050836111051808LL;
int var_84 = -152061640;
int var_85 = -1149413251;
unsigned int var_86 = 3311644004U;
long long int var_87 = 8202993203838809064LL;
signed char var_88 = (signed char)-95;
int var_89 = 1243008338;
signed char var_90 = (signed char)-121;
_Bool var_91 = (_Bool)0;
signed char var_92 = (signed char)8;
int var_93 = -1048188874;
_Bool var_94 = (_Bool)0;
unsigned int var_95 = 3452810208U;
unsigned int var_96 = 2164558814U;
unsigned int var_97 = 1885043573U;
int arr_4 [18] ;
unsigned char arr_5 [18] ;
unsigned int arr_6 [18] [18] ;
signed char arr_7 [18] [18] ;
int arr_8 [18] [18] [18] ;
unsigned char arr_9 [18] ;
signed char arr_10 [18] [18] [18] ;
_Bool arr_11 [18] ;
long long int arr_12 [18] [18] [18] ;
long long int arr_13 [18] [18] [18] [18] [18] ;
signed char arr_14 [18] [18] [18] [18] ;
_Bool arr_15 [18] ;
long long int arr_16 [18] [18] [18] [18] ;
_Bool arr_18 [18] [18] [18] [18] [18] ;
long long int arr_19 [18] [18] ;
long long int arr_22 [18] [18] [18] ;
int arr_23 [18] [18] [18] [18] ;
unsigned short arr_25 [18] ;
int arr_26 [18] [18] [18] [18] ;
unsigned int arr_29 [18] [18] ;
signed char arr_35 [18] [18] [18] [18] ;
long long int arr_41 [18] [18] [18] ;
unsigned int arr_45 [18] [18] [18] [18] ;
long long int arr_46 [18] [18] ;
_Bool arr_51 [18] [18] [18] [18] [18] ;
unsigned char arr_55 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_56 [18] [18] [18] [18] ;
long long int arr_64 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -275982712;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 4773400U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1549895891;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 6715748746747879613LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -6118482313377727808LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -7062075444107595929LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = 5056626906621780168LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -8678593706668822399LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -2115847033;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (unsigned short)15381;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -1096072842;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_29 [i_0] [i_1] = 614157199U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-48 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6510117388029147695LL : 4485095489216123463LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = 3633474390U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_46 [i_0] [i_1] = -5465003221588910252LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)97 : (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = 2574274976U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_64 [i_0] [i_1] = 8558811161552442601LL;
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
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
    hash(&seed, var_97);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
