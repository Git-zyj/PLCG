/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [15] [i_1] = (max((arr_5 [i_0] [i_2]), 6891));
                    arr_9 [i_0] [14] [i_1] = ((-(arr_6 [i_0] [i_0] [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_3 + 2] = ((((min((arr_2 [i_4 - 1]), (arr_11 [i_4 - 1] [i_3] [i_4 - 1])))) ? ((-(arr_11 [i_4 - 1] [i_4 - 1] [i_3 - 1]))) : (arr_11 [i_4 - 1] [i_3 + 2] [i_4 - 1])));
                    arr_15 [i_0] [i_0] [i_0] [6] = (((max(var_9, 48424))));
                    arr_16 [i_0] [i_0] [i_3 + 2] [i_0] = arr_3 [i_0] [i_0];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_13 = ((~(arr_17 [14] [i_5 - 1])));
        arr_20 [i_5 - 1] = (arr_19 [1]);
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_14 += ((!(arr_26 [i_5 - 1] [1] [i_5 - 1])));
                    var_15 = ((!(((-(arr_25 [i_6] [i_6 - 3] [i_6 - 3]))))));
                    var_16 = (max(var_16, (((-(arr_22 [i_6] [i_6]))))));
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 15;i_8 += 1)
    {
        arr_29 [i_8] = (48398 ? (max((((arr_18 [1]) ? 42562 : 1)), var_3)) : (((((15872 ? 0 : 6918))) ? (arr_18 [i_8 + 1]) : (arr_0 [i_8 - 2] [i_8 - 2]))));
        var_17 = (min(1, (!58661)));
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        var_18 = ((-(arr_19 [i_9 + 2])));

        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            arr_34 [i_9 - 1] [i_9 + 2] [6] = (arr_17 [i_9] [i_10 - 2]);
            arr_35 [i_9 + 2] [1] = (~65523);
            arr_36 [i_9 + 2] [3] = 6864;
        }
    }
    var_19 = ((((max(var_12, 1))) ? (max(64625, var_4)) : ((var_8 ? (max(1119691710, var_6)) : 60132))));
    #pragma endscop
}
