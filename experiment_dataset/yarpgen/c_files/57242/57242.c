/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_1 && var_2);
    var_17 = 1930242797;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] = (((var_3 ? 135 : var_4)));
            var_18 = var_12;
            var_19 -= (((arr_3 [i_1 + 1] [i_1 + 2] [i_1 - 2]) ? (arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 3]) : var_11));
            var_20 = (((var_9 >> (135 - 113))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = (((arr_0 [i_0]) - 135));

            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                arr_10 [i_3] [i_0] [i_2] [1] = var_8;
                var_22 = (100 ? (arr_8 [i_0] [i_3] [i_3 + 1] [i_3 + 1]) : ((var_11 ? var_15 : (arr_8 [i_0] [i_3] [i_2] [i_3]))));
                var_23 ^= var_5;
            }
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                var_24 = 132;
                arr_15 [17] [1] [1] = (!684673710);
                var_25 = (-32767 - 1);
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_26 *= (((!(arr_9 [i_0] [i_2] [i_5] [i_5]))));

                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    arr_21 [i_0] [i_0] [i_6 + 1] [i_6] [i_0] = (((((-(arr_3 [i_0] [i_2] [i_0])))) ? (arr_20 [i_6] [i_5] [i_2] [i_6]) : (((var_8 ? (arr_11 [11] [3] [1] [i_2]) : 255)))));
                    var_27 = (arr_19 [i_6 - 3] [i_6 - 3] [i_6 - 2] [i_6 + 1]);
                    arr_22 [i_6] [i_5] [i_5] = (((132 | var_13) ? (arr_12 [i_0] [i_5]) : (arr_20 [i_6] [i_0] [i_5] [i_6 - 3])));
                    var_28 = (((arr_18 [i_6 - 3] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 1]) != (arr_18 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 3])));
                }
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_29 = (max(var_29, (arr_23 [i_0] [i_2] [i_0])));
                var_30 = (((((arr_18 [i_0] [3] [i_0] [i_2] [i_2]) - 28))) ? var_9 : ((var_13 ? var_9 : (arr_11 [1] [1] [i_2] [7]))));
            }
        }
        var_31 = -32760;
        arr_25 [i_0] = var_13;
        var_32 = (min(var_32, (((-(arr_20 [i_0] [i_0] [i_0] [i_0]))))));
        var_33 = arr_2 [8];
    }
    var_34 = (min(((((var_12 + var_8) && (~var_10)))), var_0));
    #pragma endscop
}
