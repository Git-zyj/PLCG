/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/927
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
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */short) min(((-((~(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) + (min((((/* implicit */unsigned long long int) arr_5 [i_0 - 3])), (((var_4) + (arr_1 [i_2])))))));
                    var_14 &= ((long long int) min((((/* implicit */unsigned long long int) max((arr_9 [i_0] [(short)9] [i_0] [i_2]), (((/* implicit */int) var_11))))), (((unsigned long long int) var_7))));
                    arr_12 [i_2] [i_0 + 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */int) var_5)) / (((/* implicit */int) var_0)))), ((-(arr_7 [i_0] [i_1 + 1] [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (min((var_2), (((/* implicit */long long int) var_6)))) : (var_13)))) : (var_7));
    var_16 = ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) | ((~(((/* implicit */int) var_1)))))) & (((/* implicit */int) var_1)));
    var_17 = ((/* implicit */short) var_7);
}
