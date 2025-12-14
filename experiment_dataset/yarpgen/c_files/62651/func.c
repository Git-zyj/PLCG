/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62651
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_2 + 1] [i_0 - 2])))) ? (((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (var_12))))));
                    var_21 = arr_0 [i_2];
                    var_22 = ((/* implicit */unsigned int) var_18);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-28599)) : (((/* implicit */int) (short)28598)))) & (((/* implicit */int) ((unsigned char) var_14))))))));
    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_18))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)28598))))) : ((~(-5302517433944182346LL))))))));
    var_25 = ((/* implicit */long long int) var_13);
}
