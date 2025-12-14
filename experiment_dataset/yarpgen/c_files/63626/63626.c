/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (max((arr_2 [i_1] [i_0]), ((((((var_2 ? 0 : 0))) && ((max(var_6, var_3))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (arr_8 [i_4] [i_1]);
                                var_12 = (arr_7 [i_4 + 1]);
                                arr_14 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] = ((521937107561677430 ? ((var_10 ? 6874881437595638702 : 1)) : var_9));
                                var_13 = (min(var_13, (((((min(var_6, (arr_4 [i_0])))) / (2147483647 * var_5))))));
                            }
                        }
                    }
                    var_14 = (((((-((var_10 ? var_4 : var_0))))) ? var_8 : (((((1 ? var_8 : -792100573))) ? var_5 : ((((arr_1 [i_2]) ? (arr_3 [i_2] [i_1]) : (arr_10 [i_2] [i_0]))))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_15 = ((var_6 ? (max((max((arr_11 [i_5]), var_6)), 11571862636113912913)) : ((min(var_0, (arr_17 [i_5] [i_6]))))));

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_16 ^= (arr_15 [i_5] [i_5]);
                            var_17 = (min(var_17, 17924806966147874190));
                            var_18 = ((var_10 ? (((~-889915793187813873) ? (-2147483647 - 1) : ((17924806966147874175 * (arr_26 [i_5] [i_6] [i_7] [i_8] [i_8] [i_9]))))) : (arr_17 [i_6] [i_7])));
                            var_19 = ((((min((arr_24 [i_5]), (arr_24 [i_9])))) ? var_3 : (max((max((arr_3 [i_7] [i_7]), 0)), ((((-2147483647 - 1) ? (arr_10 [i_5] [i_5]) : var_10)))))));
                        }
                    }
                }
                var_20 = (((arr_0 [i_5] [i_5]) ? (arr_16 [i_5]) : ((var_6 ? (arr_11 [i_6]) : ((((arr_25 [i_5] [i_5]) ? (arr_2 [7] [i_5]) : 112)))))));
                arr_28 [i_5] [i_5] [i_5] = (min((min(0, 3874560100902283034)), ((max((arr_1 [i_7]), ((-(arr_18 [9] [i_6] [9]))))))));
                arr_29 [i_5] [i_7] = (arr_12 [i_7] [i_6] [i_6] [i_6] [i_5] [i_5]);
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_38 [i_5] [i_10] [i_6] [i_10] [1] [i_12] = ((4779594573199368355 ? ((((arr_15 [i_11] [i_6]) ? (arr_34 [i_5] [0] [i_10] [i_10] [i_11] [i_12]) : 1661230476))) : ((255 ? (arr_24 [i_12]) : (arr_24 [i_12])))));
                            var_21 -= ((~(arr_18 [i_5] [i_6] [i_12])));
                            var_22 = (((((-(arr_12 [i_5] [i_5] [1] [i_5] [i_11] [i_12])))) ? (2147483647 <= -1) : var_5));
                        }
                    }
                }
                var_23 = (((((~(((arr_5 [i_10] [i_5] [i_5]) ? var_0 : -11))))) ? 23168 : ((151 ? (max(var_5, (arr_36 [i_5] [i_6] [i_5] [i_10] [i_10]))) : 2147483647))));
                arr_39 [i_6] [i_10] [i_6] = ((var_5 ? var_5 : (var_8 ^ 0)));
            }
            arr_40 [i_5] [i_5] = (var_7 ? (min(((min(var_10, var_3))), ((var_3 * (arr_27 [i_5] [i_5] [i_5] [7]))))) : ((min(16385, 1))));
            var_24 = (max(var_24, (max(var_8, (arr_34 [i_6] [1] [4] [i_5] [i_5] [i_5])))));
            var_25 = ((var_5 ? (arr_0 [i_5] [i_5]) : (max((arr_33 [i_5]), (max(var_5, (-9223372036854775807 - 1)))))));
        }
        arr_41 [i_5] [i_5] = (max(1, 1));
    }
    #pragma endscop
}
