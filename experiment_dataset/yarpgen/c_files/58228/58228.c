/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 *= (arr_1 [i_0 - 1]);

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_18 = arr_0 [1];
            var_19 = (arr_0 [i_0 - 2]);
            var_20 = (arr_4 [i_0 - 1]);
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_21 = (arr_5 [i_2 - 1] [i_2 + 3]);
        arr_8 [i_2 + 2] = (arr_0 [i_2]);
        var_22 = (arr_0 [i_2 - 1]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_2 - 1] [1] [0] [i_2 + 2] &= var_16;
                        var_23 &= (arr_17 [i_2 + 2] [i_2 + 3] [i_4 - 1]);
                    }
                }
            }
        }
    }
    var_24 = (((min(((var_9 ? 3416968259 : 225)), (!1))) < ((((min(var_8, var_13)))))));

    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_25 = (!-2177887884649705098);
        var_26 = (arr_6 [1]);
        arr_23 [i_6] [7] = (var_9 ? 223 : var_10);
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 10;i_9 += 1)
                {
                    {
                        var_27 = (arr_11 [i_6 + 4] [12]);
                        var_28 += var_15;
                        arr_31 [i_6 + 2] [i_6] [i_7] [i_8] [i_9] [i_9] = ((var_1 != (arr_30 [i_7 - 1] [i_9 + 2] [i_8] [i_9] [i_7] [i_9])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
