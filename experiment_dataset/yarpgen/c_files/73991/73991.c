/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = ((((var_5 == (arr_0 [i_0] [i_0]))) && ((((arr_1 [i_0] [i_0]) / (arr_3 [i_0]))))));
        var_12 = var_9;
        var_13 = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = (min((!var_8), (max((arr_7 [1] [i_2 + 1]), (arr_4 [i_3])))));
                    var_15 = var_4;
                }
            }
        }
    }
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_5] = 4784895244203110274;
                arr_18 [i_4 + 1] = ((!(arr_12 [i_4 + 1] [i_4 + 1])));
            }
        }
    }
    #pragma endscop
}
