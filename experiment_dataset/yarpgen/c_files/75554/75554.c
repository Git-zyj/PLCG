/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 -= (max((((var_5 ? 43475 : var_6))), ((min(65535, var_2)))));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_0] [i_3 - 1] = (((((1 ^ (var_10 ^ var_8)))) ? var_15 : ((65520 ? 9729 : -1449974430))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1] [i_3] = 65535;
                            arr_15 [i_0] [3] [i_2 - 2] [i_1] [i_0] = ((1 ? 1784347755908454732 : 1));
                            var_17 = (var_14 < 1011);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, 65535));
                            arr_20 [i_1] [i_1] [i_1] = 65535;
                            var_19 = var_5;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_3 - 1] [i_6] = (max((max(127, (var_15 + 8860429570870307856))), ((max((max(772393825, 0)), ((65535 / (-127 - 1))))))));
                            var_20 = (18446744073709551615 - 1);
                            var_21 = ((max((((-26267 ? 1542847776 : -4040312420735336838))), (max(4294967295, 0)))));
                            var_22 = 0;
                        }
                        arr_24 [i_3 - 1] = 43422;
                        arr_25 [i_0] [1] = (((max(8992409821572005195, var_13))));
                    }
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        var_23 = (41843 - var_1);
                        var_24 = 24;
                    }
                }
            }
        }
    }
    var_25 = ((4294967295 ? 7239 : 1011));
    var_26 = ((((max(((max(var_10, 1))), (1011 + var_10)))) / (max(102, 18446744073709551593))));
    #pragma endscop
}
