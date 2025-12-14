#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3521232277U;
unsigned int var_1 = 2569961644U;
long long int var_2 = -7747778406430695375LL;
unsigned long long int var_3 = 18017809381442503926ULL;
unsigned int var_4 = 4094383891U;
unsigned long long int var_5 = 16164565857724430643ULL;
unsigned short var_6 = (unsigned short)46430;
unsigned long long int var_7 = 2793207075778771709ULL;
unsigned short var_8 = (unsigned short)8571;
unsigned int var_9 = 1063907798U;
int zero = 0;
unsigned long long int var_10 = 8680277724681080943ULL;
unsigned long long int var_11 = 10473410714257083100ULL;
unsigned short var_12 = (unsigned short)17092;
unsigned int var_13 = 5122388U;
unsigned long long int var_14 = 14996399655222686855ULL;
unsigned long long int var_15 = 17007270859283634736ULL;
unsigned int var_16 = 3118975912U;
unsigned int var_17 = 1673337029U;
unsigned short var_18 = (unsigned short)18699;
unsigned int var_19 = 911845106U;
unsigned long long int var_20 = 17241667563940120930ULL;
unsigned int var_21 = 699871387U;
unsigned long long int var_22 = 3466427881743018999ULL;
unsigned long long int var_23 = 3414832536159417735ULL;
unsigned long long int var_24 = 8017675188955004853ULL;
unsigned int var_25 = 2324954278U;
unsigned int var_26 = 1007071062U;
unsigned short var_27 = (unsigned short)42730;
unsigned short var_28 = (unsigned short)20362;
unsigned long long int var_29 = 10169719708766338413ULL;
unsigned short var_30 = (unsigned short)46561;
unsigned short var_31 = (unsigned short)47004;
unsigned int var_32 = 3375797847U;
unsigned int var_33 = 2754060888U;
unsigned short var_34 = (unsigned short)65337;
unsigned long long int var_35 = 15556827259425425737ULL;
unsigned long long int var_36 = 6831030083131639917ULL;
unsigned int var_37 = 1808771615U;
long long int var_38 = 5582402187852275948LL;
unsigned int var_39 = 3474864342U;
unsigned short var_40 = (unsigned short)8110;
unsigned long long int var_41 = 13796007246619465844ULL;
unsigned short var_42 = (unsigned short)43495;
unsigned long long int var_43 = 10360630829593002309ULL;
long long int var_44 = 8736736727169901815LL;
long long int var_45 = -6843804788707149923LL;
unsigned int var_46 = 3496450936U;
unsigned long long int var_47 = 8839680600108432111ULL;
unsigned short var_48 = (unsigned short)48142;
unsigned long long int var_49 = 5831041721820713865ULL;
unsigned int var_50 = 2263829100U;
unsigned int var_51 = 2750521143U;
long long int var_52 = -4844871492426589993LL;
unsigned int var_53 = 3344790852U;
unsigned long long int var_54 = 16817253745501970139ULL;
unsigned short var_55 = (unsigned short)36493;
long long int var_56 = -5131649115162820998LL;
long long int var_57 = 9127588814087933741LL;
unsigned long long int var_58 = 14828806562132254618ULL;
unsigned short var_59 = (unsigned short)64581;
long long int var_60 = -7283704242872576916LL;
long long int var_61 = 5827151491576103334LL;
unsigned long long int var_62 = 3722456536700194517ULL;
unsigned short var_63 = (unsigned short)42398;
unsigned short var_64 = (unsigned short)11914;
long long int var_65 = 5549813497185349123LL;
unsigned long long int var_66 = 6728872593946870920ULL;
unsigned long long int var_67 = 14254122009788822591ULL;
unsigned short var_68 = (unsigned short)12091;
unsigned int var_69 = 2038983227U;
long long int var_70 = 741372865816431177LL;
long long int var_71 = -8047324731016739273LL;
unsigned long long int var_72 = 17486278471925376013ULL;
unsigned short var_73 = (unsigned short)59700;
unsigned short var_74 = (unsigned short)50293;
unsigned int var_75 = 1040605718U;
unsigned int var_76 = 404038869U;
long long int var_77 = 3540349974587370554LL;
unsigned int arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
long long int arr_2 [14] ;
unsigned long long int arr_3 [14] ;
unsigned long long int arr_4 [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned short arr_6 [14] ;
long long int arr_7 [14] [14] ;
unsigned short arr_8 [14] [14] [14] ;
unsigned long long int arr_9 [14] ;
unsigned long long int arr_10 [14] [14] [14] ;
unsigned int arr_11 [14] [14] [14] [14] ;
unsigned short arr_12 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_13 [14] [14] [14] [14] ;
unsigned short arr_14 [14] [14] [14] [14] [14] ;
unsigned int arr_15 [14] ;
unsigned short arr_16 [14] [14] [14] [14] ;
long long int arr_17 [14] ;
unsigned int arr_18 [14] [14] ;
unsigned int arr_19 [14] [14] [14] ;
unsigned long long int arr_22 [14] ;
unsigned int arr_23 [14] ;
unsigned short arr_24 [14] ;
unsigned short arr_25 [14] [14] ;
unsigned long long int arr_26 [14] [14] ;
long long int arr_28 [14] [14] ;
unsigned short arr_29 [14] ;
unsigned int arr_32 [14] ;
unsigned long long int arr_33 [14] ;
unsigned short arr_35 [14] ;
unsigned int arr_41 [14] [14] [14] [14] ;
long long int arr_42 [14] [14] ;
unsigned int arr_44 [14] [14] [14] ;
unsigned long long int arr_45 [14] [14] ;
unsigned long long int arr_51 [14] ;
unsigned long long int arr_53 [14] [14] [14] ;
unsigned int arr_54 [14] [14] [14] ;
long long int arr_56 [14] [14] [14] [14] ;
unsigned int arr_58 [14] [14] [14] ;
unsigned int arr_59 [14] ;
unsigned int arr_61 [14] [14] ;
unsigned long long int arr_70 [14] [14] [14] ;
long long int arr_72 [14] [14] [14] [14] [14] ;
unsigned short arr_74 [14] [14] [14] [14] ;
long long int arr_77 [14] [14] [14] [14] [14] ;
long long int arr_27 [14] ;
unsigned int arr_30 [14] [14] [14] ;
unsigned short arr_34 [14] [14] [14] ;
unsigned long long int arr_46 [14] ;
unsigned short arr_50 [14] [14] ;
unsigned long long int arr_63 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3806048007U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10723;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 5727577193964228381LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 608584800895639655ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 16485450139435427547ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3676878061411954335ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)65333;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1014181308109959831LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 12408949413541707800ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 6539079122559813322ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2492839785U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)34344;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1948347207U : 3931672844U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)3701;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 1661564555U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)62625 : (unsigned short)24042;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = -924814489102857872LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = 3071240322U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1563984843U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = 1557606833103973041ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = 943898241U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (unsigned short)54089;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)55972;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = 5598895730141966059ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = 1357307544823867045LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (unsigned short)15856;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = 3768817081U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = 10767680197220124293ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (unsigned short)53908;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 1711074560U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_42 [i_0] [i_1] = 5024371983646672202LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 2277997792U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_45 [i_0] [i_1] = 7540045975481437459ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_51 [i_0] = 8243746268102210999ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 6331857226859868474ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 2251403781U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = -7895952227032271116LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = 1266370924U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_59 [i_0] = 4096647370U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_61 [i_0] [i_1] = 650479797U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = 7982531326615831960ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] = 8404750222367052609LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59184;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] = 4011224752083189795LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = 8191982514497726004LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 3981473554U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)8894 : (unsigned short)7217;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_46 [i_0] = 15700039662667729792ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_50 [i_0] [i_1] = (unsigned short)9541;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_63 [i_0] [i_1] = 15296009001526160949ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_63 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
