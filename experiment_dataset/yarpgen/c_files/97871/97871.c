/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_0 ? var_6 : (!7283528252523836971)));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_13 = (min(var_13, var_6));
            var_14 = 23646;
            arr_7 [12] [i_1] = var_10;
        }
        var_15 += 23;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_16 += (((arr_9 [i_5] [i_2 + 1]) + (((var_0 < (min(var_10, var_5)))))));
                        var_17 &= (max(65523, (var_9 | var_6)));
                    }
                }
            }
            arr_17 [i_3] = ((var_12 ? ((min((min(2000, 9614)), var_10))) : var_8));
        }
        arr_18 [i_2] [i_2] = min((min(var_2, var_0)), (min(var_8, (arr_8 [i_2 - 1] [i_2 - 1]))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_18 = (min(var_18, -var_1));
        arr_22 [i_6] = (((((arr_16 [i_6] [i_6] [i_6] [6]) ? (arr_19 [i_6]) : var_10))) ? ((var_0 ? var_3 : var_8)) : var_12);
        var_19 -= (arr_9 [i_6] [i_6]);
        arr_23 [i_6] [i_6] = (10376958098460845289 && 9614);
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_20 += (-((var_3 ? var_12 : var_4)));
        var_21 = var_1;
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_34 [i_8] [i_8] = ((-(((arr_0 [i_8 - 3] [i_8 + 1]) / var_2))));
                    var_22 &= (min(((var_1 >= (arr_13 [i_8 - 2] [i_8] [i_8 - 2]))), ((!(arr_13 [i_8 + 2] [i_8] [i_9])))));
                }
            }
        }
    }
    var_23 += var_6;
    var_24 = ((((((max(var_10, var_9))) ? ((var_3 ? var_6 : var_10)) : ((var_6 ? var_11 : var_11)))) > var_6));
    var_25 = (min(var_25, var_0));
    var_26 = (max(var_26, ((min((((-var_6 ? var_6 : var_6))), (((var_11 && var_2) ? (8514 % 36313972706993998) : (min(var_3, var_5)))))))));
    #pragma endscop
}
