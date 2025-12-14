/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~var_7) ? (max(-413908858, var_2)) : (((var_7 ? var_0 : var_15))));
    var_21 = (max((max(var_11, var_4)), (~var_0)));
    var_22 = -2147483625;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [10] [i_1] [i_1] = (min(((arr_2 [i_0]), (min((arr_1 [i_0] [5]), var_4)))));
                arr_7 [11] [11] [i_1] = var_7;
                var_23 = arr_2 [i_1];

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] = (~((var_15 ? ((~(arr_8 [i_0] [11] [i_1] [5]))) : (min((arr_10 [2] [2]), var_13)))));
                    arr_12 [i_0] [8] [i_0] = max(917201003, ((var_7 ? -1163608628 : (~var_9))));
                    arr_13 [14] = ((((arr_8 [i_0 - 2] [i_2] [i_2] [i_2]) ? (arr_8 [i_0 + 1] [i_1] [i_2] [i_0 - 2]) : (arr_2 [i_0 + 1]))) << (((((~(arr_8 [i_0] [i_1] [i_2] [i_0]))) == var_0))));
                    arr_14 [15] = min((arr_8 [i_0] [15] [i_1] [i_2]), ((~(~var_12))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_17 [8] [i_1] [8] [8] = (((((arr_8 [i_0 - 2] [i_0 + 1] [i_1] [i_3]) ? (arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) : ((var_19 ? (arr_16 [i_0 + 1] [i_0 + 1] [11] [i_3]) : var_0))))) ? ((max(457399463, 457399460))) : (max(((~(arr_2 [i_0]))), var_19)));
                    arr_18 [2] [12] [2] [i_3] = arr_5 [6];
                    var_24 = (~(((((arr_10 [i_0 - 1] [i_0 - 1]) + 2147483647)) << (((((arr_10 [i_0 - 2] [i_0 + 1]) + 1122706066)) - 11)))));
                    arr_19 [i_0] [i_1] [i_0] = min((max((arr_8 [i_0 - 1] [0] [i_0 - 1] [i_0 + 1]), var_7)), ((~(arr_3 [i_0 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
