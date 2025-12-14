/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 1));
    var_15 = (4 | -4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = 132;
                var_16 = (((((max((arr_1 [i_0]), 16)))) >> (32 - 27)));
                arr_8 [i_0] [i_0] = var_0;
            }
        }
    }

    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_17 = (max(var_17, (((((max((arr_4 [i_2] [i_2] [i_2]), (((var_10 < (arr_0 [i_2]))))))) ? -2 : (32 < 4))))));
        var_18 = var_7;
        arr_11 [i_2] [i_2] = ((((((32736 != (arr_6 [i_2] [i_2]))))) <= var_6));
        arr_12 [i_2] = ((((min(var_2, var_9))) ? 0 : ((min((arr_5 [i_2 + 1] [i_2 - 1] [i_2]), (arr_5 [i_2 - 2] [i_2] [i_2]))))));
    }
    #pragma endscop
}
