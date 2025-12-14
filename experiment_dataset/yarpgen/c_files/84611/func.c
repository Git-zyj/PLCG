/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84611
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((2674807758U) ^ (2294786466U)))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_7))));
                    arr_8 [i_0] [i_0] = max((1217928072U), (3077039211U));
                }
            } 
        } 
        var_17 &= min((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1]));
        var_18 = ((1217928072U) ^ (4294967292U));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((1217928068U) + (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_5) > (3077039224U))))))));
        arr_11 [(_Bool)1] &= var_13;
        arr_12 [(_Bool)1] [(_Bool)1] &= 4294967295U;
    }
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_12)), ((~(16ULL)))));
}
