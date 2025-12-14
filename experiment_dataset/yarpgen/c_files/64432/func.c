/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64432
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
    var_13 = 0U;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max((var_14), (max((((unsigned int) ((unsigned int) arr_7 [i_1]))), ((+(max((0U), (arr_0 [i_1])))))))));
                            arr_12 [i_0] = max(((-(4U))), (max((min((3U), (4294967292U))), (max((arr_7 [i_0]), (var_5))))));
                            var_15 = ((((/* implicit */_Bool) (((+(2303020334U))) | (((unsigned int) 4294967273U))))) ? (min((var_10), (((((/* implicit */_Bool) 4294967295U)) ? (var_1) : (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3933701283U) > (3933701283U))))));
                        }
                    } 
                } 
                arr_13 [i_0] [11U] = ((var_5) - ((+(arr_6 [i_1 + 1] [i_1 + 1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned int i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_16 = max((4294967295U), (26U));
                            var_17 = (-((-(arr_9 [i_0] [i_0] [i_0] [i_5 - 2] [i_1] [i_0]))));
                        }
                    } 
                } 
                var_18 += ((((((/* implicit */_Bool) (-(231841636U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1])))))) : (((var_1) % (arr_14 [i_0] [i_0] [i_1 + 1] [i_1 + 1]))))) * (min((var_8), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6])) ? (4294967292U) : (var_10))) >> (((/* implicit */int) ((5U) > ((-(var_3))))))))));
        var_20 = ((arr_18 [i_6] [i_6]) | ((+(((arr_14 [i_6] [i_6] [i_6] [i_6]) % (var_7))))));
        var_21 *= arr_9 [i_6] [i_6] [i_6] [i_6] [6U] [i_6];
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        arr_30 [i_7] = ((unsigned int) ((((arr_23 [i_7] [i_7] [i_9]) << (((var_1) - (1969526732U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 268435455U)) && (((/* implicit */_Bool) var_11))))))));
                        var_22 *= ((unsigned int) (-(arr_28 [3U] [i_8 - 2] [3U] [i_8 + 1] [i_8] [i_8 - 2])));
                        var_23 = var_6;
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            arr_34 [i_7] [i_8 - 2] [i_9] [i_10] [i_11] [i_11] = (~(((3933701283U) << (((var_0) - (357574697U))))));
                            arr_35 [i_8 + 1] [i_8 + 1] [3U] = ((5U) / (((var_11) - (var_5))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (arr_3 [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        }
                    }
                } 
            } 
            var_25 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 23U)) ? (1073741696U) : (361266019U)))) && (((/* implicit */_Bool) var_7))))), ((((-(arr_19 [i_7] [i_8]))) - (max((1972917031U), (arr_7 [i_7]))))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 1; i_12 < 10; i_12 += 2) 
        {
            arr_38 [i_7] [i_12] = arr_6 [4U] [i_7] [i_12];
            var_26 = ((((/* implicit */_Bool) 3343866468U)) ? (((unsigned int) 972722476U)) : (4294967289U));
        }
        arr_39 [i_7] [i_7] = arr_31 [i_7] [i_7] [i_7] [i_7];
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_13 = 4; i_13 < 8; i_13 += 4) /* same iter space */
        {
            var_27 ^= ((var_8) << (((arr_27 [6U] [6U] [6U] [i_7]) - (2476707116U))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                for (unsigned int i_15 = 2; i_15 < 9; i_15 += 2) 
                {
                    {
                        var_28 = (-(arr_46 [i_13 + 2] [i_14] [i_13 + 3] [i_13]));
                        var_29 += var_7;
                        arr_48 [i_7] [0U] = (+(var_5));
                        var_30 = ((((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_13] [i_13] [i_15] [10U] [i_15 - 2])) ? (arr_46 [i_15] [i_15 + 2] [i_15] [i_15]) : (arr_32 [i_7] [5U] [i_7] [i_14] [9U] [i_15 - 1] [i_15 + 1]));
                        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 2; i_17 < 10; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) min((var_32), (arr_25 [i_13 - 2] [i_17 + 1] [i_17])));
                            var_33 ^= ((/* implicit */unsigned int) ((2146435072U) >= (4294967295U)));
                            arr_56 [i_7] [i_7] [i_7] [5U] [i_7] [i_18] = 4063125659U;
                            var_34 *= var_11;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    for (unsigned int i_20 = 3; i_20 < 10; i_20 += 2) 
                    {
                        {
                            arr_62 [i_7] [i_13 + 3] [i_16] [i_19] [i_19] = ((/* implicit */unsigned int) ((8388607U) > (var_5)));
                            var_35 *= ((((arr_8 [i_7] [i_20]) >> (((var_4) - (2217751603U))))) << (((((var_7) << (((4294967294U) - (4294967272U))))) - (4248829951U))));
                            var_36 -= 4294967295U;
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
            }
            for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((4286578670U) <= (var_6))))));
                var_39 = (~(2769814505U));
                arr_66 [i_13] [i_21] [i_13] [8U] = ((((/* implicit */_Bool) var_5)) ? (var_7) : (arr_10 [i_13 - 4] [i_21] [i_21] [i_21] [i_21]));
                /* LoopSeq 2 */
                for (unsigned int i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    arr_71 [i_21] [i_13] [6U] [i_7] [i_21] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8388626U)) ? (4294967267U) : (2628959733U))))));
                    arr_72 [i_21] = 1330642820U;
                    var_40 = (-(((unsigned int) 2088483172U)));
                }
                for (unsigned int i_23 = 0; i_23 < 11; i_23 += 2) 
                {
                    arr_77 [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                    arr_78 [i_21] [i_13] [i_21] [i_23] = ((4294967295U) >> (((var_6) - (1532378998U))));
                    arr_79 [i_13] [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294950912U))));
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_24 = 4; i_24 < 8; i_24 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((var_2) <= (3847902224U))))));
            var_42 |= ((1696759147U) * (var_2));
        }
    }
}
