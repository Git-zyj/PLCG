/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 1] = var_9;
                    var_14 = ((~(arr_9 [i_1 + 1] [i_1 - 3] [i_1 + 1])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_17 [19] [i_0] [1] [i_5] [i_0] = ((-(arr_1 [i_0])));
                        var_15 |= -2024362687;
                        arr_18 [i_0] [i_0] [1] [i_0] [i_0] = -1;
                    }
                }
            }
            arr_19 [14] [i_0] [23] = (((~(arr_3 [i_0]))));
            arr_20 [i_0] [i_0] [i_0] = (arr_13 [i_0] [6] [i_3]);
            arr_21 [i_3] [1] [i_3] &= 3843325730064698706;
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_16 = (max(var_16, var_3));
            var_17 = 11;
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_18 = 3843325730064698706;

        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_19 = ((-(((arr_22 [i_7] [i_8] [i_8]) ? (~var_10) : 18))));
            var_20 = (min(var_20, 20));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            arr_32 [i_7] [i_7] [i_7] = ((-3843325730064698713 ? var_12 : ((127 ? (arr_31 [i_7] [i_9]) : (arr_16 [i_9] [i_9] [i_9] [i_9] [i_7] [i_7])))));
            var_21 &= var_10;
        }
    }
    #pragma endscop
}
