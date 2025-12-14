#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2073526925;
unsigned long long int var_1 = 12450109936453396326ULL;
int var_2 = -1915401679;
unsigned long long int var_3 = 13028001786031463316ULL;
unsigned long long int var_4 = 4050347098736193094ULL;
int var_5 = -1727643187;
unsigned long long int var_6 = 3892280357792588403ULL;
unsigned long long int var_7 = 11886724596201323721ULL;
unsigned long long int var_8 = 14189147614995169129ULL;
unsigned long long int var_9 = 14811199226511372722ULL;
unsigned long long int var_10 = 6091292602618768433ULL;
int var_11 = 838782100;
int zero = 0;
int var_12 = -1153493282;
int var_13 = -429111822;
int var_14 = 221246922;
unsigned long long int var_15 = 17511100808144919419ULL;
int var_16 = 500671121;
unsigned long long int var_17 = 7804814038487119217ULL;
unsigned long long int var_18 = 11662516011126088072ULL;
unsigned long long int var_19 = 11796734870696640344ULL;
int var_20 = -2119703274;
unsigned long long int var_21 = 7423763611637721416ULL;
unsigned long long int var_22 = 11962834685287338958ULL;
unsigned long long int var_23 = 11809177644063491692ULL;
unsigned long long int var_24 = 18205925101024372506ULL;
unsigned long long int var_25 = 17551382605573543681ULL;
unsigned long long int var_26 = 1290390253307045361ULL;
int var_27 = 199041704;
unsigned long long int var_28 = 15443916924765098637ULL;
unsigned long long int var_29 = 10389000416241873156ULL;
unsigned long long int var_30 = 10205773831095584308ULL;
int var_31 = -118608541;
int var_32 = 992134183;
unsigned long long int var_33 = 11710787038139788588ULL;
unsigned long long int var_34 = 17621227576887320250ULL;
int var_35 = 1790816385;
unsigned long long int var_36 = 9506366482066355964ULL;
int var_37 = 2042410626;
unsigned long long int var_38 = 3206969539896549351ULL;
int var_39 = 646561166;
unsigned long long int var_40 = 2350349854427412117ULL;
unsigned long long int var_41 = 3863980185138892987ULL;
unsigned long long int var_42 = 3894381313810585106ULL;
unsigned long long int var_43 = 1807977377990836685ULL;
int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
int arr_6 [24] [24] ;
unsigned long long int arr_12 [15] [15] ;
unsigned long long int arr_15 [15] ;
unsigned long long int arr_16 [22] [22] ;
unsigned long long int arr_17 [22] ;
int arr_19 [22] [22] ;
unsigned long long int arr_21 [22] ;
unsigned long long int arr_24 [22] [22] [22] [22] ;
unsigned long long int arr_25 [22] [22] [22] [22] [22] ;
unsigned long long int arr_26 [22] [22] ;
unsigned long long int arr_28 [22] [22] [22] ;
int arr_30 [22] [22] [22] [22] ;
int arr_32 [22] [22] [22] [22] ;
int arr_43 [22] [22] ;
unsigned long long int arr_48 [22] [22] ;
unsigned long long int arr_4 [24] ;
unsigned long long int arr_5 [24] [24] ;
int arr_8 [24] [24] [24] ;
unsigned long long int arr_9 [24] ;
unsigned long long int arr_10 [24] ;
unsigned long long int arr_35 [22] [22] [22] [22] ;
unsigned long long int arr_39 [22] [22] [22] [22] [22] ;
unsigned long long int arr_44 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -1046977242;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2665060567175782545ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1391393824688834261ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 2120058426;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 13708208653188212127ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 2813471561123962610ULL : 5964158993833518817ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = 8302994780998977429ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 17513598953568786148ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = -1051066364;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 751667944329530358ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 17958977582600042574ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2759016829291927721ULL : 15019252808867088447ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 14685351978382618078ULL : 4211152656823271671ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 323765022875595724ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -633820982 : -212757521;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 1708004932;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_43 [i_0] [i_1] = -1055418699;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_48 [i_0] [i_1] = 10790217612708261546ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9142248924527480767ULL : 7524275205313184391ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 14324505124007178456ULL : 12920114940932599593ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 877057468;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 14817279453432791925ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 6166024018938395779ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2484579497956477928ULL : 12222077279067980239ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2528345593296398990ULL : 14338522929802748539ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7477928088356517903ULL : 159647926542598280ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
