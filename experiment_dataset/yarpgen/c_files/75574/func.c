/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75574
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        arr_9 [i_2] [(short)9] [i_2] [i_3] = ((/* implicit */short) (+(arr_8 [i_0] [i_1] [i_0] [i_3 + 2] [10LL])));
                        var_11 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 2]))));
                        arr_10 [i_0] [i_2] [(unsigned char)2] [i_3 + 1] [i_0] [i_2] = ((/* implicit */unsigned int) (unsigned char)241);
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (signed char)-92))) ? (((((/* implicit */_Bool) arr_4 [i_0] [3ULL])) ? (728507636U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 2] [i_2] [11LL] [i_4])) ? (arr_13 [i_4 - 1] [i_4 - 2] [i_2] [i_4] [i_1]) : (arr_13 [i_4] [i_4 - 2] [i_2] [i_4] [7])));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [2U] [i_4 + 1])))))));
                    }
                    arr_15 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)92)) ? (2536270392U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))) >> (((((((/* implicit */_Bool) (signed char)7)) ? (min((((/* implicit */long long int) var_1)), (arr_8 [i_2] [(short)2] [i_0] [5U] [(short)14]))) : (((/* implicit */long long int) (-(1758696902U)))))) - (52356LL)))));
                    var_14 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned char) var_2))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)5] [i_1] [i_2])))))) & (var_3)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_20 [i_5] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) 1758696924U);
                                var_17 -= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) arr_22 [0U] [(unsigned char)2] [i_7 - 1] [(unsigned char)2] [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (unsigned char)249);
    var_19 = ((/* implicit */long long int) var_7);
}
