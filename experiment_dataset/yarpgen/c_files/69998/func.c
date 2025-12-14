/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69998
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned char)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) * (var_2)));
                var_10 = ((/* implicit */unsigned char) var_0);
                arr_7 [i_0] [i_1] [(short)8] &= ((/* implicit */int) max(((-((~(var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_1 [4LL])))))));
                var_11 = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) 407258157))))) == (((/* implicit */int) (short)-7488)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2144503405)))))) < (((var_9) & (var_3)))))) : (((int) (signed char)127))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_8))));
}
