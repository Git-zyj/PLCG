/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67940
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_2])) : (((/* implicit */int) (signed char)-119))))) ? ((~(((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) (signed char)-92)))) & (((/* implicit */int) min((var_15), (var_2))))));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((signed char) ((((/* implicit */int) arr_0 [i_0 + 2])) <= (((/* implicit */int) arr_0 [i_0 + 2]))));
                }
            } 
        } 
    } 
    var_19 = var_10;
}
