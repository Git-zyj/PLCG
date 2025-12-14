/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76586
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (-((((!(var_4))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)255))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_2 [i_2]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(var_1)))) ? ((~(var_11))) : (((/* implicit */long long int) min((268431360), (268431361))))))));
    var_14 = ((/* implicit */int) min(((~(max((var_11), (var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)19))))) ? (((/* implicit */int) max((var_4), (var_2)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (268431360))))))));
    var_15 = ((/* implicit */int) (((-(((long long int) var_2)))) & (((/* implicit */long long int) (+((+(var_8))))))));
}
