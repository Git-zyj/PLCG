/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] [12] [i_0] = (min(-15, 2599886036452016685));
                    var_15 = (arr_3 [i_0 - 1]);
                    arr_11 [i_2] [i_2] [9] [i_2] = (min((((arr_2 [i_0 + 1]) ? 51668 : (arr_2 [i_0 - 2]))), ((-(arr_2 [i_0 - 2])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_16 += min((((arr_13 [i_3]) ? (arr_12 [i_3]) : (arr_13 [i_3]))), (min((arr_12 [i_3]), var_11)));
        var_17 = (min(var_17, (1 * -52)));
        var_18 = (arr_13 [i_3]);
        var_19 = 59049;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_20 *= max((((-(((!(arr_13 [i_4]))))))), ((~(((arr_15 [2]) ? 268435455 : var_3)))));
        var_21 = (max(var_21, (arr_14 [8])));
        arr_16 [i_4] = (((arr_14 [i_4]) ? (max((arr_12 [i_4]), (arr_12 [i_4]))) : ((51671 ? (arr_13 [i_4]) : (arr_12 [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_24 [i_4] = ((-(((((arr_19 [i_4] [i_7 - 2] [i_6 + 2]) + 2147483647)) << (((((arr_19 [i_4] [i_7 - 2] [i_6 + 2]) + 1496870686)) - 3))))));
                        var_22 = (((((268435466 >> (6502 - 6440)))) ? ((var_0 ? (arr_23 [i_7 + 1] [5] [i_4] [i_4]) : (((arr_21 [i_4]) + 4294967278)))) : (arr_21 [i_4])));
                        var_23 = (((arr_21 [i_4]) ? var_3 : ((4 ? 27837 : 1))));
                        var_24 = (arr_18 [i_4]);
                    }
                }
            }
        }
    }
    var_25 *= var_14;
    #pragma endscop
}
