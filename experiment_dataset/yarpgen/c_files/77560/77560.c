/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_10);
    var_17 = var_12;
    var_18 ^= var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] = var_10;
                    arr_9 [i_0] [i_0] [i_1] = (arr_7 [i_1] [i_1] [i_2]);
                    var_19 -= 244;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] = (min((arr_0 [i_0 + 2] [5]), (((+((252 ? (arr_2 [i_0]) : (arr_6 [7] [i_0 - 1] [i_1] [i_0 - 1]))))))));
                        var_20 -= (arr_2 [i_3]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_21 = (((arr_13 [i_0] [i_0] [i_3] [i_4 - 2]) - var_6));
                            arr_20 [9] [i_4] [i_5] [i_4] [i_5] [i_1] [i_5] = (arr_10 [8] [i_4] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_22 = (max(((((arr_14 [i_0] [i_1] [i_3] [i_0 - 1] [i_6]) ? 226 : (arr_14 [i_0 - 1] [i_1] [i_3] [i_0 + 3] [i_6])))), (((arr_21 [i_1] [i_1] [i_3] [i_0 - 1] [7] [6] [i_4 - 2]) ? var_1 : (arr_21 [i_0] [i_0 + 2] [i_3] [i_0 + 2] [i_6] [i_1] [i_4 - 2])))));
                            var_23 = ((!((((arr_21 [i_0] [i_1] [i_3] [i_4] [i_6] [i_4 - 1] [i_4 - 2]) ? var_9 : (arr_21 [i_6] [i_1] [i_3] [i_4] [i_6] [i_6] [i_4]))))));
                        }
                        arr_23 [5] [i_1] [i_1] [i_1] [i_3] [i_4] = arr_0 [i_0] [i_0];
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_24 = (max((((~(((!(arr_16 [i_7] [i_7] [i_1] [8] [i_1] [8] [i_0]))))))), (0 + 2495679356)));
                        arr_26 [i_0 + 1] [i_1] [i_0] [i_0] [i_0] [i_1] = (var_8 == 9223372036854775807);
                        var_25 = (max(var_25, (((((!(arr_14 [i_0 + 3] [i_1] [i_0 + 3] [i_3] [i_7]))) || (arr_24 [i_0 + 1] [i_0 - 1]))))));

                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            var_26 -= ((((((((-(arr_7 [i_7] [i_7] [i_7])))) ? 240 : (!0)))) ? ((var_15 ? 1023 : (arr_14 [i_0] [i_3] [i_3] [i_3] [i_8 + 1]))) : (((var_6 >> (var_5 - 568381505))))));
                            var_27 = var_7;
                        }
                    }
                    var_28 = (max((((16 << (var_10 - 81)))), var_8));

                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        var_29 *= (max(var_8, -var_1));
                        arr_33 [i_0 + 1] [i_0] [i_0] [i_1] [i_0] [i_0 + 3] = (!-1);
                        var_30 = ((~(arr_6 [i_9 - 1] [i_3] [i_0] [i_0])));
                        var_31 &= (((arr_6 [i_0] [i_1] [i_1] [i_0]) << (((((((226 ? var_13 : var_11))) ? 244 : (((-6887905439040755971 ? var_6 : 247))))) - 235))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_38 [i_0 + 2] [i_1] [i_3] [i_10] = 4294966273;
                        var_32 = (((var_15 || 4294966273) * var_5));
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        var_33 -= (((arr_3 [i_11 + 1]) ? 2537284395782307021 : (((((arr_3 [i_11 - 1]) < var_13))))));
                        var_34 = var_1;
                        var_35 -= 226;
                        var_36 = (((!18446744073709551607) ? (arr_3 [i_3]) : ((1 ? 4 : -1317925473581661131))));
                        arr_41 [i_1] [i_3] [i_3] = (max((((((var_5 ? var_2 : 0))) ? 252 : (arr_1 [4] [i_0 + 2]))), (arr_40 [i_3])));
                    }
                }
                var_37 = ((!((max((arr_34 [i_0 + 1] [i_1] [i_0] [5]), (arr_34 [i_0 + 3] [i_1] [i_0] [i_0 - 1]))))));
                arr_42 [i_1] [i_1] [i_0] = var_4;
            }
        }
    }
    #pragma endscop
}
