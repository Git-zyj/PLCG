/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = 1;
        arr_2 [i_0] = ((1 ? var_2 : var_10));
        arr_3 [i_0] = ((-1951323976131535860 ? var_16 : 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_19 += (!var_11);
                arr_12 [15] = ((57540 ? 1677515777 : 1));
                arr_13 [7] [i_1] [1] [i_1] = ((var_9 ? var_4 : var_14));
                arr_14 [i_2] [i_2] [i_2] = var_14;
            }
            var_20 = ((arr_8 [i_1] [i_1]) ? 1 : ((var_17 ? -10 : 7991)));
        }
        var_21 += ((var_11 ? (((var_1 ? var_11 : (arr_11 [i_1])))) : (arr_8 [12] [i_1])));
        arr_15 [i_1] = -434714221;
    }
    var_22 = -var_14;
    var_23 = var_0;
    #pragma endscop
}
