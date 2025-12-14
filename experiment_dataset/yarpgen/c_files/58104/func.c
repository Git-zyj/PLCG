/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58104
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
    var_10 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_1] [(unsigned short)4] [i_1 - 1])) * (((/* implicit */int) arr_5 [i_2] [i_0 + 1])))) / ((+(((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_1 + 1])))))))));
                    arr_10 [i_0 + 2] [i_1] = ((/* implicit */unsigned char) (-(((unsigned long long int) min((var_8), (var_0))))));
                    var_12 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0] [i_1])) : (((/* implicit */int) var_9)))));
                    var_13 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 3550122673U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0 - 1] [i_2])))) : ((~(var_3)))));
                }
            } 
        } 
    } 
}
