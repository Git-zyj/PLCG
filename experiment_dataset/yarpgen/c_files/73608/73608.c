/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 << (var_8 - 34262076693050444)));
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0] = var_3;
                        var_13 -= var_3;
                        var_14 = var_2;
                        arr_14 [i_0] [i_0] [4] [i_0] = (((((arr_2 [i_3 - 3] [i_1 + 1]) >= var_10)) || ((var_1 > (arr_2 [i_3 - 2] [i_1 + 3])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] = (((((var_5 + (arr_20 [i_0]))) << (var_8 - 34262076693050427))) + (((arr_22 [12] [i_5] [10] [i_6]) / (arr_11 [i_6] [i_6] [i_5] [i_5] [i_0] [i_0]))));
                        var_15 = (((var_0 + var_6) + (arr_7 [i_6 + 3] [i_5 + 2] [i_4 - 2])));

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_16 = var_7;
                            var_17 = (((arr_21 [i_4 - 1] [6] [i_5 + 2] [i_5] [i_6 + 3]) || (arr_11 [i_7] [11] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                        }
                        var_18 &= (arr_9 [i_4 - 3] [i_0] [i_4 - 3]);
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = arr_2 [3] [i_0];
        var_19 = (max(var_19, (var_9 % var_4)));
        arr_29 [i_0] = (arr_2 [8] [i_0]);
    }
    #pragma endscop
}
