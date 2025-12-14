/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [3] [i_1] [i_2] = 8800;
                    var_10 -= (max((((arr_7 [i_0] [i_0] [i_2] [i_2]) ? (arr_3 [i_0] [i_1] [i_0]) : 30701)), (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_1] [i_0])))));
                    var_11 = 54094;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] = ((var_6 >> (((max(((~(arr_7 [i_0] [10] [i_2] [i_3]))), (~56071))) + 22783))));
                        var_12 = var_4;
                        var_13 += arr_6 [i_0];
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_14 = 51352;
                        var_15 += arr_6 [i_0];

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_16 = (min(var_16, var_3));
                            var_17 -= ((~((((arr_10 [i_0] [i_0]) != 18205)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            var_18 = arr_4 [i_2];
                            var_19 = arr_2 [11] [i_1];
                        }
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_20 = (max(var_20, ((((arr_2 [i_0] [i_1]) ? (14183 | var_7) : ((((((arr_17 [i_1] [i_7]) < var_4)) || var_0))))))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_26 [i_8] = 51370;
                            arr_27 [i_0] [i_1] [i_2] [i_7] [i_8] = 19174;
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_6 ^ ((min((58060 >= var_1), var_2)))));
    #pragma endscop
}
