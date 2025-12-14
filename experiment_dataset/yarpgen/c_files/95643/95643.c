/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = ((((((((8244538097161803500 ? -8244538097161803500 : var_11))) ? (((arr_1 [17]) % var_8)) : var_9))) ? (arr_1 [i_0]) : (max(var_12, (arr_0 [i_0])))));
        var_20 = (max(var_20, (((((!(arr_1 [i_0]))) ? var_3 : 58749)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (arr_0 [i_1]);
        arr_4 [2] = ((((!(arr_3 [i_1] [i_1]))) || (arr_3 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] &= 1475111888;

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_22 = ((((((arr_7 [10]) == var_8))) / (arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1])));
            arr_11 [i_3] [i_2] = (((arr_3 [i_2 - 1] [i_3]) >= (112 >= var_17)));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (~var_3);
        var_23 |= (((arr_1 [i_4]) == ((((arr_10 [i_4] [i_4 + 1] [12]) || var_2)))));
        arr_17 [5] [i_4 - 1] = (((arr_15 [15]) ? var_15 : 35));
        var_24 = (8244538097161803499 ? 0 : var_3);
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_25 = (max(var_25, var_2));
                    var_26 = ((~(((arr_12 [i_5 + 2]) ? (arr_12 [i_5 + 2]) : (arr_12 [i_5 + 2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            {
                arr_32 [i_8] [9] [i_8] = (((!-117) ? (!var_14) : (((arr_28 [i_8]) ? (arr_29 [i_9] [i_9]) : (arr_28 [i_8])))));
                var_27 = (((((((arr_30 [22] [i_8] [i_9]) - (arr_28 [i_9]))))) ? ((((((arr_28 [i_8]) ? var_5 : 1))))) : ((((var_8 ? (arr_27 [24]) : (arr_30 [i_8] [i_8] [5]))) + var_14))));
            }
        }
    }
    var_28 = (max(var_10, (((var_8 != (min(0, 8244538097161803500)))))));
    #pragma endscop
}
