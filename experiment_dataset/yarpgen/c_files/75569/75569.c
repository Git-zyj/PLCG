/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_14));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(var_21, ((min(1, var_8)))));
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = ((((arr_6 [i_0]) && var_0)));
            arr_7 [i_0] = (arr_5 [i_1] [i_0]);
            arr_8 [i_0] [i_0] = (((arr_3 [i_0]) >= ((min(1, 1)))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_23 = var_7;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        var_24 *= var_11;
                        arr_17 [i_0] [i_3] [i_0] = var_5;
                    }
                }
            }
            var_25 = var_8;
            var_26 = ((1 ? 8097220364623094500 : 19));
            arr_18 [i_0] [i_0] [i_0] = (min((((((((arr_11 [i_0]) ? 92 : 24))) ? 1 : (!var_5)))), (((arr_6 [i_0]) / 1))));
        }
    }
    #pragma endscop
}
