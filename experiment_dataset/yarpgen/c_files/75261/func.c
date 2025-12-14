/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75261
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
    var_10 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((unsigned long long int) (+(min((arr_5 [i_0]), (((/* implicit */long long int) arr_4 [9LL] [5U] [i_0])))))));
                    var_12 = arr_5 [i_0];
                    arr_9 [i_0] [i_0] [i_2 + 1] = var_0;
                }
            } 
        } 
        arr_10 [i_0] = ((var_3) > (((/* implicit */long long int) ((int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) var_6);
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) 255U)) != (arr_12 [i_3 + 1])));
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                {
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 11U);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_4] [i_0] [i_6 + 3] = ((/* implicit */unsigned long long int) var_8);
                        arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0])) && (((/* implicit */_Bool) arr_16 [i_0]))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (var_6)));
                        arr_27 [i_6] [i_0] = ((/* implicit */unsigned int) 9223372036854775807LL);
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_1)) : (var_3)));
        var_16 = ((/* implicit */unsigned long long int) 133955584U);
    }
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (short)-29954);
        var_18 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_2 [(_Bool)0] [i_8]))))))), (max((var_6), (133955599U)))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5426))) | (min((9223372036854775808ULL), (((/* implicit */unsigned long long int) ((arr_29 [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
    }
}
