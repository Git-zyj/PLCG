/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 ? var_6 : (((-32767 - 1) ? ((var_2 ? 5806 : var_7)) : ((min(5813, 9512)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                        {
                            arr_15 [19] [i_1] [i_1] [i_1] [i_1] [13] = (arr_9 [i_4 + 1]);
                            var_14 = (arr_8 [i_1] [i_2] [i_3] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                        {
                            var_15 *= (2 ? (max(((min(5806, -673))), ((-(arr_5 [i_0 - 1]))))) : (((((((arr_9 [4]) || var_7))) > -5806))));
                            var_16 += 1535;
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (((-25548 ? ((max(8732, -5806))) : (arr_19 [i_0 - 1] [i_0] [10] [10] [i_0]))))));
                            var_18 += (arr_3 [i_6 + 1] [1]);
                            var_19 = (arr_13 [i_0 - 1] [i_3] [i_2] [i_0 - 1]);
                        }
                        var_20 ^= var_5;
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        arr_25 [i_0] |= (((arr_0 [i_0]) ? (((-5803 ? (arr_24 [i_0 - 1]) : (arr_5 [21])))) : (max(var_2, (((arr_22 [i_1] [21] [i_2] [1] [i_1] [i_0]) << (((arr_0 [6]) - 18167106178806687))))))));
                        var_21 = (min(((max(192, (arr_23 [20] [i_7 + 1] [i_7 - 1] [i_7 + 1])))), (((((1 ? (arr_1 [i_0 - 1]) : (arr_8 [i_7] [i_0] [i_1] [i_0])))) ? (arr_8 [14] [i_1] [14] [1]) : var_2))));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_28 [i_1] [i_8] = (((min((arr_9 [i_0 - 1]), (arr_18 [i_0] [1] [i_1] [11] [i_2] [9])))));
                        arr_29 [10] [10] [1] [1] [i_2] [2] |= 1048448;

                        for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_22 = (max(((((((arr_26 [5] [i_1] [6] [i_9]) ? -8732 : (-2147483647 - 1)))) ? (arr_2 [i_0]) : (((arr_19 [21] [i_1] [i_1] [1] [i_1]) ? 1 : (arr_4 [12] [8]))))), var_1));
                            var_23 = (2 ? 130048 : 0);
                            var_24 = (min((arr_0 [i_0]), (arr_30 [i_0] [i_0] [i_0] [i_2] [i_8] [i_9 + 1])));
                            arr_32 [i_0] [i_0] [i_9] [1] = var_7;
                        }
                        for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            var_25 = ((max(((-130049 ? (arr_22 [i_2] [i_1] [1] [i_8] [i_10] [i_10]) : (arr_22 [i_0] [1] [i_0] [1] [i_10 - 1] [14]))), -8743)));
                            var_26 ^= max((((~(arr_3 [i_0 - 1] [i_0 - 1])))), (((arr_3 [i_2] [i_2]) ? (arr_3 [8] [i_1]) : 10672726641349238995)));
                            arr_35 [11] [11] [7] [i_10] = ((((arr_0 [i_1]) ? (arr_22 [i_0 - 1] [i_1] [i_2] [20] [i_0 - 1] [i_10 + 2]) : (arr_0 [i_0 - 1]))));
                        }
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            var_27 = (((((-28679 ? -118 : 0))) ? ((0 ? (arr_21 [21] [i_0] [i_0] [7] [i_2] [i_0] [i_11]) : var_9)) : (!-8732)));
                            arr_38 [i_2] [4] [4] [i_11] [i_11] [i_0] = (min((((255 ? 43005 : 0))), (((((min(var_8, 0))) ? (min(0, -130049)) : -18631)))));
                        }
                    }
                    arr_39 [i_0] [i_0 - 1] [10] [i_2] = (-((1074410941 >> (((var_4 ^ 130048) - 130024)))));
                }
            }
        }
    }
    var_28 = var_5;
    #pragma endscop
}
