/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_9 ? var_8 : var_13))) / ((var_7 ? var_0 : var_7))))) ? var_5 : ((((-122 ? var_0 : var_5))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 ^= var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_8 [i_0] = ((!((((((2147483644 ? (arr_7 [i_3] [i_2] [i_2] [19] [i_1] [i_0]) : -13))) ? (min(3569188003689597735, 0)) : -350)))));
                        var_16 = (min(var_6, (arr_3 [i_0] [i_0])));
                        arr_9 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = var_13;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_17 = ((var_9 ? (arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : var_1));
        var_18 = arr_10 [i_4] [i_4];
        var_19 = (max(var_19, ((((arr_1 [i_4] [i_4]) || (arr_1 [i_4] [i_4]))))));
        arr_12 [i_4] = ((var_10 % (arr_4 [i_4] [i_4] [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_20 = (((arr_14 [i_5]) / (arr_5 [i_5 - 1] [i_5])));
        arr_16 [i_5] = ((var_6 ? (13 | 3551494787) : 0));
        arr_17 [i_5] = (-(arr_15 [i_5 - 1]));
        arr_18 [i_5] = (~347936582);
        arr_19 [i_5] [4] = (arr_5 [i_5] [i_5 - 1]);
    }
    #pragma endscop
}
