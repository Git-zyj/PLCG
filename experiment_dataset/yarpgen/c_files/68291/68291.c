/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((arr_0 [i_2] [6]) ^ (((17865 ? 14233 : (arr_0 [5] [i_1])))))))));
                    var_11 = (arr_8 [i_2]);
                    arr_9 [i_0] = (min((((!(arr_0 [i_0] [i_0])))), (max((((arr_2 [13] [6]) << (var_5 + 6835))), ((var_9 ? 17865 : 184))))));
                }
            }
        }
    }
    var_12 = var_4;
    var_13 = (min((((9992202747930784147 ? var_1 : var_3))), ((var_1 ? 180 : ((18 ? 54246 : 9992202747930784155))))));
    var_14 = (min(var_3, var_0));
    var_15 = (~var_7);
    #pragma endscop
}
