/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (18446744073709551615 | (arr_10 [i_0] [i_0] [i_0] [i_0]));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 = ((1784118806 ? (((27406 ? -25239 : 2510848490))) : 4154767950527544965));
                            var_21 = ((+(((arr_0 [9]) ? var_4 : var_5))));
                            var_22 = var_12;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 += (((((arr_0 [i_0]) && (arr_12 [i_0] [i_3] [i_2]))) ? 2147483647 : (((arr_4 [i_2] [i_2]) >> (-2147483642 + 2147483645)))));
                            var_24 = (max(var_24, -27088));
                            arr_16 [i_0] [i_2] [i_2] [i_3] = 2510848489;
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_25 = var_14;
                            arr_19 [i_2] [i_1] [i_6] [i_3] [i_6] [i_2] [i_2] = 1784118806;
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = (((arr_4 [i_6 - 1] [i_6 + 1]) ? (arr_4 [i_6 + 1] [i_6 - 1]) : 2510848489));
                            var_26 = (var_8 && 8948250760986245495);
                            var_27 = (min(var_27, -1));
                        }

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_7] [i_7] = var_14;
                            var_28 = var_10;
                            var_29 = (((arr_10 [i_0] [i_1] [i_3] [i_7]) ? (arr_10 [i_0] [i_3] [i_2] [i_2]) : 9763665080154034670));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_28 [i_2] [i_1] [i_2] [i_3] [i_8] = (-3081 != 16583);
                            arr_29 [i_8] [i_1] [i_2] [i_2] [i_8] &= (var_8 || 2510848492);
                            var_30 = 1784118808;
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_32 [i_2] = (arr_15 [i_0] [i_2] [i_1] [i_2] [i_9]);
                            var_31 -= (arr_0 [i_9]);
                        }
                    }
                }
            }
        }
        var_32 = var_13;
        arr_33 [i_0] = ((arr_4 [i_0] [i_0]) & var_14);
        var_33 = var_2;
        var_34 = (min(var_34, -17));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            {
                var_35 = (max(var_35, ((min(0, ((12403 ? var_8 : (arr_22 [i_10] [i_10] [i_10] [i_11] [i_11]))))))));
                var_36 = (-2147483647 - 1);
                arr_39 [i_10] = ((+((var_8 ? (arr_9 [i_10] [i_10] [i_10] [i_10] [i_11] [i_10]) : -var_4))));
                var_37 += ((7 << (3084 - 3066)));
            }
        }
    }
    var_38 = var_1;
    #pragma endscop
}
