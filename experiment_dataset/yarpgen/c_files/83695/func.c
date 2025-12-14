/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83695
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 2]);
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_2 [i_0])))))) : (max((var_5), (((/* implicit */long long int) arr_1 [i_0 + 1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */int) (unsigned char)99)) & (((/* implicit */int) (unsigned short)6)))) : (((((/* implicit */int) arr_4 [i_0] [i_0])) / (arr_3 [i_0] [i_1 - 2]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_1);
    var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240))))) % (((((((/* implicit */int) (signed char)28)) - (((/* implicit */int) (unsigned char)240)))) + (((/* implicit */int) var_2))))));
    var_18 = ((/* implicit */_Bool) var_13);
    var_19 = ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_10))) + (((int) var_14))))) % (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((((var_14) + (2147483647))) << (((((/* implicit */int) var_1)) - (102)))))))));
}
