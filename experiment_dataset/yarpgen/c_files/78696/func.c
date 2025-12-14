/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78696
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 = ((arr_1 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = (~(var_10));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_21 = ((/* implicit */_Bool) var_13);
            var_22 = ((/* implicit */_Bool) var_7);
            var_23 = ((int) var_13);
            var_24 = ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))) >> ((((-(((/* implicit */int) var_6)))) + (190))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_3] [i_4] [i_4] [i_4 + 1])) ^ (arr_11 [i_4] [i_4] [i_4] [i_4 + 1])));
                    arr_15 [i_2] [i_2] = ((/* implicit */int) arr_13 [i_2] [i_3] [i_4 + 1] [i_4 - 3]);
                }
            } 
        } 
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_2])))) : ((-(var_19)))));
        arr_17 [i_2] = ((/* implicit */unsigned char) var_5);
    }
    var_26 = ((/* implicit */unsigned char) var_11);
}
