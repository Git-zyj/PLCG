/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99814
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(short)10] [(short)10] = min((((((((/* implicit */_Bool) 6U)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) | ((~(var_14))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))));
                var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1]))))), (min((((/* implicit */unsigned int) var_2)), (6U))))), (min((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((((+(var_14))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
