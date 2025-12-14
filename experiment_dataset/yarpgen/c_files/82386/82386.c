/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((-((max(var_2, 1)))))) ? var_10 : (((max(var_7, (min(var_9, var_2))))))));
    var_13 = (var_0 ^ 1);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (~((((!(arr_1 [i_0 + 2]))) ? var_0 : (max(1, var_0)))));
                    var_15 = (((-(max((arr_5 [i_0] [i_1] [i_1] [i_2 - 1]), (arr_6 [i_0] [i_1] [i_2] [i_0]))))));
                }
            }
        }
        var_16 = var_5;
        var_17 = ((+(((1 || 166) ? (((var_1 != (arr_2 [i_0])))) : ((max((arr_6 [i_0] [6] [i_0 - 1] [i_0 - 1]), 82)))))));
    }
    #pragma endscop
}
