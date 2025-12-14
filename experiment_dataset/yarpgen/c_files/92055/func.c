/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92055
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
    var_10 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (291893268626851767LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
    var_11 = ((/* implicit */long long int) (unsigned char)222);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2 + 2] [(short)3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2 - 1] [i_2]))))));
                    var_12 &= ((/* implicit */signed char) ((var_3) >> (((((((/* implicit */_Bool) 1332088175U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))) : (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) - (160U)))));
                }
            } 
        } 
    } 
}
