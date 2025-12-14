/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 ^= (4646967168325398093 ? (((-1787371555059850412 ? 18446744073709551615 : 126))) : (max((arr_0 [12] [12]), 0)));
        arr_2 [i_0] [10] |= (arr_1 [i_0] [2]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 ^= (max((arr_3 [i_1]), (((((((arr_0 [0] [i_1 - 1]) && 1787371555059850412))) <= 186168124580458405)))));
        var_22 = (arr_4 [i_1 - 1]);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_23 = (max(2147483647, (arr_7 [i_1] [i_2] [i_1])));
            var_24 = (max(var_24, (((((((!(((4294967295 ? -26896 : -1787371555059850412))))))) != (~3604287119))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_25 &= var_0;
                        arr_14 [i_1] [i_2] [i_3] [9] [i_4] = (max(((((!var_15) ? (((!(arr_4 [i_1 - 1])))) : (max(var_10, 0))))), 3457985429));
                        arr_15 [i_2] = (arr_5 [i_2] [i_3]);
                    }
                }
            }

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_26 = max(1513383515778294031, (((arr_13 [i_1 - 1] [i_2] [8] [i_2]) * ((114 ? var_16 : var_13)))));
                arr_18 [1] [i_2] = (((((-(((arr_9 [i_2] [i_2] [2]) << (var_5 - 181)))))) ? (((((max(var_7, var_7))) <= 26902))) : (((arr_4 [i_1 - 1]) + (arr_4 [i_1 - 1])))));
                var_27 = var_8;
            }
            arr_19 [i_2] [8] = (arr_9 [i_2] [i_2] [i_1 - 1]);
        }
        var_28 += (arr_10 [0]);
        var_29 = (min(var_29, (((((-2147483647 / ((max((arr_12 [0] [0]), var_9))))) <= (arr_5 [2] [2]))))));
    }
    var_30 = 9;
    var_31 = 127;
    #pragma endscop
}
