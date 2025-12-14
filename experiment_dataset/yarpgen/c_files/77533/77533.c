/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((2249600790429696 ? 11 : var_11))) ? (31 - 48) : (31 + -var_5)));
                arr_6 [i_0] [i_1 - 1] [10] &= ((((((arr_2 [16]) ? 30 : 239))) ? (31 + 65535) : var_8));
                var_12 = (max(var_12, ((max(-99, (60665 + var_5))))));
            }
        }
    }
    var_13 |= var_9;
    var_14 = var_1;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_15 = (min(var_15, (((var_0 ? 0 : (arr_1 [i_2] [22]))))));
        arr_9 [i_2] [i_2] = ((254 ? 0 : 1084109994));
        arr_10 [i_2] = ((1 ? 1 : 61));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_16 = (min(var_16, var_6));
                        arr_22 [i_5] [14] [i_5] [i_6] &= var_4;
                    }
                }
            }
            arr_23 [i_4] [i_4] [i_4] = (((arr_15 [i_4] [i_4 - 1]) & var_1));

            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_29 [i_4] [i_4] [i_4] [i_4] [i_3] = (var_2 && 8658797726598335478);
                    var_17 = (-127 - 1);
                }
                var_18 |= (-2249600790429696 / -2249600790429701);
                arr_30 [i_4] [i_7] [i_7] [i_4] = (-2249600790429714 || 2);
            }
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_19 &= ((((((13787684370289637972 ? 22511 : (arr_4 [i_3] [8] [i_9])))) ? var_4 : 4294967288)));
            arr_34 [i_9] = ((-1 ? (((arr_3 [i_9] [i_9]) ^ -2249600790429685)) : var_0));
            arr_35 [i_9] [i_9] [i_9] = var_9;
        }
        arr_36 [i_3] = (((165 >> (((arr_26 [7] [i_3] [13] [i_3]) - 14293787636047912353)))));
    }
    #pragma endscop
}
