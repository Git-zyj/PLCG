#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16508153977583181131ULL;
unsigned char var_1 = (unsigned char)50;
int var_3 = 236705855;
unsigned long long int var_4 = 5029008867872635799ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 5444346415941158872ULL;
unsigned long long int var_7 = 2567066299676016868ULL;
unsigned long long int var_9 = 12135668239704598971ULL;
unsigned char var_12 = (unsigned char)22;
unsigned long long int var_13 = 11672209272614981147ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14112561140325376926ULL;
unsigned long long int var_16 = 1574263707301222675ULL;
unsigned char var_17 = (unsigned char)37;
unsigned long long int var_18 = 14722463254327459591ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 746025020523167050ULL;
unsigned char var_21 = (unsigned char)241;
unsigned long long int var_22 = 10726753947867803091ULL;
unsigned long long int var_23 = 9057681563472510659ULL;
unsigned long long int var_24 = 7004891020262136175ULL;
unsigned long long int var_25 = 14401181945931008612ULL;
unsigned long long int var_26 = 15334959704219359064ULL;
int var_27 = -1428192818;
unsigned long long int var_28 = 16268235360532154373ULL;
unsigned long long int var_29 = 1518135753936421881ULL;
unsigned long long int var_30 = 2849148741712209163ULL;
_Bool var_31 = (_Bool)1;
int var_32 = 1412974451;
unsigned char var_33 = (unsigned char)35;
unsigned long long int var_34 = 1567658284806596478ULL;
unsigned long long int var_35 = 15629547698955002751ULL;
unsigned char var_36 = (unsigned char)18;
unsigned char var_37 = (unsigned char)204;
_Bool var_38 = (_Bool)1;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 11702242054175409825ULL;
unsigned long long int var_41 = 2254456971631502823ULL;
int var_42 = -548894600;
_Bool var_43 = (_Bool)0;
unsigned long long int var_44 = 9548776769631668500ULL;
unsigned long long int var_45 = 5274687828600124594ULL;
unsigned char var_46 = (unsigned char)229;
unsigned char var_47 = (unsigned char)93;
unsigned char var_48 = (unsigned char)116;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
_Bool arr_7 [10] ;
unsigned long long int arr_9 [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] ;
_Bool arr_16 [10] [10] ;
int arr_17 [10] [10] [10] [10] ;
unsigned long long int arr_18 [10] ;
_Bool arr_20 [10] ;
_Bool arr_21 [10] [10] [10] [10] ;
unsigned char arr_30 [10] [10] [10] ;
unsigned char arr_33 [10] [10] ;
unsigned long long int arr_11 [10] [10] [10] ;
int arr_14 [10] [10] [10] [10] ;
unsigned char arr_23 [10] [10] [10] [10] ;
int arr_31 [10] [10] [10] [10] [10] ;
unsigned long long int arr_37 [10] [10] [10] [10] ;
unsigned char arr_38 [10] [10] [10] ;
unsigned char arr_39 [10] ;
unsigned char arr_40 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 13893230805696109925ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8225821607847491885ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8005073519166463813ULL : 12366369062184220455ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2344996625818591076ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 4119012693405399225ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 271150319;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 7441903563353606960ULL : 2365268205047663319ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)40 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3313829127145224005ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 917302915;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)159 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1682460745 : 33834105;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 15743519279997149471ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned char)56;
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
