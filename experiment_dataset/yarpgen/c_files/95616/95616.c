/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (!83);
            var_19 = -27482;
            var_20 = (((((((83 ? var_8 : (arr_2 [i_0]))) ^ (~var_13)))) ? (((-127 - 1) - (arr_0 [i_1 - 1]))) : ((-(arr_3 [i_0] [i_1 - 3] [i_1])))));
        }
        arr_6 [1] = ((var_14 / (((arr_0 [i_0]) ? ((27467 ? var_2 : 7668978536310245609)) : var_17))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        var_21 = (((arr_7 [i_2 - 3] [i_2 - 1]) ? (((~(arr_7 [i_2 - 2] [i_2 + 2])))) : (~8796093021184)));
        var_22 = (max(var_22, ((((((-27472 ? 27462 : 131))) ? (((!((max(-27472, var_9)))))) : (arr_7 [i_2 - 3] [i_2 - 2]))))));
        arr_10 [i_2 + 1] = (((((-(3867342466 * 1)))) ? ((~(arr_8 [i_2] [i_2 - 2]))) : 3590764653544237252));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [i_2] [2] [i_5] [i_5] = min(((-125 ? 20013 : 0)), ((3590764653544237225 ? var_8 : (arr_22 [i_6 - 1] [i_2 - 3] [i_5]))));
                            var_23 -= ((-1024 - (~var_1)));
                            var_24 = ((~((0 ? 62 : -8301517870596321267))));
                            var_25 = ((((((!(arr_13 [i_2]))))) + var_17));
                            var_26 ^= ((!((((min(-73, var_4)))))));
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            arr_27 [i_3] [i_5] [i_3 + 3] [i_3] [i_3] = (arr_12 [i_2] [i_2 - 1]);
                            var_27 = (((((((((arr_12 [i_2] [5]) ? var_8 : 53128))) ? ((60 ? (arr_18 [i_2] [i_2] [i_5] [i_2] [i_5] [i_2]) : -536870912)) : 31851))) ? 72 : (((-(arr_16 [i_2 - 1] [i_2 - 1] [i_2 + 2]))))));
                            var_28 = (((((24648 ? -1258636617943327874 : -31837))) != (~12419)));
                            var_29 = var_2;
                            var_30 = ((((-6698 ? 60 : 91)) <= ((1 + (arr_22 [i_3 + 3] [i_3] [i_5])))));
                        }
                        var_31 = 128;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        arr_31 [i_8 + 1] = 21561;
        var_32 = ((~((~(arr_17 [i_8] [i_8 - 1] [i_8 - 1] [i_8])))));
        arr_32 [i_8] = (((var_15 ? var_13 : (arr_17 [i_8] [i_8 + 2] [1] [i_8 + 2]))));
        var_33 = ((-32 ? -78 : 0));
    }
    var_34 += (31 != -21561);
    var_35 = (min(var_35, 20));
    #pragma endscop
}
