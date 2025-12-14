/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [0] [10] = (-5067 / 163);
                    var_14 = 84;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_1] [i_1]);
                }
            }
        }
        var_15 = (max(var_15, (((-((var_8 >> (((arr_3 [i_0] [i_0]) - 41)))))))));
        var_16 = ((-(arr_7 [i_0] [i_0])));
        arr_11 [i_0] [i_0] = 5066;

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_17 = (arr_13 [i_0] [i_3]);
            arr_16 [i_3] [i_0] = (arr_14 [i_0]);
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 += ((+(((arr_18 [i_0] [16] [i_4]) ? var_0 : (arr_19 [i_0] [i_4])))));
            arr_20 [16] [14] = ((0 ? 3280 : -3303));
        }
    }
    var_19 = (max(1267986114, (max(((((-3303 + 2147483647) >> 0))), (min(var_1, var_5))))));
    #pragma endscop
}
