/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = ((min(((min(var_2, var_1))), var_0)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [7] [i_3] [11] = var_6;
                        var_16 = (((((var_14 ? (((max(var_10, var_1)))) : ((var_12 ? var_9 : (arr_7 [i_0] [i_0] [4] [i_3])))))) ? (arr_7 [i_0] [i_0] [i_2] [i_3]) : (((25166894965882534 ? -25 : 29)))));
                        var_17 = var_12;
                        var_18 = ((-var_14 ? 0 : ((((min((arr_8 [4] [1] [i_0] [i_1] [i_0]), var_10))) ? (((arr_3 [i_0] [i_0]) ? var_13 : (arr_10 [1] [i_1] [i_2] [2]))) : (((arr_2 [i_0]) ? (arr_4 [i_0] [i_1]) : 1))))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (arr_6 [i_0]);
    }
    var_19 |= var_0;
    var_20 = (max(var_20, (((1291653306 ? (max((min(9223372036854775807, var_13)), (((var_7 ? var_11 : var_11))))) : var_12)))));
    #pragma endscop
}
