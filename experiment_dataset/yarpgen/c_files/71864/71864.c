/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((var_18 ^ 1) & (var_11 > var_11))), var_2));

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = ((((arr_1 [i_0 - 3]) != var_3)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = ((var_10 ? (((arr_1 [i_0 + 2]) ? -22 : var_8)) : (((((22 ? var_8 : 917504))) ? (((-910876166 ? 1 : -910876166))) : (arr_3 [i_0 + 1] [i_1])))));
            arr_8 [i_0] = (arr_1 [i_0 - 2]);
        }
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 = (((49152 ? var_12 : (arr_9 [i_2 + 4]))));
            var_22 += (var_12 - -3091672564648010809);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_4] [i_2] [i_4] = var_15;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_23 = ((arr_18 [i_2 - 3] [i_4] [i_5]) ? (arr_4 [i_4] [i_4] [i_5]) : (arr_4 [i_4] [i_4] [i_4]));
                        arr_23 [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] = (arr_2 [i_2 + 3]);
                        arr_24 [i_2] = var_11;
                        arr_25 [i_2] [i_4] [i_5] [i_4] |= 1;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_31 [i_2 + 1] [i_2 + 1] = ((((((arr_10 [i_2 - 2]) ? (arr_10 [i_2]) : 0))) ? var_11 : (((arr_6 [i_2]) / var_9))));
                        var_24 = ((((!(arr_14 [i_8] [i_4] [i_4]))) ? (((((arr_27 [i_4] [i_4]) || var_9)))) : ((910876156 ? var_18 : var_15))));
                    }
                }
            }
            arr_32 [i_2 + 4] = (arr_19 [i_2] [i_4]);
        }
        arr_33 [i_2] = (arr_2 [i_2]);
    }
    #pragma endscop
}
