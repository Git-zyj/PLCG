/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67049
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    var_15 = (+((+(((/* implicit */int) arr_5 [i_2 + 1] [i_2])))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) (signed char)8);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) arr_3 [i_0] [i_4]);
                            var_18 ^= -1163296523;
                            var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 68711088128LL)) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (short)511)))) : (arr_7 [i_0] [i_2 + 1] [(short)5])));
                            var_20 = ((/* implicit */int) ((unsigned long long int) var_0));
                            arr_13 [i_0] [i_1] [i_2 - 2] [i_1] [(signed char)7] = ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_2 + 3] [i_0]) == (arr_12 [i_2 + 2] [(signed char)11] [i_2 + 3])));
                        }
                        var_21 = (signed char)79;
                        var_22 &= ((/* implicit */signed char) 1163296547);
                        arr_14 [0ULL] [0ULL] [0ULL] [i_3] = min((((((489797651) <= (1163296546))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) (-(-2022227244)))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) - (18446744073709551613ULL))), (((/* implicit */unsigned long long int) max((-1758441482121940096LL), (((/* implicit */long long int) 489797648))))))));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        var_23 *= ((/* implicit */short) (-(8079858792890274350ULL)));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_3 [i_1] [i_2 + 2]))));
                        arr_17 [i_0] [7LL] |= ((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 3] [i_5] [i_0]);
                    }
                }
                var_25 = ((/* implicit */short) max((((/* implicit */int) ((((13ULL) + (((/* implicit */unsigned long long int) 489797666)))) < ((+(1113419593764035406ULL)))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_0] [i_0])) ? (1380703250) : (-489797665)))));
                /* LoopSeq 1 */
                for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (int i_8 = 3; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((18446744073709551615ULL) > (((((/* implicit */_Bool) -780530114)) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (27ULL))))))));
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1380703240)))) <= (((((/* implicit */_Bool) (signed char)-74)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) arr_25 [i_0] [i_1] [i_1]);
                }
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 17; i_11 += 2) 
                        {
                            {
                                var_29 = ((int) (signed char)81);
                                var_30 &= arr_21 [i_10] [i_9] [i_1] [i_0];
                                arr_37 [i_0] [i_11] [i_9] [13] [i_9] |= ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) -1LL)), (arr_31 [17] [17] [17])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (long long int i_13 = 1; i_13 < 15; i_13 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 18; i_14 += 3) 
                            {
                                arr_45 [i_0] [13] [i_1] [i_12] [13] [i_14] = (+(arr_21 [i_0] [i_1] [i_13 - 1] [i_1]));
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((int) -1163296502)))));
                            }
                            for (int i_15 = 0; i_15 < 18; i_15 += 4) 
                            {
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-(((/* implicit */int) max(((short)15292), (((/* implicit */short) (!(((/* implicit */_Bool) 1380703231)))))))))))));
                                arr_48 [i_15] [i_13] [i_12] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_32 [3ULL] [i_1] [3ULL] [i_13]);
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (+(min((1550840576), (-632671389))))))));
                                arr_49 [(short)7] [i_0] [i_1] [i_12] [i_13 + 3] [15ULL] [i_0] = arr_0 [i_0];
                                arr_50 [i_0] &= max(((~(1163296487))), (((((/* implicit */_Bool) arr_40 [i_0] [i_13 + 3] [i_12] [i_0] [i_15])) ? (((/* implicit */int) ((1163296551) <= (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_46 [i_0] [12ULL] [i_12] [6ULL])))));
                            }
                            for (int i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
                            {
                                var_34 = ((/* implicit */long long int) ((unsigned long long int) min((arr_26 [i_13 + 3] [i_13 + 1] [i_13 - 1] [i_1] [i_1]), ((+(arr_26 [4] [i_1] [11] [4] [i_16]))))));
                                arr_53 [i_0] [i_0] [i_1] [17] [i_13] [9] = ((/* implicit */unsigned long long int) (+(min((arr_7 [i_13 + 1] [i_13 - 1] [i_13 + 1]), (arr_7 [i_13 + 2] [i_13 + 2] [i_13 + 1])))));
                                var_35 = ((/* implicit */unsigned long long int) var_11);
                                arr_54 [i_0] [i_1] [i_1] [i_13 + 3] [i_16] = ((/* implicit */int) ((23ULL) == (10366885280819277277ULL)));
                            }
                            for (int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                            {
                                arr_59 [(signed char)6] [i_1] [i_12] [i_13] [i_13] [i_17] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)65)))))))));
                                arr_60 [i_0] [i_0] [i_12] [i_13] [i_0] [i_17] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12] [i_13 + 3] [i_13] [i_13 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_1] [(signed char)14] [i_13] [i_17]))))) : (((((/* implicit */_Bool) -1163296514)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)-76))))))) ? ((+(min((arr_24 [i_12] [14ULL] [12] [12] [12] [i_1]), (10803814740594667012ULL))))) : (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) ((var_14) == (((/* implicit */int) var_9))))))))));
                                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) 1163296509))));
                            }
                            var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_52 [i_12] [i_12] [i_13 + 1] [i_12])), (962160121)))) ? (max((arr_2 [i_13 + 1]), ((~(1073741696))))) : (((/* implicit */int) arr_57 [10LL] [i_1] [i_12] [i_12] [i_13]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 15; i_18 += 4) 
    {
        for (short i_19 = 3; i_19 < 14; i_19 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 15; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        {
                            var_38 &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_19 + 1])) / (((1050681686) - (1163296528)))))) ? (((/* implicit */unsigned long long int) ((int) (signed char)-88))) : (max((((arr_43 [i_18] [i_18] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1]) - (2ULL))), (((/* implicit */unsigned long long int) var_5)))));
                            var_39 = ((/* implicit */int) (+(((((/* implicit */_Bool) -389651973448841711LL)) ? (((((/* implicit */_Bool) -357215)) ? (((/* implicit */unsigned long long int) 1008)) : (6357125737764591850ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_20] [i_19] [i_20] [i_20] [(signed char)6]))))))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */signed char) -962160115);
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */int) var_10)) : (((-681826815) - (-1163296508)))))) ? (max((max((((/* implicit */int) var_9)), (var_1))), (1163296506))) : ((+(min((2), (((/* implicit */int) var_10)))))))))));
}
