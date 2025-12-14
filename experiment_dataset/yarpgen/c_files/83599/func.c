/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83599
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
    var_20 ^= ((/* implicit */int) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - (var_13))))), (((/* implicit */unsigned long long int) var_12))));
    var_21 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) var_17)), (((((/* implicit */_Bool) var_9)) ? (4156199500U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                arr_6 [i_0 - 2] [i_0] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_5 [i_0 - 3] [i_0] [i_1]), ((unsigned char)101)))) + (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [(unsigned char)15]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (+(var_4)));
}
