/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = (((((arr_2 [i_0 + 1]) >> (((arr_1 [i_0 + 1] [i_0]) - 12679159880718093017)))) << (var_10 - 37909)));
        var_15 = (arr_3 [i_0 + 1]);

        for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_16 += (!-16800);
            var_17 = -16803;
            var_18 = (arr_5 [i_1] [i_1 + 1]);
            arr_6 [i_1] = ((((!(arr_0 [i_0 + 1] [i_1]))) ? var_0 : var_2));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_19 = (arr_15 [i_0] [i_0 + 1] [i_3] [i_0] [i_0 + 1] [i_2 - 1]);
                        arr_18 [i_0] [8] [i_3] [11] = (((-16809 + 2147483647) >> (16782 - 16760)));
                        var_20 = var_9;
                    }
                }
            }
            arr_19 [i_0] [i_2 - 1] = (arr_8 [i_0]);
            var_21 = arr_4 [i_0] [i_2 + 1] [14];
        }
        var_22 = ((-(arr_7 [i_0] [i_0 + 1])));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_22 [8] [4] [i_5] = (((arr_21 [i_0 + 1]) ? var_4 : (arr_12 [i_5])));
            var_23 ^= (arr_11 [4] [14] [i_0] [4]);
        }
    }
    var_24 = (((((((16813 ? var_6 : 64049)) % var_9))) ? var_1 : var_2));
    #pragma endscop
}
