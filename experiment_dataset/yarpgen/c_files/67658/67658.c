/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = (((var_9 & (arr_0 [i_0 + 2] [i_0 + 2]))));
        var_10 = var_2;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_11 = (((arr_7 [i_0]) ? var_6 : var_6));
                            var_12 = (((arr_9 [i_0] [i_1]) > ((-(arr_14 [4] [i_1] [i_2] [i_3 + 1])))));
                            arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = (var_5 ? (arr_13 [i_0 + 1] [i_2] [i_2 - 2] [1] [i_3 - 1] [i_3 + 1]) : ((var_3 ? var_5 : (arr_2 [i_0]))));
                        }
                        var_13 = ((!(((((min(var_5, -115))) ? (var_1 || 57505) : (arr_8 [i_2 + 1] [i_2 - 1] [i_0 + 1]))))));
                        var_14 -= (~var_5);
                        arr_18 [8] [i_0] [8] [2] [i_3] [i_3] = var_2;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_15 = (((!(arr_20 [9]))) && ((min(var_4, ((var_2 ? 50471 : var_8))))));
        var_16 = ((!(arr_21 [i_5])));
        arr_23 [i_5] = ((~(((arr_20 [i_5]) ^ var_5))));
        var_17 = (arr_21 [i_5]);
    }
    var_18 = 114;
    var_19 = var_8;
    var_20 = (((~50471) ? var_3 : var_9));
    #pragma endscop
}
