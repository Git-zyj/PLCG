/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9500
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) var_9);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0] [i_1 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) 1994721911580927727ULL);
                                var_13 = ((/* implicit */signed char) ((((/* implicit */int) (!(arr_4 [i_0] [i_0])))) | (((/* implicit */int) var_3))));
                                arr_15 [i_0] [11U] [i_0] [i_2] [i_0] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (((unsigned long long int) 16452022162128623893ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_14 -= ((/* implicit */unsigned int) (+((~(698664596)))));
                                var_15 |= ((/* implicit */signed char) (-(var_2)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (int i_8 = 4; i_8 < 21; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1 - 1] [i_2] [i_2] [i_8 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1074))))) | (((unsigned long long int) var_1))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+((~(var_2))))))));
                            }
                        } 
                    } 
                    arr_29 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (arr_10 [i_2] [i_1 + 3] [i_1 + 2])));
                }
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_33 [i_0] [(short)3] [i_9] [i_0] = ((/* implicit */unsigned int) ((short) (((_Bool)1) ? (arr_20 [i_0] [i_1 + 4] [i_9] [i_9] [i_1]) : (((/* implicit */int) var_6)))));
                    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(arr_26 [i_9] [i_9] [i_9] [i_9] [i_1] [i_0])))) : (((arr_26 [i_0] [i_0] [i_0] [i_9] [20U] [i_0]) ? (arr_18 [i_0] [i_1 - 1] [i_9]) : (arr_18 [i_0] [i_1 - 1] [i_1 - 1])))));
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) var_6);
                                var_19 = ((/* implicit */_Bool) ((arr_4 [i_1 + 3] [i_1 + 1]) ? (((/* implicit */int) var_9)) : (var_7)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_20 = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 - 1] [i_1 + 2] [i_1 + 4] [i_1 + 2] [(_Bool)1] [i_1] [i_10]))) : (var_1)));
                        arr_46 [i_0] [i_1] [i_10] [i_10] [i_13] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_1 + 3] [i_1 + 2] [i_0])) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_7)) : (arr_8 [i_0] [i_0] [i_10])))));
                        arr_47 [i_10] [i_10] = ((arr_40 [i_0] [i_1] [i_1 - 1] [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_40 [i_0] [i_1 + 3] [i_1 + 4] [i_0] [16ULL])) : (((/* implicit */int) arr_40 [i_1] [i_1] [i_1 + 3] [i_13] [(short)18])));
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */_Bool) (~(522598959978107877ULL)));
                                arr_55 [(signed char)12] [i_0] [i_14] [i_15] [i_16] [i_15] = ((/* implicit */short) arr_25 [i_15] [i_15] [i_15] [i_15] [i_15]);
                                arr_56 [i_16] [i_1 + 3] [i_1 + 3] [i_15] [i_15] [i_15] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_1 + 4] [i_14] [i_15] [(signed char)19] [i_16] [i_16] [i_14]))) | (arr_21 [i_1 - 1] [i_1] [(_Bool)1] [i_15] [i_16]))) | (((arr_21 [i_1 + 3] [19] [i_14] [i_15] [i_16]) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                } 
                arr_57 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1074)) ? (arr_45 [i_1 + 2] [i_1 + 2] [4ULL] [6ULL]) : (arr_45 [i_1 + 1] [i_1 + 3] [(_Bool)1] [i_1 + 3])))) ? (arr_36 [i_0] [i_0] [(_Bool)1]) : (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4635))) : (var_4))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_5)), (min((arr_0 [i_0] [i_0]), (((/* implicit */signed char) arr_50 [i_0] [i_1 + 1] [i_1 + 1] [i_0]))))))) ? (((((arr_9 [i_0] [i_1] [i_1] [i_1]) ? (10391534729223266307ULL) : (13671916861261191491ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-12140), (((/* implicit */short) arr_52 [i_0] [i_1] [i_1] [i_1])))))))) : (((((unsigned long long int) 1304430774)) | (((/* implicit */unsigned long long int) max((arr_31 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */int) (signed char)-87)))))))));
            }
        } 
    } 
    var_23 = var_7;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_58 [i_17])))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 1718067252U))));
    }
    for (short i_18 = 2; i_18 < 20; i_18 += 1) 
    {
        arr_63 [i_18] [i_18] = ((/* implicit */unsigned int) arr_11 [i_18] [i_18 - 1]);
        arr_64 [i_18] = (!(max((arr_4 [i_18 + 1] [i_18 - 1]), (arr_19 [i_18] [i_18] [i_18 + 1] [(_Bool)1] [i_18] [i_18 - 1] [i_18 + 2]))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 1740056548))));
        arr_65 [i_18] [i_18] = ((/* implicit */signed char) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((int) ((1393603084) * (((/* implicit */int) arr_25 [i_18] [i_20] [3U] [3U] [i_18])))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_74 [i_18] [i_18] [i_20] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (3911445531U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_18] [10U] [i_20] [(_Bool)1] [i_21] [i_19] [i_20]))))))))) ? (((((_Bool) arr_52 [i_18] [i_19] [i_20] [i_21])) ? (((/* implicit */int) arr_14 [i_18] [i_18 + 2] [i_18 + 1] [i_18 - 1] [i_18])) : (((/* implicit */int) ((_Bool) var_3))))) : (((/* implicit */int) ((_Bool) (((_Bool)1) ? (arr_45 [i_18 - 1] [(_Bool)1] [i_18] [i_21]) : (((/* implicit */int) var_3))))))));
                        arr_75 [i_18] [i_18] [i_20] [i_21] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_61 [i_18]) || (arr_61 [i_18]))));
                        var_28 &= ((/* implicit */_Bool) arr_36 [i_18] [i_18 - 1] [i_19]);
                    }
                    var_29 = ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_68 [i_18 + 1] [i_18 - 2] [i_18 + 1])) : (((int) var_3))))) ? (((/* implicit */int) ((arr_68 [i_18 - 2] [i_19] [i_20]) || (arr_68 [i_18 - 2] [i_19] [i_18])))) : ((~(((/* implicit */int) var_3)))));
                    arr_76 [i_18] [i_18] [i_20] [i_18] = max((arr_21 [i_20] [i_20] [i_20] [i_18] [9]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1393603084))))));
                    /* LoopNest 2 */
                    for (short i_22 = 1; i_22 < 19; i_22 += 2) 
                    {
                        for (int i_23 = 0; i_23 < 22; i_23 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_18] [i_18 + 1] [i_19] [i_22 + 2] [i_19])))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_53 [i_18 + 1] [i_18 + 1] [i_20] [i_22 + 1] [9])) : (var_7))) : (((((/* implicit */int) arr_53 [(short)8] [i_18 + 1] [i_19] [i_22 + 2] [i_22 + 3])) - (((/* implicit */int) arr_53 [i_18] [i_18 + 1] [i_20] [i_22 + 2] [i_23]))))));
                                var_31 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_62 [i_18])))), (((/* implicit */int) ((arr_40 [i_22 + 2] [i_18] [i_18 - 1] [i_23] [i_23]) || (((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_8))));
                                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(arr_69 [i_19] [i_19])))) | (min((((/* implicit */unsigned int) (~(-1711588145)))), (2418005467U)))));
                                arr_83 [i_18] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_31 [i_18] [i_19] [i_20] [i_18]), (215234574)))) ? (((int) arr_14 [5U] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 1])) : ((~(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_24 = 0; i_24 < 20; i_24 += 3) 
    {
        arr_87 [10ULL] [i_24] |= ((/* implicit */unsigned int) var_3);
        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_6))))) ? (arr_7 [i_24] [i_24] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_24] [i_24] [i_24] [i_24] [(short)16] [i_24] [i_24])))));
    }
}
