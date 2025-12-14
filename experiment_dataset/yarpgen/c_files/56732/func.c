/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56732
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (~((-(arr_1 [i_0] [i_0])))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned char)201)))))) ? (max((((((/* implicit */_Bool) arr_6 [5ULL] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-4212582458222898141LL) : (((/* implicit */long long int) var_16))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3 - 2] [i_1 - 1])) ? (((/* implicit */int) ((signed char) arr_1 [i_2] [i_2]))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) -1142520512);
            var_21 = ((/* implicit */short) ((((unsigned int) var_1)) != ((-(arr_1 [i_0] [i_4])))));
            var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned int) arr_13 [i_4]))) ? (((/* implicit */int) ((arr_1 [i_0] [i_4]) > (2218083722U)))) : ((-(var_14)))))));
            arr_14 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_9 [i_0] [i_0] [i_4] [i_4]))))));
        }
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_23 |= ((/* implicit */unsigned short) ((unsigned long long int) arr_16 [i_5]));
            var_24 = ((/* implicit */unsigned int) ((unsigned char) var_16));
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_16 [i_0])))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) (short)32741)))))) : (((/* implicit */int) ((599898814U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [5ULL])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203)))))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 4; i_8 < 19; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
                {
                    {
                        arr_28 [i_6] [i_6] [i_8] [i_9 + 1] = ((/* implicit */unsigned int) arr_18 [i_6]);
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((~(var_7))) < (((/* implicit */unsigned int) (+(arr_24 [i_7] [i_9 + 1])))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            arr_31 [i_6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) arr_25 [i_7] [i_8] [i_10]))));
                            var_27 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) <= (((/* implicit */int) arr_26 [i_9 - 1] [i_8] [i_9 + 1] [i_9 - 1] [i_9 - 1]))));
                            var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)-32741)), (15185048347647337976ULL)));
                            var_29 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)856))) == (4294967295U))));
                            arr_32 [i_8] [i_6] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)49)) : (var_14)))) ? (((/* implicit */int) (unsigned short)42049)) : (((/* implicit */int) (unsigned char)46)))) * (((/* implicit */int) (((~(arr_24 [i_6] [i_8]))) == (((/* implicit */int) (signed char)-5)))))));
                        }
                        for (int i_11 = 1; i_11 < 21; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */short) arr_27 [i_8 + 3] [i_7] [i_8]);
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_2))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
        {
            var_32 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_30 [i_6] [i_12] [i_12])) ? (arr_30 [i_12] [i_12] [i_12]) : (((/* implicit */int) (signed char)101))))));
            /* LoopSeq 2 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~(((unsigned long long int) max((((/* implicit */unsigned long long int) arr_41 [i_13])), (var_1)))))))));
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) var_14))));
            }
            for (int i_14 = 1; i_14 < 19; i_14 += 2) 
            {
                arr_46 [i_6] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)4)) ? (var_12) : (((/* implicit */int) (signed char)120))))) * (16347374036607566712ULL))));
                var_35 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((arr_18 [i_6]) + (((/* implicit */int) var_15))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)32741))) - (2048LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            }
            arr_47 [i_6] [i_12] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_16)) : (14ULL))) >> (((var_16) - (2826454333U))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)86)))))));
            var_36 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_12] [i_6] [i_6])) == (((/* implicit */int) (signed char)120))))), (((((/* implicit */_Bool) 599898814U)) ? (2592272020U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))))))));
            var_37 += ((/* implicit */unsigned int) (~(var_10)));
        }
        for (short i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                arr_54 [i_15] [i_15] [i_15] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_37 [i_6])) ? (((/* implicit */long long int) arr_37 [i_15])) : (9223372036854775807LL))) >= (((/* implicit */long long int) ((((arr_37 [i_6]) + (2147483647))) >> (((((/* implicit */int) var_3)) + (96))))))));
                var_38 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_27 [i_6] [i_15] [i_16])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_6] [i_15] [i_16] [i_16] [i_15])))))))) : (arr_22 [i_6]));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */int) ((unsigned int) min((arr_38 [i_6] [i_15] [i_15]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_13)), (arr_34 [i_18])))))));
                            arr_59 [i_17] [i_6] [i_15] [i_17] [i_18] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_18 [i_6])) - (var_7)))) && (((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [i_17] [i_16] [i_6]), (arr_25 [i_18] [i_16] [i_6]))))) : (7494836830704115186ULL)));
                            arr_60 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 9223372036854775790LL)) || (arr_39 [i_6] [i_6] [i_16] [i_17]))) ? (((/* implicit */int) arr_26 [i_17] [i_6] [i_16] [i_17] [i_18])) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)197)))) > (((/* implicit */int) (short)32741)))))));
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_16] [i_17] [i_18])) ? (((/* implicit */long long int) arr_38 [(unsigned short)5] [i_15] [i_18])) : (var_11)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)17103)) ? (((/* implicit */int) (unsigned short)48433)) : (arr_24 [i_15] [i_15]))))) : (((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_58 [i_6] [i_17] [i_16] [i_15] [i_6])) : (((/* implicit */int) arr_39 [i_6] [i_6] [i_16] [i_17])))) : ((-(((/* implicit */int) arr_26 [i_6] [i_6] [i_17] [i_16] [i_18]))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                arr_64 [i_15] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(1281287774U))) * (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_16)) <= (((((/* implicit */_Bool) arr_62 [i_6] [i_15] [i_6])) ? (((/* implicit */long long int) var_16)) : ((-9223372036854775807LL - 1LL)))))))) : (((((((/* implicit */_Bool) var_13)) ? (4443323731793367308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_6] [i_15] [i_19]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_48 [i_6] [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32704)))))))))));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17516298810981712114ULL)))))) : (arr_20 [i_6] [i_15])));
            }
            /* LoopNest 2 */
            for (unsigned short i_20 = 3; i_20 < 19; i_20 += 2) 
            {
                for (unsigned char i_21 = 2; i_21 < 19; i_21 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned int) max((3144104338826788551LL), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 1622292093)) ? (((/* implicit */int) (unsigned short)32832)) : (-1201088278))))))));
                        arr_71 [i_21 + 3] [i_15] [i_15] [i_15] [i_6] |= ((/* implicit */unsigned long long int) (((~(((((/* implicit */int) arr_61 [i_6] [i_6] [i_6])) ^ (-1201088295))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_21 - 1] [i_20 - 1] [i_20 + 2]))) * (var_1))) - (7933141538929813104ULL)))));
                        var_43 += ((/* implicit */signed char) (-((((!(((/* implicit */_Bool) arr_35 [i_21 + 1] [i_20] [i_6] [i_15] [i_6])))) ? (((/* implicit */long long int) arr_57 [i_21] [i_20 - 3] [i_20] [i_21 + 3] [i_20 + 3])) : (((((/* implicit */_Bool) arr_58 [i_21] [i_15] [i_20 - 1] [i_20] [i_21 - 2])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_56 [i_6] [i_6] [i_20 - 2] [i_20 - 2]))))))));
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) arr_66 [i_6] [i_6]))))) : (((/* implicit */int) min((((/* implicit */short) arr_23 [i_6] [i_6] [i_6])), (arr_70 [i_6] [i_6] [i_6] [i_6])))))))));
        arr_72 [(unsigned short)20] [i_6] |= (+(((unsigned long long int) ((int) arr_45 [i_6] [i_6] [i_6]))));
        var_45 = ((/* implicit */unsigned char) (~(var_16)));
    }
    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 3) 
    {
        var_46 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_39 [i_22] [(short)6] [i_22] [i_22])))))), (max((var_11), (((/* implicit */long long int) 1032192U))))));
        var_47 |= ((((/* implicit */_Bool) arr_25 [i_22] [i_22] [i_22])) ? (var_7) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_35 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */int) (short)-22552)) : (-1622292093))) % ((-(((/* implicit */int) arr_26 [i_22] [(unsigned char)14] [i_22] [i_22] [i_22]))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_23 = 0; i_23 < 14; i_23 += 2) 
    {
        for (int i_24 = 0; i_24 < 14; i_24 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_25 = 0; i_25 < 14; i_25 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 14; i_26 += 2) 
                    {
                        for (int i_27 = 0; i_27 < 14; i_27 += 4) 
                        {
                            {
                                var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9463733174537054525ULL)))) ? (arr_67 [i_25] [i_25] [i_24] [i_24]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) + (var_14))))))) ? (max((((/* implicit */unsigned int) arr_43 [i_25])), (((((/* implicit */_Bool) -1282791487)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_25]))))))));
                                arr_90 [i_25] [i_24] [i_25] [i_26] [i_27] = ((/* implicit */int) 15745720767068952741ULL);
                            }
                        } 
                    } 
                    arr_91 [i_23] [i_23] [i_25] [i_25] = arr_25 [i_23] [i_24] [i_25];
                    var_49 += ((/* implicit */long long int) arr_75 [i_23]);
                    /* LoopNest 2 */
                    for (unsigned char i_28 = 0; i_28 < 14; i_28 += 4) 
                    {
                        for (signed char i_29 = 2; i_29 < 12; i_29 += 3) 
                        {
                            {
                                var_50 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) arr_77 [i_28] [i_24])), (arr_27 [i_29 + 1] [i_25] [i_24])))))));
                                arr_97 [i_25] [i_25] [i_23] = ((/* implicit */unsigned long long int) ((unsigned int) ((short) ((arr_52 [19LL] [i_24] [i_29] [i_28]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                }
                var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((arr_40 [i_23] [i_23] [i_23]) != (arr_51 [i_24] [i_23]))))));
            }
        } 
    } 
}
