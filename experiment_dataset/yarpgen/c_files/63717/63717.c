/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_10;
    var_17 += -325162403;
    var_18 = var_6;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] &= (arr_3 [i_1]);
                    var_20 = ((var_11 ? (((arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_0] [i_1 - 3] [i_1 + 2] [i_2]) : -40)) : -325162403));
                }
            }
        }

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_0 - 1] [14] = ((((((arr_8 [i_0 - 2] [i_3 - 1]) >> (((arr_8 [i_0 + 3] [i_3 - 1]) - 53))))) ? (((arr_8 [i_0 - 1] [i_3 - 1]) ? (arr_8 [i_0 + 3] [i_3 - 1]) : 2059070286)) : (((min((arr_8 [i_0 - 2] [i_3 - 1]), (arr_8 [i_0 - 2] [i_3 - 1])))))));
            arr_11 [15] [9] [i_0 + 3] = arr_3 [i_3];
            arr_12 [i_0] = var_13;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_15 [i_4] = var_14;
            var_21 = (arr_1 [i_4]);
            arr_16 [i_4] [i_4] = (arr_2 [i_0]);
        }
        var_22 = 1;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_20 [i_5] = (arr_18 [3]);
        var_23 = (arr_18 [i_5]);
        var_24 = -5801162194981412217;
    }
    #pragma endscop
}
