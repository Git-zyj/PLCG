#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13484;
_Bool var_1 = (_Bool)1;
int var_2 = -874577227;
signed char var_3 = (signed char)10;
unsigned char var_4 = (unsigned char)206;
unsigned int var_5 = 2884503267U;
unsigned int var_6 = 4098266696U;
long long int var_7 = 4026065534910021867LL;
unsigned short var_8 = (unsigned short)46972;
unsigned short var_9 = (unsigned short)5009;
int zero = 0;
short var_10 = (short)-27366;
signed char var_11 = (signed char)103;
unsigned long long int var_12 = 1657856090141699869ULL;
long long int var_13 = -3830688574400918382LL;
unsigned short var_14 = (unsigned short)4135;
signed char var_15 = (signed char)22;
unsigned char var_16 = (unsigned char)42;
unsigned long long int var_17 = 1624176449338242363ULL;
long long int var_18 = -4682240280121680878LL;
unsigned short var_19 = (unsigned short)54246;
unsigned short var_20 = (unsigned short)37801;
unsigned int var_21 = 3233935786U;
unsigned int var_22 = 2462788604U;
short var_23 = (short)6074;
unsigned char var_24 = (unsigned char)63;
long long int var_25 = -4006905193597314103LL;
_Bool var_26 = (_Bool)0;
long long int var_27 = 9136414855485974963LL;
unsigned long long int var_28 = 2201102719352610679ULL;
unsigned long long int var_29 = 5567039365481073342ULL;
unsigned int var_30 = 2337391848U;
unsigned int var_31 = 2064101293U;
_Bool var_32 = (_Bool)1;
long long int var_33 = -8535441358992000872LL;
_Bool var_34 = (_Bool)1;
unsigned long long int var_35 = 4505432416559849219ULL;
signed char var_36 = (signed char)-87;
unsigned char var_37 = (unsigned char)135;
signed char var_38 = (signed char)13;
unsigned char var_39 = (unsigned char)109;
int var_40 = 596116612;
unsigned int var_41 = 2143858180U;
long long int var_42 = -3572157343306822581LL;
signed char var_43 = (signed char)-49;
_Bool var_44 = (_Bool)1;
_Bool var_45 = (_Bool)0;
unsigned long long int var_46 = 3933838608969743595ULL;
int var_47 = 1683831942;
unsigned char var_48 = (unsigned char)211;
int var_49 = 1413882665;
short var_50 = (short)17430;
unsigned char var_51 = (unsigned char)71;
int var_52 = -1290281660;
_Bool var_53 = (_Bool)0;
_Bool var_54 = (_Bool)0;
_Bool var_55 = (_Bool)0;
_Bool var_56 = (_Bool)1;
signed char arr_0 [20] ;
signed char arr_1 [20] ;
unsigned short arr_2 [20] ;
long long int arr_4 [20] [20] ;
_Bool arr_5 [20] [20] [20] ;
unsigned char arr_7 [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
_Bool arr_10 [20] [20] ;
signed char arr_14 [20] [20] [20] ;
unsigned long long int arr_18 [20] [20] ;
_Bool arr_20 [20] ;
unsigned long long int arr_22 [20] [20] [20] [20] ;
unsigned char arr_24 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_26 [20] [20] [20] [20] ;
signed char arr_28 [20] [20] [20] [20] [20] ;
long long int arr_34 [20] [20] [20] [20] ;
int arr_36 [20] [20] [20] ;
unsigned short arr_37 [20] ;
_Bool arr_41 [20] ;
int arr_46 [20] [20] [20] [20] [20] ;
int arr_48 [20] [20] [20] [20] [20] ;
long long int arr_61 [20] [20] [20] ;
_Bool arr_68 [20] [20] [20] [20] [20] [20] ;
_Bool arr_11 [20] [20] [20] ;
int arr_45 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)46232;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -1297124133325280957LL : 1572419772930196235LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)10 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 5305251598681625533ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 6271760908093755272ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 14237303763376616882ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -5540646919110839768LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = -395395651;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_37 [i_0] = (unsigned short)47401;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -1471719428 : 383039964;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = -136404967;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = 5644970439465366204LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_45 [i_0] [i_1] = (i_1 % 2 == 0) ? -1681620432 : -432750739;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
