/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 |= (((arr_2 [i_1]) ? ((-(max((arr_1 [6]), 56207)))) : (arr_3 [i_0] [i_0])));
                    var_13 -= var_7;
                    var_14 = (max((!var_4), (arr_5 [18] [i_1] [i_2] [i_2 + 1])));
                }
            }
        }
    }
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] = (arr_1 [i_3]);
                var_16 = (min(var_6, (((var_6 >= (arr_9 [i_3] [9]))))));
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
