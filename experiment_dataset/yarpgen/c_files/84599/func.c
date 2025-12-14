/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84599
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
    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((signed char)100), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)94)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))))))))))));
                var_12 -= ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_0)), (((var_4) * (var_7)))));
    var_14 -= ((/* implicit */unsigned int) ((signed char) (signed char)-95));
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)30210)) || (((/* implicit */_Bool) var_2))))))));
}
