/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_5;
    var_19 = (max(var_19, (((((max(var_8, (var_9 + -1981107833)))) ? ((min(((-32755 ? var_5 : var_12)), ((var_0 << (var_16 - 155)))))) : ((var_5 ? var_17 : (((var_2 ? var_11 : var_16))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 -= (((arr_0 [i_0]) ? var_4 : var_13));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] = var_5;
                    arr_8 [i_0] [15] [i_2] = ((-(arr_4 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
        arr_9 [i_0] [i_0] = 3602938548;
        var_21 = (min(var_21, (((var_2 ? ((32757 ? 1613845750 : -32764)) : (((((arr_1 [18]) + 2147483647)) >> (((arr_6 [i_0]) - 70)))))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (~var_7);

        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_22 = (min(322657316, (arr_2 [1] [i_4 + 2] [i_4 + 1])));
            var_23 -= (max(((17839277873319272436 ? 32751 : 32763)), ((var_1 ? (arr_4 [i_4] [i_4 + 2] [i_3] [i_3]) : (arr_3 [i_4 + 2])))));
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 = (((arr_17 [i_3]) ? var_14 : -var_6));
            var_25 -= (arr_10 [16]);
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] = ((~((max(var_1, (arr_2 [i_6] [i_6] [i_6]))))));
        var_26 = var_10;
        arr_23 [i_6] = (max(-7691467053599885827, 2147483647));
        var_27 = var_2;
    }
    var_28 = min(((((((min(var_7, 32746)))) != var_13))), var_7);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            {
                var_29 = ((var_17 * (((arr_20 [i_8] [i_8 + 1]) ? (arr_4 [i_7] [i_8 + 1] [i_8] [i_8 - 3]) : (var_12 >= var_9)))));
                arr_29 [1] [1] [i_7] = (min((var_14 + var_0), ((min(var_14, var_3)))));
                arr_30 [11] = (max(((max((!var_6), 128))), -var_9));
            }
        }
    }
    #pragma endscop
}
