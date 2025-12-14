/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min((~var_17), var_2)), ((min(1, var_15)))));
    var_20 = (max(((((var_14 ? var_3 : var_9)))), (((!var_2) ? (var_17 + 15808) : ((max(var_15, 1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = -var_1;
            var_21 |= (((arr_0 [i_1 - 2] [i_1 - 2]) ? (!17313) : var_9));
            var_22 = (((arr_0 [i_1 - 2] [i_1 - 1]) ? (arr_0 [i_1 - 1] [i_1]) : (arr_0 [i_1 + 1] [i_0])));
            var_23 = 1;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_24 = var_9;
            var_25 &= (((var_13 ? (arr_1 [i_0]) : (arr_7 [i_0]))));
        }
        for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_5] [i_0] [i_0] [0] |= 3371;
                        var_26 = ((var_18 ? -20633 : -25896));
                        var_27 = (min(var_27, ((((arr_16 [i_3 + 3] [i_5]) ? var_11 : var_12)))));
                        var_28 = (min(var_28, (37190 ^ var_14)));
                        arr_19 [i_5] |= (var_13 < -30099);
                    }
                }
            }
            var_29 = (arr_7 [i_3 + 4]);
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_0] [i_6 - 1] = ((6587 ? var_15 : (arr_14 [i_0] [i_6 + 3] [i_0] [i_0])));
            var_30 = (max(var_30, ((((arr_17 [i_6 + 2] [i_6 + 2]) * 23413510)))));
        }
        var_31 = -10677;
        var_32 = (max(var_32, (arr_10 [i_0])));
    }
    #pragma endscop
}
