/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80431
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_20 = arr_1 [i_0 - 2] [i_0 - 2];
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25699)) ? (((/* implicit */int) (unsigned short)62060)) : (((/* implicit */int) (unsigned short)18421))))) ? (((((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])) & (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) (unsigned short)1920)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1 + 1]))) ? (((/* implicit */int) (unsigned short)43)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)62060)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)16599))))))));
        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)22331)) ? (((((/* implicit */int) (unsigned short)48197)) + (((/* implicit */int) (unsigned short)48928)))) : (((/* implicit */int) (unsigned short)48927))))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((-(((/* implicit */int) arr_7 [i_3] [i_2] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3 + 2] [i_4])))))));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_3]), (arr_1 [i_3] [i_3 + 2])))) || ((!(((/* implicit */_Bool) arr_7 [(unsigned short)8] [i_3 + 2] [i_4]))))));
                    arr_12 [i_2] [i_3] [i_3] [(unsigned short)3] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_8 [i_2] [i_2])), (((((/* implicit */int) arr_11 [i_3] [i_3])) * (((/* implicit */int) arr_0 [i_3 + 1]))))));
                    arr_13 [i_2] [i_2] [i_3] [i_2] = arr_3 [(unsigned short)11] [i_3 + 3];
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    arr_20 [(unsigned short)12] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62043)) ? (((/* implicit */int) (unsigned short)65533)) : ((+(((/* implicit */int) arr_11 [i_5 + 1] [i_5])))))))));
                    var_25 = (unsigned short)60359;
                    arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)6460)) + (((((/* implicit */_Bool) (unsigned short)59067)) ? (((/* implicit */int) arr_1 [i_2] [(unsigned short)21])) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5])))))) + (((/* implicit */int) arr_6 [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_28 [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_5 + 3] [i_5] [i_5] [i_7]))))) ? (((((/* implicit */int) (unsigned short)4639)) & (((/* implicit */int) (unsigned short)62022)))) : ((+(((/* implicit */int) arr_22 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_8]))))));
                                var_26 ^= ((unsigned short) (-(((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)6447))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) (unsigned short)62043)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5] [(unsigned short)8] [i_5] [(unsigned short)7] [i_5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_2] [(unsigned short)4])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)65521)))) & (((((/* implicit */int) (unsigned short)65529)) << (((((/* implicit */int) var_11)) - (52923)))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned short)59067)) : (((/* implicit */int) (unsigned short)10191)))))) : (((/* implicit */int) ((unsigned short) arr_7 [(unsigned short)0] [i_2] [i_2])))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 4; i_9 < 11; i_9 += 2) 
        {
            arr_31 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_9] [i_2])) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) (unsigned short)65530))))))));
            arr_32 [i_2] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2])) != (((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) arr_8 [i_2] [i_9 - 1])) : (((/* implicit */int) (unsigned short)3492))))));
        }
        arr_33 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) max(((unsigned short)6654), (min(((unsigned short)65533), ((unsigned short)60517)))))), (min((((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) (unsigned short)25677)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)55493))))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_2))))));
        var_30 = ((/* implicit */unsigned short) max((var_30), ((unsigned short)18974)));
    }
    var_31 = var_3;
}
