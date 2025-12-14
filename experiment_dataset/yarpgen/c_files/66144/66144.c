/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(var_7, (arr_1 [i_0] [i_0])));
        var_18 = var_13;
        var_19 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [8] = (arr_5 [1] [i_1] [i_1]);
            var_20 = 1;
            var_21 = (arr_2 [2]);
            var_22 |= arr_2 [i_1];
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_23 ^= (arr_8 [3]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_24 = (arr_11 [i_4]);

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_25 = (arr_14 [i_4] [i_4]);
                        var_26 = (max(var_26, var_4));
                        var_27 = (arr_11 [i_4]);
                    }
                    var_28 = (max((arr_10 [i_2] [i_2]), (min(10417521895786215329, (arr_11 [i_2])))));
                    var_29 = min((arr_13 [8] [i_2] [i_4] [8]), (arr_13 [7] [i_3] [i_4] [i_4]));
                }
            }
        }
        var_30 = var_15;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_31 ^= arr_15 [i_6];
        var_32 = (min(var_32, ((max((arr_15 [i_6]), (min((arr_15 [i_6]), 499283020)))))));
        arr_17 [i_6] [i_6] = arr_15 [i_6];
        var_33 = (max(var_33, ((max((arr_16 [i_6]), (arr_16 [i_6]))))));
    }
    var_34 = var_1;
    #pragma endscop
}
