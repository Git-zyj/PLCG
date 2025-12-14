/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75041
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
    var_11 = var_3;
    var_12 -= ((unsigned int) ((unsigned int) 0U));
    var_13 = ((unsigned int) (~(var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = 2964054749U;
        var_14 += ((2110872401U) + ((~(arr_0 [17U] [i_0]))));
        arr_3 [i_0] [i_0] = (((!(((/* implicit */_Bool) 2690066997U)))) ? (2230201300U) : (1763633884U));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_15 = 1076425852U;
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_10 [6U] [i_0] [i_0] &= (+(arr_0 [i_0] [16U]));
                arr_11 [i_0] [19U] [i_0] [8U] = ((unsigned int) arr_1 [i_1]);
            }
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_16 += ((arr_9 [i_0] [i_3] [i_5]) & (arr_4 [i_4]));
                            var_17 = arr_20 [i_5] [i_5] [i_4] [i_3] [i_1] [i_0];
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((var_18), ((-(((((/* implicit */_Bool) var_9)) ? (1763633884U) : (var_2)))))));
            }
            arr_21 [i_0] = arr_8 [i_1] [i_1] [i_1] [14U];
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    {
                        var_19 = arr_14 [i_0] [i_0] [i_0];
                        var_20 = arr_12 [i_6] [i_6] [i_1] [i_0];
                        var_21 ^= (-((-(arr_16 [i_0] [i_0] [7U] [i_0]))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        arr_31 [i_8] = ((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? ((-(arr_25 [15U] [15U] [i_8] [i_8]))) : (var_3));
        arr_32 [i_8] = max((((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (max((arr_8 [i_8] [i_8] [i_8] [i_8]), (4294967295U))) : (((((/* implicit */_Bool) var_4)) ? (65535U) : (4294967295U))))), (((max((arr_8 [i_8] [12U] [i_8] [i_8]), (var_1))) ^ (2133665105U))));
        arr_33 [i_8] = (((!(((/* implicit */_Bool) 0U)))) ? (min((18U), (4294967295U))) : (((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [4U]) : (var_2))));
        var_22 -= arr_1 [i_8];
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                {
                    var_23 += var_3;
                    arr_39 [i_10] = max(((+(4294967286U))), (((unsigned int) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        arr_42 [i_11] = var_8;
        arr_43 [i_11] = ((unsigned int) ((unsigned int) 2676107432U));
        var_24 = arr_17 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11];
    }
    var_25 = var_6;
}
