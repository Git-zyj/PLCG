/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8932
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0 + 1] = ((/* implicit */unsigned char) ((signed char) arr_4 [i_0 + 1]));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
            arr_7 [i_1] [i_0] = (+(var_6));
            arr_8 [i_1] = ((/* implicit */int) arr_1 [i_0]);
        }
        for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                arr_14 [i_3] [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0 + 1]);
                /* LoopSeq 3 */
                for (unsigned int i_4 = 2; i_4 < 21; i_4 += 2) 
                {
                    var_10 = ((/* implicit */short) (+((-(((/* implicit */int) var_1))))));
                    arr_18 [i_0] [i_3] = ((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3] [i_4]);
                    var_11 = ((/* implicit */unsigned int) arr_16 [i_2] [i_2] [i_2] [i_2]);
                }
                for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)));
                    var_12 = ((unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) << (((var_2) - (1430000088U)))));
                }
                for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    arr_25 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (arr_3 [i_2]) : (var_9)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_17 [i_2 + 1] [i_2] [(unsigned short)3] [i_2 - 3] [i_2 - 1] [i_2 - 3]))));
                    arr_26 [i_6] [(unsigned short)8] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_3] [i_2 - 1]))) < (var_3)));
                    arr_27 [i_6] [i_6] [i_3] = arr_2 [i_0 - 1];
                    arr_28 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0 + 2] [i_3] [i_6] [i_2] [i_2 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [(signed char)17] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))))) : (((unsigned int) arr_23 [i_3] [i_2] [i_3] [(short)2]))));
                    arr_29 [i_6] [i_6] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) arr_10 [i_0]);
                }
                /* LoopSeq 2 */
                for (unsigned short i_7 = 3; i_7 < 18; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_13 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [13] [i_0] [i_3] [13] [i_8])) ? (((/* implicit */int) arr_17 [i_0 + 2] [i_2 - 2] [i_3] [i_7 + 3] [i_8] [i_0])) : (((/* implicit */int) (unsigned char)35)))));
                        var_14 = ((/* implicit */int) arr_17 [20] [i_2] [i_2] [(signed char)12] [i_8] [i_3]);
                    }
                    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) 3978168599U);
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_0] [i_2 - 3] [i_3] [i_7] [i_9 + 2]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        arr_42 [i_0] [i_2] [i_3] [i_10] [i_10] = ((/* implicit */signed char) arr_23 [i_2 - 1] [i_0 + 1] [i_2 - 1] [i_7]);
                        arr_43 [i_0] [i_2] [17] [i_7 - 2] [i_10] = ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_0 + 2] [i_0 + 2]));
                        arr_44 [i_10] [(unsigned short)19] [i_3] [i_7] [i_10] [i_2] [i_10] = arr_23 [i_10] [i_0] [i_2 - 2] [i_0];
                    }
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(arr_12 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 + 1]))))));
                }
                for (unsigned int i_11 = 2; i_11 < 18; i_11 += 3) 
                {
                    arr_48 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((int) arr_19 [i_0 + 2] [i_2 - 2] [i_11 + 4]));
                    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_6)) : (var_3)))));
                }
            }
            arr_49 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)168)) & (((/* implicit */int) (unsigned char)205))));
        }
        arr_50 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (min((var_3), (((/* implicit */unsigned int) var_1))))));
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (short)-25611);
        arr_54 [i_12] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(var_0)))), (((((/* implicit */_Bool) arr_52 [i_12])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_51 [i_12])), (var_2)))) : ((+(arr_53 [i_12] [i_12])))))));
    }
}
