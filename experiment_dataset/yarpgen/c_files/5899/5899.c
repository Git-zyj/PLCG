/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2905788281;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (~7898);
                    arr_8 [i_2] = ((!((((arr_0 [i_0] [i_1]) ? (arr_6 [i_2] [i_1] [i_2]) : (max((arr_6 [i_2] [i_1] [i_2]), 2269814212194729984)))))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((~(min(337951815, (arr_1 [i_1])))));
                    var_21 = (arr_1 [i_0]);
                }
            }
        }
        var_22 = (arr_3 [i_0]);
    }
    var_23 -= (((((((var_4 ? var_9 : 2147483647))) && (var_15 && var_11))) && var_13));
    #pragma endscop
}
