/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67930
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (unsigned short)63342))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_0 [i_0 + 3] [i_1 + 2]))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_0 [i_0 + 4] [i_1]))) : (arr_0 [10ULL] [i_0 - 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)(-127 - 1)))) || (((/* implicit */_Bool) -1460629073128582452LL))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned short)13947))));
                                var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0]))))), (((unsigned int) (unsigned char)0))));
                            }
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) arr_4 [i_0] [i_5] [i_0]);
                                arr_26 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)16]))));
                                arr_27 [(_Bool)1] [i_0] [i_5] [i_5] [i_5] = ((/* implicit */long long int) max((min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(short)16] [i_6])) ? (((/* implicit */int) arr_9 [i_0 + 3])) : (((/* implicit */int) (unsigned short)56186)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51589)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
                            var_27 = ((/* implicit */int) arr_33 [i_9] [i_10 + 3] [i_11]);
                            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10 + 2] [i_10] [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_11]))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_8] [i_10 - 1] [i_8]))) - (var_13)))));
                            arr_41 [i_8] [i_8] [i_10] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_10 + 2] [i_10 + 2] [i_8])) << (((/* implicit */int) ((((/* implicit */int) arr_30 [i_8])) < (((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)2194)) : (((/* implicit */int) (unsigned short)56186)))))) : (arr_12 [i_9] [i_9] [i_10 + 1] [i_10] [i_10] [i_11] [i_9])));
                        }
                    } 
                } 
                arr_42 [i_8] [(unsigned char)10] = ((/* implicit */_Bool) ((max((arr_40 [i_8] [i_8] [i_8] [i_8] [(_Bool)1]), (arr_40 [i_9] [i_9] [i_9] [i_8] [(_Bool)1]))) + (arr_40 [i_8] [i_8] [i_8] [i_8] [i_8])));
                arr_43 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63342))))))) : (min((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) arr_33 [i_8] [i_8] [(_Bool)1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)2193))))))));
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    var_29 = ((/* implicit */unsigned long long int) 795863870U);
                    var_30 = ((/* implicit */short) (+(((((/* implicit */int) arr_33 [i_8] [i_8] [i_12])) + (((/* implicit */int) arr_33 [8LL] [i_9] [i_12]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                    {
                        var_31 = var_18;
                        var_32 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 5960222124070887531LL)) ? (arr_18 [(short)0]) : (arr_18 [i_13]))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        arr_53 [i_14] [i_9] [i_9] [i_12] [i_14] [i_14] = ((/* implicit */short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13947)))))))));
                        var_33 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_46 [i_8] [i_12] [13] [i_14])) == (((/* implicit */int) arr_46 [(unsigned char)1] [i_12] [i_8] [i_8]))))) - (((/* implicit */int) min((arr_46 [i_8] [i_9] [i_12] [i_14]), (((/* implicit */unsigned short) arr_19 [i_8] [i_9] [i_14])))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_8] [12LL] [i_9])) > (((((/* implicit */int) max(((unsigned short)56186), (((/* implicit */unsigned short) arr_30 [i_8]))))) | (((/* implicit */int) ((short) arr_0 [i_8] [i_9])))))));
                        arr_54 [i_14] [i_9] = ((/* implicit */int) ((unsigned short) var_9));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                    {
                        arr_58 [3U] [i_15] [(unsigned short)12] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)63342))));
                        var_35 = ((/* implicit */unsigned long long int) (short)23500);
                        arr_59 [i_8] [i_15] [i_12] = ((/* implicit */int) (((_Bool)0) && ((_Bool)0)));
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-(0LL))))));
                    }
                }
                for (unsigned char i_16 = 2; i_16 < 13; i_16 += 4) 
                {
                    arr_63 [i_16 - 1] [i_9] [6LL] = ((/* implicit */short) var_13);
                    var_37 = max((1023ULL), (((/* implicit */unsigned long long int) (short)-15519)));
                    arr_64 [i_8] = ((/* implicit */unsigned short) (+(((int) var_2))));
                    arr_65 [i_16] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_9] [(unsigned char)0] [i_9])) + (((/* implicit */int) arr_9 [i_8]))))) ? (((/* implicit */int) ((_Bool) arr_47 [2LL]))) : (((/* implicit */int) min(((_Bool)0), ((_Bool)0)))))) + (min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_60 [i_8] [i_9] [i_16 + 3] [3])) : (((/* implicit */int) arr_7 [i_8])))), (((/* implicit */int) arr_10 [i_16] [i_16] [i_16]))))));
                    arr_66 [i_8] [i_9] [i_16] [i_16] = ((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) 3665422640U))));
                }
                /* vectorizable */
                for (short i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    arr_69 [i_8] [i_8] [i_9] [i_17] = ((/* implicit */unsigned short) arr_13 [i_9] [i_17] [i_17] [i_9] [10ULL] [i_9]);
                    arr_70 [2U] = ((/* implicit */unsigned char) var_11);
                }
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned int) var_8)), (1092643703U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 14421216028613502746ULL))))))));
}
