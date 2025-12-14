/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, 0));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_16 = 6;
                                var_17 = ((-((~(arr_14 [i_0] [i_0])))));
                                var_18 *= (arr_13 [i_0] [i_1] [i_0] [i_2] [i_4] [i_1] [i_2]);
                            }
                        }
                    }
                }
                var_19 = (max(((((arr_12 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1]) <= (arr_8 [i_0])))), (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) ? 1 : (arr_14 [i_0] [i_1])))));
                var_20 = (min(var_20, ((max(((((arr_14 [i_0] [i_1]) > (arr_14 [i_0] [i_1])))), (-var_6 % var_13))))));
                arr_15 [i_0] = (min(((-(arr_2 [i_1]))), (arr_0 [i_0])));
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_21 *= (max(var_1, (min((4294967288 || 25), (arr_4 [i_5] [i_5])))));
        arr_18 [i_5] = (min(((~(arr_17 [i_5]))), (((arr_17 [i_5]) ? (arr_17 [i_5]) : -20))));
        arr_19 [i_5] [i_5] = (2938682147 != -687615960);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((~(arr_21 [i_6])));
        var_22 = (min(var_22, (((arr_7 [i_6] [i_6] [i_6] [19]) ? 159 : (1613723833 & 61)))));
        var_23 += (arr_5 [i_6]);
        var_24 = (arr_20 [i_6]);
        arr_23 [i_6] [i_6] = 0;
    }
    #pragma endscop
}
