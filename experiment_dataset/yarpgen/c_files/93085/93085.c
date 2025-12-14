/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((!((max(0, (-2147483647 - 1))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_11 = 1;
            arr_6 [i_0] [i_1] = (arr_2 [i_1 + 1]);
            arr_7 [i_1] [i_1] = (~3472376681);
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_19 [i_0] [i_2] [i_0] [i_3] [7] = (arr_15 [7] [i_3 + 1]);
                        var_12 = (max(var_12, ((max(var_5, (arr_12 [i_0] [i_0] [i_3 - 1]))))));
                    }
                }
            }
        }
    }
    var_13 = var_2;
    var_14 = var_0;
    #pragma endscop
}
