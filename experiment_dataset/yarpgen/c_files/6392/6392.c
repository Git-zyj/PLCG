/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(51570, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 166));
                var_17 = (min((arr_1 [i_0]), var_4));
                var_18 += ((-((+(((arr_2 [2] [i_1]) * (arr_2 [0] [0])))))));
                arr_5 [i_0] = (arr_2 [i_0] [i_1]);
                arr_6 [i_0] [i_1] = (((((~((-21 ? var_13 : (arr_2 [i_0] [i_1])))))) ? ((var_2 ? (~13966) : (arr_2 [i_0] [i_1]))) : (min((max(var_5, var_6)), ((max((arr_3 [i_0] [i_1]), 53322)))))));
            }
        }
    }
    var_19 = (!var_3);
    var_20 = (((var_5 != var_10) + (var_2 || var_12)));
    #pragma endscop
}
