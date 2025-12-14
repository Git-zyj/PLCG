/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = (min(((~((220 << (43 - 29))))), (~229)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [4] = var_10;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = ((((min(((-(arr_9 [i_3] [i_1] [i_2]))), ((((arr_0 [i_0]) == var_7)))))) ? (arr_5 [i_1]) : (max((arr_2 [i_0] [i_0]), (((-1 < (arr_9 [i_0] [i_0] [i_2]))))))));
                        var_22 = ((((((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]) < (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) >= (((arr_11 [i_0] [8] [7] [i_2] [i_1 - 1]) * (arr_11 [i_0] [i_0] [i_2] [i_3] [i_1 - 1])))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = (((((4294967295 || (arr_9 [i_0] [11] [i_2])))) >= (((!(arr_9 [i_0] [i_1 - 1] [i_2]))))));
                        var_23 = (max(var_23, ((((arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]) | (((arr_10 [i_1 - 1] [i_1 - 1] [i_2]) ? (arr_10 [i_1 - 1] [i_1 - 1] [i_3]) : (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_24 *= (max((arr_19 [i_0] [i_0] [i_2] [4] [i_0] [10]), (arr_7 [i_0] [i_1 - 1] [i_0])));
                                arr_20 [i_2] [i_2] = (((!1732633875) ? (min((arr_9 [i_2] [6] [i_2]), 3815967102)) : (((min(214, (arr_4 [7] [i_5])))))));
                                arr_21 [i_0] [i_0] [i_2] [i_2] [9] [9] = ((((max(1, (max(51274, (arr_2 [i_2] [i_2])))))) ? (arr_6 [7] [7]) : ((max((((!(arr_6 [i_1] [i_5])))), (arr_16 [i_2]))))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_25 -= (min(7, ((~((max(-10, 214)))))));
                        var_26 = (min((((var_7 ? (arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_22 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))), var_19));
                        arr_25 [i_0] [i_2] = ((((var_18 + var_11) != (((arr_0 [i_0]) ? (arr_2 [i_0] [i_2]) : 1)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [1] [i_2] [i_2] [1] = (((-10 + 2147483647) << (var_7 - 23)));
                        arr_30 [i_2] [i_1] [i_7] = (arr_19 [i_7] [i_0] [i_2] [i_0] [i_1] [i_0]);
                        var_27 = (i_2 % 2 == 0) ? (((0 << (((arr_9 [i_1 - 1] [i_1 - 1] [i_2]) + 40))))) : (((0 << (((((arr_9 [i_1 - 1] [i_1 - 1] [i_2]) + 40)) - 133)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_33 [i_2] = (arr_15 [i_1 - 1] [i_2] [i_1 - 1] [i_2] [i_1 - 1]);

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_28 = (((arr_27 [i_0] [i_1 - 1] [i_2] [i_1] [i_2] [i_2]) + var_6));
                            var_29 = (max(var_29, ((((((58 ? (arr_23 [16] [i_2] [16]) : (arr_5 [12])))) ? (arr_7 [i_1 - 1] [i_1] [i_2]) : 220)))));
                        }
                    }
                    var_30 = (((arr_22 [i_1 - 1] [i_1] [i_1 - 1] [i_0]) ? ((((((arr_9 [i_0] [9] [i_2]) % -1986376566142775864)) != ((((!(arr_24 [i_0] [i_1] [i_1] [i_1])))))))) : (arr_26 [i_0] [9] [i_0] [i_0] [i_0])));
                }
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    var_31 = (max(var_31, (((var_8 ? (((arr_3 [i_10]) * (~0))) : 76)))));
                    var_32 = 0;
                    arr_39 [i_0] [13] = ((var_6 / (arr_35 [i_0] [i_1] [i_1] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
