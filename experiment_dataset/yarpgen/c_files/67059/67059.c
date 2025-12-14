/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] [i_1] [i_3] [i_1] [i_3] = -5128200330429615432;
                        arr_11 [i_0] [i_1] [i_1] [i_1] = 39;
                        arr_12 [i_0] [i_1] = 217;
                        arr_13 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = var_6;
                    }

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_18 [i_1] [i_1] = 28;

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_14 = 1464887398;
                            arr_22 [i_1] [i_1] [i_5] = 9551;
                        }
                        arr_23 [i_1] [i_1] = var_5;
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_1] = var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_29 [i_0] [i_0] = 209;
                    var_15 ^= 5128200330429615432;
                }
            }
        }
        var_16 = (min(var_16, 109));
    }
    var_17 = var_12;
    var_18 = 217;
    var_19 = var_13;
    #pragma endscop
}
