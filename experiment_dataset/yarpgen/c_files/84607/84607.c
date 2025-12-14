/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0 + 2] [i_0 + 2]);

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 -= (arr_8 [i_3] [i_1 - 1]);
                        var_18 = ((((215 ? (arr_9 [i_1] [i_1] [i_3]) : var_9))) ? (((var_4 ? 201 : 215))) : (arr_5 [i_0]));
                    }
                }
            }
            var_19 = 534283355378667335;
            var_20 += 17912460718330884281;
        }
        arr_12 [i_0] = 2103431242;
    }
    var_21 = (((((215 ? 0 : -67))) ? ((min(1, var_14))) : 1));
    var_22 = ((var_5 ? ((((max(2147483647, 677365170076938769))) ? 1 : 1)) : (1 >= var_0)));
    #pragma endscop
}
