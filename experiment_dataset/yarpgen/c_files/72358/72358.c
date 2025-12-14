/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_11 = (max(var_1, (!127)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (((((((-1 ? 32736 : 2728643788)) / var_7))) ? (((((var_8 / (arr_6 [i_0]))) / (arr_6 [i_0 + 3])))) : (-7987238843015512449 / -15699)));
                    var_13 = (((max(var_7, (arr_3 [i_0]))) % (max(var_1, (arr_8 [i_0 - 1] [1] [i_2 + 1])))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_14 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : 60409));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] = var_10;
                    }
                }
            }
        }
        var_15 = (max(var_15, 141));

        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            var_16 = (((-var_5 <= 78) ? (((((arr_16 [i_0] [i_4]) <= var_7)) ? -var_0 : -var_4)) : ((126 ? ((4143486412 ? (arr_3 [i_0]) : var_8)) : var_0))));
            arr_17 [i_0] [i_0] [i_0] = ((((((!(var_7 < var_0))))) % var_3));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_24 [i_0] [17] = ((~((-929836113 ? (-2118516002 % var_6) : var_4))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_17 = (((var_6 ? var_1 : var_6)));
                            arr_27 [i_0] [i_0] = (arr_25 [i_4 + 1] [i_0] [i_4 + 1]);
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            arr_30 [i_0] [i_4] [i_5] [i_0] [i_6] [i_0] = ((-((var_1 ? 6 : var_0))));
                            var_18 = (((arr_9 [i_5]) <= (arr_9 [i_0 + 2])));
                            arr_31 [i_0] [i_4] [i_0] [i_6] [i_4] = ((146 ? var_0 : 37706));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_19 = (min(var_19, (((var_9 ? (((var_9 ? var_4 : ((max(var_5, (arr_23 [i_4] [i_5] [i_9] [i_9]))))))) : (arr_3 [i_9]))))));
                            arr_35 [i_0] [i_4] [i_0] = 209;
                        }
                        for (int i_10 = 4; i_10 < 18;i_10 += 1)
                        {
                            var_20 ^= max(((var_7 ? ((var_2 ? 130 : var_10)) : ((max(1, 57))))), (((((1703837572772707136 ? 65535 : 3511502347)) <= ((((!(arr_3 [i_10])))))))));
                            var_21 = (((var_2 ? var_8 : var_2)));
                        }

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            var_22 = (arr_36 [i_4 - 1]);
                            var_23 = (((arr_38 [i_0 + 3] [i_4] [i_5] [i_6] [i_6] [i_0 + 2]) ? ((-3660 ? var_0 : var_2)) : (1 <= var_2)));
                            arr_40 [i_0] [i_4] [i_5] = (((arr_14 [i_0] [i_4] [i_4]) ? (((arr_21 [i_0] [i_4] [7] [i_6 + 3]) ? var_9 : 0)) : (arr_20 [i_0 - 1] [i_0] [i_0 + 1])));
                            arr_41 [i_0] [i_0] [i_0] = var_9;
                        }
                    }
                }
            }
            arr_42 [i_0] [i_0] [i_4] = ((!(((-959311417 ? -2 : 68719476735)))));
        }
    }
    var_24 *= var_0;
    var_25 = ((-(((min(var_3, 1)) / var_3))));
    #pragma endscop
}
