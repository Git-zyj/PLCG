/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 -= (128844628 > 1);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3 + 2] = ((((((arr_2 [i_1 - 1]) ? var_4 : var_9))) * var_10));
                        arr_13 [i_1] [i_1] [9] [i_1] = var_0;
                    }
                }
            }
        }
        var_15 = (max(var_15, ((max((((((~(arr_1 [i_0] [i_0])))) ? var_5 : (max(var_2, var_2)))), var_3)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_16 = (max(var_16, var_0));
        var_17 = (((min((arr_15 [i_4]), (((25992 ? (arr_9 [1] [i_4] [i_4] [i_4] [i_4] [i_4]) : var_6))))) / (((((max(var_7, var_8))) ? 4166122674 : -var_9)))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_18 -= (min(1, ((128844612 * (arr_16 [i_5])))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_19 += var_9;
                            var_20 = (min(var_20, (min(((((min(var_5, var_2))) ? ((max(1, 1))) : var_7)), (max(((1 ? 1582088504 : 25998)), (!6)))))));
                            arr_28 [i_4] [i_4] [i_4] [i_6] [i_6] [i_8] = (min(128844605, ((59622 ? 11370845748688331114 : 681269502))));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (1511 & 12209038555813014772)));
        var_22 = ((-(arr_8 [i_9] [2] [i_9] [2] [i_9])));
    }
    var_23 -= var_8;
    var_24 = var_6;
    var_25 *= var_8;
    #pragma endscop
}
