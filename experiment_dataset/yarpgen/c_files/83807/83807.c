/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((((var_4 ? var_0 : var_0))) ? 85 : var_8))));
    var_14 = (min(var_14, ((((var_11 + 9223372036854775807) >> 15)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((-2147483647 - 1) >= (arr_0 [i_0 - 1] [i_0 - 2])));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1 - 1] = var_3;

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_15 += 16320;
                var_16 = (-127 - 1);
                var_17 = ((((var_3 ? var_3 : (arr_7 [i_0] [i_1]))) <= (((-127 - 1) / -124))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_18 = (((arr_3 [i_1 - 1] [i_0 - 2] [i_3]) ^ 64385));
                var_19 = arr_9 [i_0] [i_1] [1] [i_3];
                var_20 = (min(var_20, ((((~var_10) ? (~var_6) : (arr_9 [i_0 + 1] [i_1] [i_3] [i_1 + 1]))))));
                var_21 = ((arr_0 [i_1 + 1] [i_1 - 1]) ? ((var_9 ? 12364369596941817626 : (arr_6 [i_1] [i_1] [i_1 - 1] [i_1 + 1]))) : ((((arr_9 [i_3] [i_3] [7] [i_0]) ? var_2 : -1))));
                var_22 = (min(var_22, var_0));
            }
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                arr_14 [8] [i_4] = ((0 ? 0 : 37789));
                var_23 = (arr_11 [i_0] [i_1] [i_4 + 1]);
                arr_15 [i_4] = (255 / var_7);
            }
            arr_16 [i_0] [i_1 - 1] = -1;
        }
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (((((-((min(var_6, 62800)))))) ? var_2 : (((((var_7 ? (arr_11 [i_5] [i_5] [19]) : 1254347887))) ? 57 : ((235 ? 1 : (arr_12 [i_5 - 1] [i_5] [i_5] [20])))))));
        arr_20 [i_5] [i_5 - 2] = ((-var_0 * ((var_9 * (var_2 / var_5)))));
        arr_21 [i_5 + 1] [i_5 + 1] = (min(((37789 ? -1254347887 : 0)), 127));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_24 = ((10224983653791599830 + (((((1 ? (arr_9 [i_6] [i_6] [i_6] [i_6]) : var_2))) ? (arr_18 [i_6] [i_6]) : ((0 ? 1258185185 : -22357))))));

        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            arr_27 [i_7] [i_7] = (((!1) >= (((!(((arr_11 [i_6] [i_6] [i_7 - 1]) == 22)))))));
            var_25 = ((!(((-((((arr_26 [i_7]) || 7))))))));
        }
        for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_26 = (8854651188201980069 ? 465057210 : ((0 ? ((var_5 ? 8854651188201980096 : var_8)) : (((var_7 ? var_3 : 27734))))));
            arr_30 [i_6] [i_6] [i_8 + 2] = (max((((arr_4 [i_6] [i_8]) ? (min(var_10, (arr_13 [i_6] [i_8 - 2] [i_8] [i_6]))) : ((min(var_5, -7))))), 0));
            arr_31 [i_6] [i_8] = (-127 - 1);
            arr_32 [i_6] [i_6] [i_6] = ((((((arr_0 [i_6] [21]) ? ((max((arr_13 [i_6] [i_6] [i_8] [i_8]), 24937))) : (var_9 == 18446744073709551615)))) ? var_4 : ((9888 ? 0 : -1))));
        }
        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_35 [i_6] = (((~var_9) >= ((((0 ? 601766561 : 27734)) - (arr_3 [i_6] [i_6] [i_6])))));
            var_27 = ((18446744073709551615 ? 87111953 : 65534));
        }
        arr_36 [i_6] [i_6] &= var_7;
    }
    #pragma endscop
}
