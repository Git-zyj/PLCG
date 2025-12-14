/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83719
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
    var_16 = var_5;
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */long long int) arr_6 [i_2 - 1] [i_1]);
                        var_18 = arr_0 [i_0 - 1] [i_0];
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1])) | (((/* implicit */int) var_13))));
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        var_19 = var_2;
        arr_14 [i_4] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((arr_13 [i_4]), (((/* implicit */unsigned int) arr_11 [i_4]))))) ? (((/* implicit */long long int) (-(arr_13 [(unsigned char)1])))) : (var_2))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_6 = 2; i_6 < 20; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) (+(arr_12 [i_5] [(short)20])))) < (var_15))))));
                        arr_26 [i_6] [i_6 + 2] [i_6] [i_6] [i_5] [4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_6 + 2])) ? (((/* implicit */int) arr_16 [i_6 - 2])) : (arr_12 [i_6 - 1] [i_6 + 2])));
                        var_21 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_6] [i_5]))))));
                        arr_27 [i_6] = ((/* implicit */short) (unsigned char)65);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_16 [i_5])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_34 [i_9] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_9 + 2])) && (((/* implicit */_Bool) arr_16 [i_9 + 2]))))), (min((((/* implicit */int) arr_16 [i_9 - 1])), (arr_12 [i_9 + 2] [i_10])))));
                var_23 += ((/* implicit */unsigned int) arr_17 [i_9] [i_9] [i_9]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (short)-18844)))))));
    var_25 = ((/* implicit */signed char) var_13);
}
