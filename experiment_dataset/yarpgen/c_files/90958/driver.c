#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5515937430918128752ULL;
_Bool var_1 = (_Bool)0;
long long int var_2 = 1200851281109712692LL;
unsigned long long int var_3 = 5835387305088659223ULL;
unsigned short var_4 = (unsigned short)57451;
signed char var_5 = (signed char)-81;
unsigned int var_6 = 2510351305U;
long long int var_7 = -4289740655328759241LL;
unsigned long long int var_8 = 4390381612802037423ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3137065055741563859LL;
int zero = 0;
short var_12 = (short)17561;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)218;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)48;
unsigned char var_17 = (unsigned char)114;
unsigned short var_18 = (unsigned short)59356;
unsigned char var_19 = (unsigned char)235;
unsigned char var_20 = (unsigned char)236;
int var_21 = 183146069;
unsigned char var_22 = (unsigned char)141;
int var_23 = 20803318;
int var_24 = 1181052635;
unsigned short var_25 = (unsigned short)31929;
unsigned int var_26 = 46506356U;
unsigned short var_27 = (unsigned short)31081;
signed char var_28 = (signed char)18;
signed char var_29 = (signed char)110;
short var_30 = (short)-512;
short var_31 = (short)31597;
signed char var_32 = (signed char)-64;
signed char var_33 = (signed char)26;
long long int var_34 = 6754749703803001862LL;
unsigned char var_35 = (unsigned char)146;
signed char var_36 = (signed char)126;
long long int var_37 = -8700509577453962268LL;
short var_38 = (short)-12153;
signed char var_39 = (signed char)-5;
short var_40 = (short)19657;
long long int var_41 = 98979401314844040LL;
signed char var_42 = (signed char)-87;
signed char var_43 = (signed char)-39;
signed char var_44 = (signed char)68;
unsigned long long int var_45 = 5138062119652958380ULL;
_Bool var_46 = (_Bool)0;
signed char var_47 = (signed char)57;
short var_48 = (short)-7153;
short var_49 = (short)22611;
unsigned int var_50 = 3911843185U;
unsigned char var_51 = (unsigned char)155;
signed char var_52 = (signed char)-118;
unsigned short var_53 = (unsigned short)50599;
short var_54 = (short)764;
long long int var_55 = -5958905697540021129LL;
long long int var_56 = 4350555241418129742LL;
_Bool var_57 = (_Bool)1;
signed char var_58 = (signed char)-71;
unsigned long long int var_59 = 15957878250737917675ULL;
signed char var_60 = (signed char)-99;
unsigned char var_61 = (unsigned char)98;
short var_62 = (short)-15213;
signed char var_63 = (signed char)49;
long long int var_64 = 4060279328947741103LL;
unsigned short var_65 = (unsigned short)18148;
long long int var_66 = 2527402594806837911LL;
short var_67 = (short)18177;
long long int var_68 = 3826985973182832880LL;
_Bool var_69 = (_Bool)1;
unsigned long long int var_70 = 16898949839374126943ULL;
int var_71 = 1113577698;
unsigned char var_72 = (unsigned char)56;
signed char var_73 = (signed char)55;
signed char arr_0 [24] ;
int arr_1 [24] ;
signed char arr_3 [24] ;
unsigned int arr_4 [24] [24] [24] ;
long long int arr_6 [24] [24] [24] ;
short arr_7 [24] [24] [24] ;
unsigned short arr_9 [24] [24] [24] [24] [24] [24] ;
signed char arr_10 [24] [24] ;
short arr_11 [24] [24] [24] ;
signed char arr_12 [24] [24] [24] [24] [24] [24] ;
long long int arr_15 [24] [24] [24] ;
_Bool arr_17 [24] [24] [24] [24] [24] [24] [24] ;
signed char arr_18 [24] ;
_Bool arr_19 [24] ;
unsigned char arr_20 [24] [24] [24] [24] ;
unsigned char arr_21 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_22 [24] [24] ;
signed char arr_29 [24] [24] [24] [24] ;
unsigned int arr_33 [24] [24] [24] [24] [24] ;
unsigned char arr_34 [24] ;
short arr_35 [24] [24] [24] [24] [24] [24] ;
signed char arr_38 [24] [24] [24] [24] [24] [24] [24] ;
unsigned int arr_44 [24] ;
signed char arr_45 [24] [24] ;
unsigned char arr_48 [24] [24] [24] [24] ;
long long int arr_64 [22] [22] ;
long long int arr_41 [24] [24] [24] [24] ;
unsigned char arr_42 [24] [24] [24] ;
unsigned int arr_55 [19] ;
unsigned char arr_56 [19] [19] ;
unsigned long long int arr_57 [19] [19] ;
long long int arr_62 [21] ;
short arr_67 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1594161922;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 265766495U : 140070545U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2627884356473579982LL : 4634667736950744631LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)9103 : (short)-846;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)49621;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)14870 : (short)31338;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -5740339008315825550LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)151 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = 3747643577U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 64381147U : 3540831135U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)6680;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = 1352944243U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)37 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_64 [i_0] [i_1] = -5428889711241706971LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1584500171265842013LL : 5163639375329794853LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)181 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? 2065117870U : 3845754675U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_56 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)210 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_57 [i_0] [i_1] = (i_1 % 2 == 0) ? 14476831643013067830ULL : 843828887344771399ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_62 [i_0] = (i_0 % 2 == 0) ? -3638347342469840835LL : -2546345245301884297LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_67 [i_0] = (short)32294;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_57 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_67 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
