/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 24;i_4 += 1) /* same iter space */
                            {
                                var_11 = ((max(3958230190115981838, (8668529553749336724 / var_2))));
                                arr_14 [i_4 - 1] [i_3 + 3] [i_0] [i_1] [i_0] [i_0] [23] = ((((min(((var_2 ? (arr_2 [24] [i_1]) : (arr_0 [i_0]))), (max((arr_12 [i_0] [i_3] [17] [i_2 - 2] [i_3]), (arr_2 [i_3] [i_3])))))) * (36428 & 2462476737)));
                                var_12 = (((((((max(var_8, (arr_10 [i_0] [i_3] [i_2] [i_1] [i_0])))) ? var_2 : (((arr_6 [i_0] [i_0] [i_0] [i_3 - 4]) % var_3))))) ? (max(var_0, ((var_1 ? var_0 : (arr_9 [i_0] [i_4] [i_4 + 1] [i_3]))))) : ((((((arr_6 [23] [23] [2] [i_4]) & (arr_2 [i_0 + 1] [i_1])))) ? 1 : (max(var_7, var_6))))));
                                arr_15 [17] [i_0] [i_0] [i_3] [i_2] = (arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0]);
                                var_13 = var_7;
                            }
                            for (int i_5 = 2; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] = var_1;
                                arr_19 [i_0] [i_3 + 1] [2] [i_0] [i_2 - 2] [i_1] [i_0] = ((((((16253 ? var_10 : var_7)) * (((7 ? 3824529986 : 1848314746))))) | var_4));
                                arr_20 [i_0] [i_0 + 4] [i_0 + 3] [i_0] [i_0] [i_0] = var_7;
                            }
                            var_14 = ((0 == (((!(arr_8 [i_0]))))));
                            var_15 = ((((min((((arr_9 [i_0] [i_2] [i_1] [i_0]) ? var_8 : 49283)), var_3))) ? (((1 + 4004317831) & (var_8 & 3888127627))) : (min(1, 1099511627775))));
                            var_16 = (((((((4128639102 ? var_7 : 1)) + (((var_4 ? var_1 : var_1)))))) ? (max((((var_2 ? var_5 : 2147483647))), (min((arr_2 [i_0] [1]), var_0)))) : var_2));
                            var_17 = ((-var_10 ? ((((((arr_1 [i_0]) & var_1))) % ((var_2 ? var_3 : var_10)))) : (((max((arr_8 [i_0]), var_9)) / (var_3 & var_5)))));
                        }
                    }
                }
                var_18 = ((var_0 ? (var_3 + 1) : (arr_11 [i_0] [i_1] [1] [13] [i_1])));
            }
        }
    }
    var_19 = ((var_0 ? ((((((var_5 ? var_4 : var_4)) < (var_10 - var_6))))) : (max((((-32767 - 1) % var_4)), 0))));
    var_20 = (!var_6);
    var_21 = ((((((var_10 * var_10) - (max(var_9, var_4))))) ? (((52 ? -975182355 : -348498496))) : ((var_9 ? (max(var_8, var_8)) : (((var_1 ? 4 : var_9)))))));
    #pragma endscop
}
