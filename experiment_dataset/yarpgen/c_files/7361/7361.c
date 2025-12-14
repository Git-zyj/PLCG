/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((max(var_4, var_10))) ? var_5 : ((-(!4294967292)))))));
    var_12 = var_5;
    var_13 = (var_1 + 4294967292);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = var_3;
                    arr_6 [i_1] [8] |= 4;
                    var_15 = (min(var_15, ((((((arr_2 [i_1 - 2]) ? var_10 : 7))) ? (max((arr_2 [i_1 - 2]), var_4)) : ((((arr_0 [i_1 + 1] [0]) ? (arr_0 [4] [8]) : (arr_0 [i_1 + 1] [2]))))))));
                    var_16 -= -18;
                }
            }
        }
    }
    #pragma endscop
}
