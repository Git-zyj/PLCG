/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7790
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (-((+(var_8)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-13)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) (signed char)69))))));
        var_13 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (var_7)))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_3 + 2])) + (((/* implicit */int) (short)6144))));
                    arr_14 [i_3] [i_2] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)31007)) >> (((((/* implicit */int) arr_6 [4U] [i_3 + 1])) + (22596)))));
                    var_16 += ((/* implicit */long long int) arr_12 [i_1] [i_2] [i_2]);
                    arr_15 [i_1] [i_3] [i_3 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_13 [i_1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 2])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_17 -= ((/* implicit */_Bool) arr_6 [i_4] [i_7]);
                            var_18 |= ((/* implicit */unsigned char) arr_1 [i_4 + 1] [i_4 - 2]);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */short) ((unsigned long long int) 2927014275U));
        }
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((arr_22 [i_1] [i_8] [i_1] [i_8]) ? (((/* implicit */int) arr_22 [i_1] [i_8] [i_1] [i_1])) : (((/* implicit */int) var_4))));
            var_21 = (_Bool)1;
            var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_8])) ? (((/* implicit */int) arr_6 [i_1] [i_8])) : (((/* implicit */int) arr_6 [i_1] [i_8]))));
            arr_29 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_6 [i_1] [i_8]);
        }
        for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                var_23 = 7647937743127562327ULL;
                var_24 = ((/* implicit */int) ((signed char) ((arr_22 [i_1] [i_9] [i_1] [i_9]) ? (((/* implicit */int) arr_23 [i_1] [i_9] [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_31 [i_9])))));
                arr_35 [i_10] &= ((/* implicit */signed char) ((arr_30 [i_10]) ? (arr_13 [i_10] [10U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1])))));
            }
            var_25 += ((/* implicit */unsigned int) var_4);
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) arr_26 [i_1] [i_12]);
                        var_27 = ((/* implicit */signed char) (+(arr_12 [i_1] [i_9] [i_9])));
                        arr_41 [i_1] [i_9] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((arr_38 [i_1] [i_9] [i_11] [i_12]) << (((arr_38 [i_1] [i_1] [(short)3] [i_1]) - (4103817632U)))));
                    }
                } 
            } 
            arr_42 [i_9] [i_9] = ((/* implicit */short) arr_26 [i_1] [i_9]);
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_9] [i_9])) ? (((/* implicit */int) (short)-6129)) : (((/* implicit */int) (signed char)-84))));
        }
        var_29 |= ((/* implicit */short) (unsigned char)199);
    }
    var_30 -= ((/* implicit */int) var_8);
    var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_7)));
}
