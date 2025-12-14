/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (-18 + -6);
        var_18 = (var_1 ? var_10 : var_15);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (min(var_19, (var_5 || var_1)));
            var_20 = var_13;
            var_21 = ((~(~var_5)));
            var_22 = var_14;
            arr_7 [i_0] = -var_2;
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_23 = (!(((var_3 ? var_12 : var_13))));
            var_24 = (min(var_24, ((((var_17 + var_3) - var_2)))));
            var_25 = (((var_11 ? var_8 : var_4)));
            arr_11 [i_0] = (((192 * 3199046686803662703) ^ var_15));
            var_26 = (min(var_26, ((-(var_8 + var_6)))));
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_27 = (min(var_27, (((((((max(var_16, var_17)) * (var_15 / var_17)))) < var_13)))));
        var_28 = (min(var_28, ((((min(-var_14, var_10)) | ((-(var_12 - var_3))))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_29 = (min(var_29, ((((17 >> ((((var_14 ? var_9 : var_17)) - 9852047018146901232)))) / ((min((var_12 ^ var_17), (var_5 || var_3))))))));
        var_30 = (((((1 != 17) ? var_16 : var_17)) < var_8));
    }
    var_31 = ((~(~var_6)));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_32 = (max(var_32, ((((((~(var_6 | var_0)))) % (((~var_6) % var_7)))))));
                    var_33 = (var_15 || var_6);
                    arr_24 [i_5] [i_6] [i_6] = (-((~(~var_10))));
                }
            }
        }
    }
    var_34 = var_10;
    #pragma endscop
}
