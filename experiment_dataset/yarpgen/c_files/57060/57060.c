/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] = ((((((arr_3 [i_1]) ? -105 : var_11))) / (arr_3 [i_2])));
                        var_16 = 32197;
                        arr_11 [i_1] [i_1] = (((((arr_5 [i_0]) < (arr_5 [i_1]))) ? ((1394118204509373866 ? 2040 : 3438879931846176529)) : ((((((arr_5 [i_1]) ? (arr_6 [i_0] [i_2] [i_2]) : var_1)))))));
                    }
                }
            }
            var_17 -= arr_0 [i_0];
            arr_12 [i_1] [i_1] [i_1] = var_11;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_18 &= ((-2541481716826503093 ? 72057594037927935 : 52726));
            var_19 = (max(var_19, ((((arr_13 [i_4] [i_0] [i_0]) / (arr_13 [i_0] [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = 57;

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_20 -= 96;
                arr_23 [i_0] [i_0] [i_5] [i_6] = (((((arr_2 [i_6] [i_6]) ? var_5 : var_13)) / -54));
                var_21 = (arr_5 [i_5]);
            }
            arr_24 [i_0] [i_5] [i_5] &= (((arr_0 [i_0]) ^ -11));
        }
        arr_25 [i_0] = 268435455;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_22 = (min(var_22, (arr_27 [i_7])));
        var_23 = 7911;
        var_24 = (arr_26 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_25 -= (arr_28 [22]);
        arr_31 [i_8] = (((((var_14 ? var_4 : 6064))) ? 3310538668 : ((65 ? var_12 : var_4))));
    }
    var_26 = ((((var_12 ? var_0 : var_14)) / ((max(((var_11 ? var_2 : 65535)), var_13)))));
    #pragma endscop
}
