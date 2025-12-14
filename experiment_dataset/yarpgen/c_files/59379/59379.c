/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (min(((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))), var_13));
        var_20 = var_15;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                var_21 = (arr_10 [i_1] [i_2]);
                var_22 = (min((+-32759), (min(3716111471547722278, 1205252390))));
                var_23 = var_8;
                var_24 = (min(var_24, (((var_9 ? (((var_5 < 0) ? (((2 << (-58 + 59)))) : ((var_13 ? 14730632602161829337 : -32759)))) : ((((0 != (arr_0 [i_2 - 1]))))))))));
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_25 = (((2250023656 ? 61566 : (min(3974, 18446744073709551615)))));
                            var_26 -= var_4;
                        }
                    }
                }
            }
            var_27 -= (((!var_13) ? (var_18 - 1885886567197645130) : (var_3 - var_7)));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_28 -= ((!((min((var_6 < var_7), (26140 / var_7))))));
                    arr_24 [6] [i_1] [2] [i_8] = var_4;
                    var_29 = (max(var_29, (!0)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_30 = (((min(var_3, (((0 ? 3945 : 2719352248858534934))))) < (var_2 != var_3)));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_1] [i_9] [1] [i_1] = 1;
                        var_31 = ((((((arr_19 [i_1]) - var_18))) + (-3190838493382478418 - 119)));
                        arr_35 [i_1 + 2] [i_1] = (arr_11 [i_1] [i_9] [i_1]);
                        arr_36 [i_1] [i_1] [10] [i_11] [i_1] = (((!(((arr_21 [i_1]) != 304)))));
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        var_32 = (min(-1, ((((!0) && (((18446744073709551615 ? -8192 : 1532799380))))))));

                        for (int i_13 = 4; i_13 < 9;i_13 += 1)
                        {
                            var_33 = ((((-1 ? 65231 : 304)) % 5194));
                            arr_44 [i_13] [i_13] [i_13] [i_1] |= var_11;
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_48 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1] = (((var_7 + var_1) ? (((var_15 ? 1 : var_10))) : ((16777215 & (var_18 * var_5)))));
                            arr_49 [i_1] [i_1] [5] [i_1] [i_1] [i_14] = var_12;
                            var_34 = (((3716111471547722293 ? 2511581317090565273 : 14730632602161829338)) + (min(61566, (~var_6))));
                            arr_50 [i_1] = (min((((((min(2576920105, 60))) != 8164800054303170665))), var_10));
                        }
                        arr_51 [i_12] [i_1] [i_1] = ((-1236517117 < (-1236517118 < var_17)));
                        arr_52 [i_1] = ((-1 ? 3 : ((((arr_3 [i_1]) || -24356)))));
                    }
                }
            }
        }
    }
    var_35 = (max(var_35, 1048575));
    var_36 = (((min((1 | 1), ((var_6 ? var_11 : -5194))))) | (((((var_2 ? 90 : 14312))) | ((var_15 ? var_2 : var_9)))));
    #pragma endscop
}
