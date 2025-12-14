#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29575;
unsigned short var_1 = (unsigned short)28371;
unsigned short var_2 = (unsigned short)36395;
unsigned short var_3 = (unsigned short)1736;
unsigned short var_4 = (unsigned short)53745;
unsigned short var_5 = (unsigned short)57951;
unsigned long long int var_6 = 2809919632251712614ULL;
unsigned long long int var_7 = 14727143971633378746ULL;
unsigned long long int var_8 = 636222277828140233ULL;
unsigned short var_9 = (unsigned short)45529;
unsigned long long int var_10 = 8341632614209460401ULL;
unsigned long long int var_11 = 6670659094419362049ULL;
unsigned long long int var_12 = 18342740250859939039ULL;
unsigned short var_13 = (unsigned short)14165;
unsigned long long int var_14 = 15374284475655312996ULL;
unsigned short var_15 = (unsigned short)17613;
unsigned long long int var_16 = 15050108094305219278ULL;
unsigned long long int var_17 = 15845831618812970978ULL;
unsigned short var_18 = (unsigned short)39864;
unsigned long long int var_19 = 2625744484068054047ULL;
int zero = 0;
unsigned long long int var_20 = 2994467429436322770ULL;
unsigned long long int var_21 = 10075550967056728252ULL;
unsigned short var_22 = (unsigned short)50175;
unsigned long long int var_23 = 18402912708849054167ULL;
unsigned long long int var_24 = 7932803658210312071ULL;
unsigned short var_25 = (unsigned short)43458;
unsigned short var_26 = (unsigned short)11495;
unsigned short var_27 = (unsigned short)6159;
unsigned short var_28 = (unsigned short)5151;
unsigned long long int var_29 = 16881458124301382994ULL;
unsigned long long int var_30 = 14259794602169088794ULL;
unsigned short var_31 = (unsigned short)9101;
unsigned long long int var_32 = 12043832900082717067ULL;
unsigned long long int var_33 = 14507960737193744705ULL;
unsigned short var_34 = (unsigned short)27416;
unsigned short var_35 = (unsigned short)8894;
unsigned short var_36 = (unsigned short)12662;
unsigned short var_37 = (unsigned short)33637;
unsigned short var_38 = (unsigned short)25577;
unsigned short var_39 = (unsigned short)48372;
unsigned short var_40 = (unsigned short)36071;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned short arr_3 [21] ;
unsigned long long int arr_4 [21] ;
unsigned short arr_5 [21] [21] [21] ;
unsigned short arr_8 [21] [21] [21] [21] ;
unsigned short arr_10 [21] [21] ;
unsigned short arr_11 [21] [21] [21] [21] ;
unsigned long long int arr_14 [17] ;
unsigned long long int arr_18 [17] [17] ;
unsigned long long int arr_21 [17] [17] ;
unsigned long long int arr_27 [17] ;
unsigned long long int arr_28 [17] [17] [17] [17] [17] ;
unsigned short arr_32 [24] [24] ;
unsigned short arr_33 [24] ;
unsigned short arr_34 [24] [24] [24] ;
unsigned long long int arr_35 [24] ;
unsigned short arr_36 [24] [24] [24] ;
unsigned short arr_38 [24] ;
unsigned long long int arr_39 [24] [24] [24] ;
unsigned short arr_40 [24] ;
unsigned short arr_43 [12] [12] ;
unsigned short arr_57 [23] [23] ;
unsigned short arr_58 [23] [23] ;
unsigned long long int arr_59 [23] ;
unsigned long long int arr_62 [23] ;
unsigned short arr_66 [23] [23] [23] [23] ;
unsigned long long int arr_70 [23] [23] [23] [23] ;
unsigned long long int arr_72 [23] [23] [23] [23] [23] ;
unsigned long long int arr_73 [23] [23] [23] [23] [23] [23] [23] ;
unsigned short arr_78 [23] [23] [23] ;
unsigned short arr_79 [23] [23] [23] [23] ;
unsigned short arr_81 [23] [23] [23] [23] ;
unsigned long long int arr_82 [23] [23] [23] [23] [23] [23] ;
unsigned short arr_87 [15] ;
unsigned long long int arr_89 [15] ;
unsigned short arr_91 [15] [15] [15] ;
unsigned short arr_93 [15] [15] [15] [15] ;
unsigned short arr_95 [15] [15] [15] ;
unsigned long long int arr_97 [15] [15] [15] [15] ;
unsigned short arr_2 [21] [21] ;
unsigned long long int arr_12 [21] [21] [21] [21] ;
unsigned long long int arr_13 [21] ;
unsigned short arr_29 [17] [17] [17] [17] [17] [17] ;
unsigned short arr_30 [17] [17] [17] [17] ;
unsigned short arr_31 [17] [17] [17] [17] [17] ;
unsigned short arr_41 [24] [24] [24] [24] ;
unsigned long long int arr_45 [12] ;
unsigned long long int arr_52 [12] [12] [12] [12] ;
unsigned short arr_56 [21] [21] ;
unsigned long long int arr_60 [23] [23] ;
unsigned short arr_61 [23] ;
unsigned long long int arr_64 [23] ;
unsigned long long int arr_69 [23] [23] [23] [23] ;
unsigned short arr_74 [23] [23] [23] ;
unsigned short arr_75 [23] ;
unsigned short arr_83 [23] [23] [23] [23] ;
unsigned long long int arr_84 [23] [23] ;
unsigned long long int arr_85 [23] [23] [23] [23] [23] [23] [23] ;
unsigned short arr_86 [23] ;
unsigned long long int arr_90 [15] ;
unsigned short arr_103 [15] [15] [15] ;
unsigned long long int arr_104 [15] [15] [15] [15] [15] ;
unsigned short arr_105 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_108 [15] [15] ;
unsigned long long int arr_109 [15] [15] [15] [15] ;
unsigned short arr_112 [15] [15] [15] [15] [15] ;
unsigned short arr_113 [15] [15] ;
unsigned long long int arr_114 [15] [15] ;
unsigned short arr_115 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 14951909245224596213ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 11540485643195136977ULL : 6310415993584813326ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7958 : (unsigned short)3309;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 9889356649498815865ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)351;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18827;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)44750;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52919;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 13889919502570903979ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 14863543572066512430ULL : 8800724656941494148ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = 6314847410517477799ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = 7360850125032971316ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 16833496298333973764ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned short)18518;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (unsigned short)52303;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (unsigned short)5434;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 11276035935902806614ULL : 514101813171900969ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned short)49621;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_38 [i_0] = (unsigned short)61996;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15381258498321145893ULL : 12773354483975403682ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10874 : (unsigned short)7470;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_43 [i_0] [i_1] = (unsigned short)50211;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_57 [i_0] [i_1] = (unsigned short)7549;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_58 [i_0] [i_1] = (unsigned short)34701;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_59 [i_0] = 9325377756788451488ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_62 [i_0] = 16330961844328449752ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (unsigned short)22598;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = 18444751644104071785ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 11091926010859539356ULL : 10702860642726352498ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 1348038653976717186ULL : 7251583950785274968ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_78 [i_0] [i_1] [i_2] = (unsigned short)28366;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_79 [i_0] [i_1] [i_2] [i_3] = (unsigned short)9859;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_81 [i_0] [i_1] [i_2] [i_3] = (unsigned short)6014;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16247707485115787807ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_87 [i_0] = (unsigned short)22442;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_89 [i_0] = 11403347052544264544ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_91 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)43715 : (unsigned short)11187;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_93 [i_0] [i_1] [i_2] [i_3] = (unsigned short)38424;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_95 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)20026 : (unsigned short)58008;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_97 [i_0] [i_1] [i_2] [i_3] = 13356784316357125014ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)40138 : (unsigned short)31351;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 69313092627425153ULL : 14196009848017042967ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 12659238616857536320ULL : 9512456252463420843ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)59497 : (unsigned short)10995;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)26763 : (unsigned short)7127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)13146 : (unsigned short)1318;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)30054 : (unsigned short)53306;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 1115013354271745648ULL : 14752631142547674694ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3586175505704002007ULL : 13589199956298984361ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_56 [i_0] [i_1] = (unsigned short)48925;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_60 [i_0] [i_1] = 10335838197142334761ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_61 [i_0] = (unsigned short)12339;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_64 [i_0] = 13186995014007361594ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_69 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5094293610655195626ULL : 2441080665137926751ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)9324 : (unsigned short)23523;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_75 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15732 : (unsigned short)17555;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_83 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24642;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_84 [i_0] [i_1] = 15436148461991039459ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7836511925753612685ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_86 [i_0] = (unsigned short)64619;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_90 [i_0] = (i_0 % 2 == 0) ? 16316601977737134620ULL : 11479330040550088155ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_103 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)33100 : (unsigned short)42244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_104 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 16481275970422271642ULL : 13046814475780304384ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_105 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)61638 : (unsigned short)41942;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_108 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)28360 : (unsigned short)11569;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_109 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1468598094934948112ULL : 13003382815063548965ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_112 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)50966 : (unsigned short)47726;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_113 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)17878 : (unsigned short)15234;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_114 [i_0] [i_1] = (i_0 % 2 == 0) ? 9469088311862342246ULL : 18332395770326809527ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_115 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20437 : (unsigned short)38409;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_60 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_61 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_64 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_74 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_75 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_83 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_84 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_86 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_90 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_103 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_104 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_105 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_108 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_109 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_112 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_113 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_114 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_115 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
