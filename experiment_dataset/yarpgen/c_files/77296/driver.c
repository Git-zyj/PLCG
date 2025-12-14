#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50467;
signed char var_1 = (signed char)-15;
unsigned long long int var_3 = 15024210173452331261ULL;
unsigned int var_4 = 881278708U;
long long int var_5 = -4308738817233654750LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3871210658U;
unsigned int var_9 = 4184266886U;
unsigned short var_10 = (unsigned short)55665;
short var_11 = (short)7505;
unsigned long long int var_12 = 11847315383354359851ULL;
unsigned char var_13 = (unsigned char)150;
unsigned int var_14 = 2725680188U;
unsigned short var_15 = (unsigned short)55278;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)45550;
long long int var_19 = 1872281255675717522LL;
int zero = 0;
unsigned char var_20 = (unsigned char)45;
unsigned long long int var_21 = 1907170036981254486ULL;
int var_22 = -349106105;
unsigned short var_23 = (unsigned short)42205;
int var_24 = 1563546651;
int var_25 = -36285483;
int var_26 = 1494756286;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 7081115764681725679ULL;
long long int var_29 = 4330849908915061879LL;
long long int var_30 = 4810844318319231594LL;
_Bool var_31 = (_Bool)1;
short var_32 = (short)-2841;
unsigned char var_33 = (unsigned char)180;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 9152216794119951251ULL;
short var_36 = (short)4437;
unsigned char var_37 = (unsigned char)31;
unsigned char var_38 = (unsigned char)75;
int var_39 = 330864591;
unsigned short var_40 = (unsigned short)30456;
unsigned short var_41 = (unsigned short)15637;
unsigned long long int var_42 = 5884918694267452296ULL;
int var_43 = 1252459382;
_Bool var_44 = (_Bool)1;
unsigned long long int var_45 = 2701955915243989795ULL;
int arr_0 [22] ;
int arr_1 [22] [22] ;
short arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
unsigned short arr_4 [22] [22] [22] ;
unsigned char arr_7 [13] ;
unsigned long long int arr_8 [13] ;
unsigned short arr_10 [13] ;
unsigned short arr_11 [13] [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] ;
long long int arr_15 [13] ;
unsigned char arr_19 [13] [13] [13] ;
_Bool arr_27 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_33 [13] [13] [13] [13] ;
_Bool arr_48 [24] ;
short arr_49 [24] ;
unsigned long long int arr_50 [17] [17] ;
short arr_5 [22] [22] [22] ;
unsigned short arr_6 [22] ;
unsigned char arr_12 [13] [13] ;
int arr_22 [13] ;
long long int arr_38 [13] ;
_Bool arr_42 [13] [13] [13] [13] ;
signed char arr_43 [13] [13] [13] [13] [13] ;
signed char arr_46 [13] [13] [13] ;
signed char arr_47 [13] [13] [13] [13] [13] ;
long long int arr_52 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1944427397;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 302551766;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)30964;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)42671;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)4219;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 5924016773856837986ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned short)35301;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)50051;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 13403365536740993589ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -6423583735250350881LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)189 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_48 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_49 [i_0] = (short)-19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_50 [i_0] [i_1] = 6064962533026761033ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-27815;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)16653;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 138014055 : 149751679;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 1829989727365962473LL : -4703989082270454839LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)-75 : (signed char)68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-67 : (signed char)119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)86 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_52 [i_0] = 3322041161776970477LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
