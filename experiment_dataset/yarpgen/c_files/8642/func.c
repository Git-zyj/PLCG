/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8642
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
    var_17 = ((/* implicit */int) var_2);
    var_18 = ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1])) >> (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) % (arr_4 [i_0] [i_0] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))))))));
                    arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) / (arr_7 [(short)9] [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_2] [(signed char)6] [i_4])) || (((/* implicit */_Bool) arr_2 [i_0] [9LL]))))) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >= (((/* implicit */int) arr_15 [(short)6] [(short)6]))))))) & (((/* implicit */int) arr_1 [10LL]))));
                                var_21 = arr_13 [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        var_22 = arr_14 [i_0] [i_0] [i_1] [i_2] [(signed char)12];
                        arr_19 [i_5] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_7 [(unsigned char)0] [i_0] [i_5]);
                        var_23 = ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5] [i_5]);
                    }
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */int) ((((arr_12 [5] [5] [i_1] [i_2] [i_0] [i_6]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_2 [i_1] [i_0])) + (21695)))));
                        var_25 = ((/* implicit */short) arr_8 [i_2]);
                    }
                    var_26 = ((/* implicit */short) ((arr_22 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]))));
                }
            } 
        } 
    } 
}
