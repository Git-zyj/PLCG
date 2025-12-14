/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((19666 ? 6665286708362886611 : 6665286708362886611));
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = var_9;
                var_21 = (~((((arr_0 [i_0 + 1]) <= (arr_1 [i_0 + 3] [i_0 - 1])))));
                var_22 = (19666 + 19666);
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    var_23 = ((~(((((((!(arr_2 [i_4] [i_2] [i_2]))))) > var_0)))));
                    var_24 ^= 6665286708362886611;
                    arr_14 [i_2] [i_3] [i_3] = ((~(arr_7 [i_3] [i_4 - 1] [i_3 - 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_21 [i_3] [i_3] [i_3 + 1] [i_3] [9] = (var_8 != var_8);
                                var_25 = 645819411;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                {
                    var_26 *= arr_10 [i_7 + 2] [i_7] [i_7 - 1];
                    var_27 += (min(var_6, (((arr_20 [i_2] [i_7] [i_8] [i_8] [i_8 + 3]) ? (arr_20 [i_2] [4] [i_2] [i_8] [i_8 + 3]) : (arr_13 [i_7 - 1] [i_7] [i_8])))));
                    arr_26 [i_2] = (((((-645819412 ? 1 : (-2147483647 - 1)))) ? (((var_8 ? (arr_19 [i_8] [i_8 - 2]) : (arr_19 [i_8] [i_8 + 2])))) : (arr_19 [i_2] [i_8 - 1])));
                    var_28 = (min(var_28, var_16));
                }
            }
        }
    }
    #pragma endscop
}
