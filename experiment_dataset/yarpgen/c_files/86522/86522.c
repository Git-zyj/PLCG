/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_3 ? ((max((min(var_8, var_5)), var_11))) : (1 > 1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [10] [i_1] [i_2] [6] [6] [i_1] = (((var_17 > -1) ? var_5 : (((10616736381059362087 < (arr_0 [i_3]))))));
                            var_19 *= ((!(((var_5 >> (((var_15 == (arr_0 [i_0])))))))));
                            var_20 = (min(var_20, (((0 * (((1 < (arr_2 [i_3])))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_5] = var_1;
                            var_21 = (max(var_21, (((-7381957259392997435 ? 2436392934 : var_0)))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_22 = var_12;
                            var_23 = (min(var_23, (((!(var_8 ^ var_0))))));
                            var_24 = (((((var_2 || (arr_9 [1] [10] [1] [i_0] [i_0])))) ? (max(((0 ? var_6 : var_8)), (((1 ? 255 : var_0))))) : -123));
                            arr_18 [i_6] [i_3] [17] [i_1] [i_0] = min(127, 405168612083590437);
                        }
                        var_25 = ((((var_7 ? 76 : var_12))));
                        var_26 *= (((max(((9223372036854775807 / (arr_8 [i_0] [i_1] [i_2] [i_0] [i_2]))), (arr_9 [i_3] [i_2] [i_1] [i_1] [i_0]))) >> (1 != 123)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_26 [i_8] [i_8] [i_8] = ((11295158021223240408 ? ((var_3 ? var_12 : ((var_16 ? (arr_11 [i_0] [i_7] [i_8] [6] [i_0]) : 405168612083590437)))) : ((-9223372036854775807 ? var_9 : ((var_14 ? 0 : (arr_25 [i_8] [i_8] [i_8] [i_8 - 1])))))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_27 = (((arr_24 [i_0] [i_8 + 2] [i_8 + 2] [i_10] [i_8] [1]) ? var_7 : -123));
                            arr_29 [i_10] [i_8] [i_8 + 2] [i_8] [i_0] = ((11295158021223240408 ? (arr_23 [i_8 + 2] [i_8 + 1] [i_8 + 2]) : ((var_12 ? -1 : 2628167958506007341))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_28 += (((arr_21 [i_0] [i_8 + 1] [i_8 - 1]) ? var_12 : (arr_17 [7] [i_8 - 1] [i_7] [i_0] [i_0] [i_0])));
                            var_29 = ((~(arr_19 [i_8 + 1])));
                            arr_33 [i_11] [i_8] [i_8] [i_8] [1] = ((((((arr_28 [i_0] [i_7] [8] [i_7]) ? var_7 : 9223372036854775807))) ? (arr_6 [i_8 - 1] [i_8 + 2] [i_8 - 1]) : (arr_1 [i_8 + 1])));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            arr_37 [i_12] [i_8] [i_8] [i_0] = (var_6 - 11295158021223240408);
                            var_30 = 122;
                            arr_38 [i_8] [i_12] [i_8] [i_8] [i_7] [i_0] = ((var_15 ? var_10 : (arr_22 [i_7] [i_8 + 2])));
                            arr_39 [9] [i_9] [i_8] [i_0] [i_0] = (arr_6 [i_7] [1] [i_9]);
                        }
                        arr_40 [i_0] [i_8] [i_8 + 1] [i_9] = (max(6022807899999748574, 127));
                    }
                }
            }
        }
        var_31 = (((((-1679272424 ? -126 : 1))) ? ((max(1, 42084))) : 1));
    }
    var_32 = var_13;
    #pragma endscop
}
