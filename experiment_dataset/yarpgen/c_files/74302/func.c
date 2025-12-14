/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74302
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3 - 2] [i_0] [i_3 - 3] [i_0] = ((/* implicit */signed char) arr_6 [18ULL]);
                                var_20 = ((/* implicit */short) arr_2 [i_0]);
                                arr_16 [i_0] [i_1] [i_2] [11ULL] [i_4] = ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_22 [i_6] [i_5] [i_2] [i_1 + 2] [i_0] [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */int) arr_20 [i_5] [i_1] [i_1] [i_1]);
                                arr_23 [i_0] [(signed char)7] [i_0] [(signed char)7] [20ULL] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2] [i_2]))));
                                var_22 |= ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_5]);
                                var_23 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) var_0);
                        var_25 = ((/* implicit */unsigned short) arr_1 [i_7 + 1] [i_1 + 1]);
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        arr_31 [(signed char)6] [(unsigned short)12] [i_2] [i_2] [(unsigned short)12] = ((/* implicit */unsigned short) arr_24 [i_0] [i_1] [5ULL] [18]);
                    }
                    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        arr_34 [i_9] = ((/* implicit */int) arr_5 [i_9] [i_0] [i_0] [i_0]);
                        var_27 = ((/* implicit */long long int) arr_20 [(signed char)2] [18U] [i_2] [i_2]);
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_8))));
                    }
                    for (signed char i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0]))));
                        arr_37 [i_0] [i_1 + 1] [18U] [i_10 + 1] [17ULL] [18U] = ((/* implicit */signed char) var_9);
                        var_30 = arr_17 [7] [(unsigned short)1] [i_2] [i_10] [i_1 - 1];
                        arr_38 [i_0] [i_2] = ((/* implicit */int) arr_27 [i_0] [i_10] [i_2] [i_10] [i_2] [i_10 - 1]);
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) var_18);
    var_32 = ((/* implicit */unsigned short) (~(var_13)));
}
