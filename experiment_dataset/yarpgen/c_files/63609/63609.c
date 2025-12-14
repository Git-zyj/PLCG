/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_12 = ((!(arr_3 [i_1 - 1] [i_1 - 1])));
            var_13 = (!var_8);
        }
        var_14 -= (!var_10);
    }
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    var_16 = (max(var_16, (~1)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_5] [i_4 + 3] [i_3] [i_2] [i_6] = (--1);
                                var_17 = (~((~(arr_8 [i_2] [i_3 - 1]))));
                                var_18 = ((~(~1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_19 = ((~(~var_9)));
                                arr_27 [i_8] [i_8] [i_4] [i_8] [i_2] = (arr_18 [i_8 - 1] [i_8 - 1] [i_7 + 2] [i_7 + 2] [i_4]);
                            }
                        }
                    }
                    var_20 = (--1);
                    var_21 = (min(var_21, (((~((-(arr_14 [i_2] [i_3] [i_4] [i_3 - 2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
