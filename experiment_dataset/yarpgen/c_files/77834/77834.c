/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = (((((arr_7 [1] [i_1] [i_1]) ? 1336210784 : (((~(arr_7 [i_0] [10] [11]))))))) + (((max(-2067422269, 18446744073709551589)) - (!var_9))));
                                arr_14 [i_0] [13] [i_1] [i_0] [9] [i_0] = var_8;
                            }
                        }
                    }
                    var_10 = (arr_2 [11]);
                    arr_15 [i_1] [i_1] = (((var_9 ? (arr_5 [i_1]) : (arr_5 [i_1]))));
                    arr_16 [12] [i_1] [12] = (((~var_4) ? (arr_7 [i_2] [i_1] [i_0]) : var_5));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_19 [10] = (-2147483647 - 1);
        arr_20 [i_5 - 1] [i_5] = (((arr_18 [i_5 + 1]) ? (~103) : ((~(arr_17 [i_5 + 4])))));
    }
    var_11 = (((max((var_7 | var_2), (var_9 % var_9))) == var_6));
    var_12 = (max(-13, -13));
    #pragma endscop
}
