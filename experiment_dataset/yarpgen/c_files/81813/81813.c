/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_12 ? (((24726 & (max(var_13, 308879589))))) : (max(((min(var_11, var_7))), (max(7577339834460252723, var_3)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (((max((min(-59, var_7)), ((((arr_1 [i_0]) || (arr_1 [i_0]))))))) ? ((min((arr_1 [i_0 - 2]), var_7))) : var_10);

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_17 = ((((min(((var_11 ? -1287620368229732633 : var_1)), (arr_3 [14] [i_1])))) ? var_9 : ((~((var_0 ? var_8 : 209))))));
            var_18 += (((((((min((arr_1 [i_0]), var_12))) ? (arr_2 [i_0 + 2] [i_0] [i_0]) : 44))) ? (((~(arr_1 [i_0])))) : ((((((arr_0 [i_1]) ? 1175552330 : 54886))) ? (max(var_6, var_1)) : (((min(var_8, (arr_3 [i_0] [i_0])))))))));
            arr_4 [i_0] [7] = (min(((((138 ? var_2 : (arr_3 [i_0] [7]))) * (arr_2 [i_0 + 2] [i_1] [2]))), ((var_4 ? (1 / 19) : 28))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0 - 1] = (((((var_13 ? (arr_2 [i_0] [i_2] [i_2]) : var_12)) << (4169900873 - 4169900845))));
            arr_9 [i_0] [i_2] = 2444778870;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 = (max(var_19, (arr_7 [i_3] [i_3] [i_3])));

        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            var_20 = (max(var_20, var_7));
            var_21 = ((((-8369845895169507884 ? (arr_2 [i_3] [i_4] [i_4]) : 48))) ? (~41117080) : 62510919);
            var_22 *= 656388104;

            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                arr_19 [i_3] [i_4 + 2] [i_5] [i_5] = (((arr_13 [i_4 + 2]) | 77));
                var_23 = (max(var_23, (arr_13 [i_4])));
            }
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_24 = (arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 2]);
                arr_23 [i_6] = ((1 ? 0 : (arr_5 [i_4 + 2] [i_3])));
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                arr_26 [i_3] [i_4] [i_7] [i_7] = (arr_22 [i_3] [i_3]);
                arr_27 [i_3] [i_3] [i_3] [i_3] = ((-255490004 ? 3392329237 : 35184372088320));
                arr_28 [i_7 - 1] = ((4194303 ? 5216995198918813801 : 1));
            }
        }
        var_25 = (arr_24 [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_33 [i_8] = ((((arr_30 [i_8]) <= var_2)));
        arr_34 [9] [i_8] = 1;

        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            var_26 = (max(var_26, -35));
            arr_37 [i_9] = ((1 ? (arr_6 [i_8] [i_9 - 1] [i_9]) : 65504));
            var_27 = ((((((arr_3 [i_9] [i_9]) ? (arr_2 [i_8] [i_8] [i_8]) : var_11))) ? ((((arr_32 [i_8] [i_9]) >> (51037 - 51017)))) : var_1));
            arr_38 [i_9] [i_9] [i_9] = (((arr_3 [i_9 + 2] [i_9 - 1]) & var_14));
        }
    }
    #pragma endscop
}
