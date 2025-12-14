/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 114;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_11 = (249 != 1);
        var_12 = var_4;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_10 [i_1] [i_1] [i_3] [i_1] = ((0 ? (((((min(var_0, var_4))) ? (arr_2 [i_1] [i_3]) : var_3))) : (arr_0 [i_1])));
                var_13 = 10;
            }

            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_14 += var_9;
                var_15 = (51 * 8236659578397997710);
                var_16 = var_2;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                var_17 = (arr_9 [9] [5] [i_5] [i_2]);
                var_18 = (((((+(((arr_4 [i_1]) >> (233784185 - 233784167)))))) ? (max(var_8, 8236659578397997710)) : (((var_9 % 38221) & var_8))));
            }
            var_19 = (min(var_19, (~var_2)));
            var_20 = var_2;
            var_21 = var_1;
        }
        var_22 = (min(((((548725406 & (arr_8 [i_1] [i_1] [i_1] [i_1]))))), (((arr_15 [i_1]) + (((var_0 >= (arr_7 [i_1]))))))));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_20 [i_6] = var_3;
        var_23 = var_7;
        var_24 = (arr_0 [i_6 - 1]);
    }

    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_25 ^= -120;
        arr_24 [i_7] [i_7] = (((((-548725399 && 27314) * (((arr_21 [i_7]) - (arr_21 [i_7])))))) != ((min(var_9, var_9))));
        var_26 = var_2;
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_27 = var_9;
        var_28 = (max((arr_23 [i_8]), (((((7023525112631408602 ? -10 : 5540883662663727253))) ? (arr_21 [i_8]) : (arr_21 [17])))));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_29 [i_8] [i_9] [i_9] = max(var_9, (-11 - var_9));
            var_29 = ((var_4 ? (arr_28 [i_8] [i_9]) : var_3));
        }
        arr_30 [i_8] = -1;
    }
    var_30 = var_5;
    var_31 = (~var_3);
    #pragma endscop
}
