/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69466
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
    var_18 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(950962977)))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)15), (var_16)))))))));
                var_19 -= ((/* implicit */_Bool) max((arr_3 [i_0 - 1] [i_1]), (arr_3 [i_0] [i_1])));
                var_20 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
