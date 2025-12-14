/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (min((((var_12 != (arr_1 [i_0 - 1])))), (max((arr_0 [i_0 + 1]), var_5))));
        var_13 = var_10;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 |= min((((1 ? var_5 : (arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2])))), ((max(((min(1, 95))), 65024))));
            arr_5 [i_0 - 1] [9] [i_1] = (min(((((arr_3 [i_0 + 2]) >= (max(4294902268, 9794))))), ((var_2 ? (((arr_3 [i_0 + 2]) ? (arr_3 [i_1]) : var_2)) : (arr_1 [20])))));
            arr_6 [i_0] [i_1] [i_1] = (arr_1 [i_1]);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_15 ^= (min(var_6, 214));
            arr_10 [i_0] [i_0] [i_0] = var_7;
            arr_11 [i_0] [i_2] [i_2] = (arr_0 [i_0]);

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_14 [i_3] [i_2] [i_3] = (max(((var_5 ? var_2 : (arr_3 [i_0 + 2]))), ((min((arr_3 [i_0 - 1]), var_9)))));
                var_16 = (min(65005, 18446744073709551615));
                var_17 = ((((((((var_4 ? 1 : var_0))) ? (arr_3 [i_0 + 2]) : (var_3 / var_10)))) ? var_3 : (((!(arr_3 [21]))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_21 [i_5] [i_0] [i_0] = (((arr_7 [i_5]) ? (arr_7 [i_2]) : var_12));
                            var_18 = ((var_3 ? (((arr_17 [i_0] [i_0] [1] [i_5] [i_6] [i_4]) ? 18446744073709551610 : 4294902263)) : (0 <= var_11)));
                            var_19 = 4917460340312739354;
                            arr_22 [i_6] = ((var_6 ? var_5 : var_12));
                        }
                    }
                }
                var_20 -= ((-(arr_15 [i_0 + 1] [i_0 + 1])));
            }
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            arr_26 [i_7] [i_0] = ((!(((4191902827599727915 + var_9) && ((min(var_1, var_2)))))));
            arr_27 [i_0] [i_7] [19] = (max((arr_3 [i_0 + 1]), (((arr_13 [i_7] [i_7] [i_7]) / 4294902265))));
        }
    }
    var_21 = (((max(var_11, ((var_4 ? var_10 : var_4)))) + (var_11 * 1)));
    #pragma endscop
}
