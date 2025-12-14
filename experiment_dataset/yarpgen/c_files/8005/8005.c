/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 <= (((!((min(var_11, var_4))))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 = 764420921;
        var_14 = ((-(((arr_0 [i_0 + 1]) + (arr_1 [i_0 - 1])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [i_0] [i_4 - 1] [i_4] [i_3] [i_3] = (((((min(1, -111)))) & (((arr_7 [i_0 + 1] [i_1] [1] [i_0]) & (min(var_4, (arr_3 [i_0])))))));
                            arr_15 [i_0] [i_0] [i_0] = -111;
                            var_15 = (arr_5 [i_0] [i_1] [i_2]);
                        }
                    }
                }
            }
            arr_16 [i_0] [i_1] [i_0] = (arr_3 [i_0]);
            var_16 = (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0]);
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = ((~var_1) ? (arr_12 [17] [17] [i_5]) : ((~(arr_12 [i_5] [i_5] [i_5]))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_17 = ((!(((arr_9 [i_8] [i_7] [i_7]) && (arr_1 [i_5])))));
                            arr_34 [i_5] [i_6] [i_6] [i_8] [i_9] = (arr_28 [i_5]);
                            var_18 = (((((arr_11 [i_8] [i_8] [i_7] [i_6]) + 2147483647)) << ((((((arr_26 [i_5] [17] [i_7] [i_8]) > (arr_18 [4])))) - 1))));
                        }
                    }
                }
            }
            var_19 = (min(((-(arr_1 [i_5]))), (arr_4 [i_5] [i_5])));
        }
        arr_35 [1] [i_5] = (arr_7 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
