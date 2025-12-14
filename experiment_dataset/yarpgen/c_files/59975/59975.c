/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_20, ((((min(32242, var_5))) ? 28108 : ((4294967291 ? 1660638797 : 8388607))))));
        var_21 = min(((~(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0]))))), (min((arr_3 [i_0]), (arr_3 [i_0]))));
        var_22 = (max((((max(var_16, (arr_2 [i_0]))))), ((4294967287 ? (~0) : ((var_16 - (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_23 *= var_9;
                        arr_13 [i_1] = (((((max((arr_6 [i_4]), var_7)) < var_14)) ? ((var_13 ? (max(var_11, (arr_0 [i_4] [i_4]))) : (min((arr_0 [i_1] [i_1]), 4294967276)))) : (min(((min(var_10, var_6))), ((var_13 ? (arr_3 [i_1 - 4]) : var_11))))));
                        var_24 = (-2147483647 - 1);
                        var_25 = ((!((max((arr_12 [i_1] [i_2] [i_3] [i_4]), var_19)))));
                        var_26 -= var_2;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_27 = (max((((((arr_1 [i_1]) > var_10)) ? var_9 : var_2)), (((!(arr_2 [i_6]))))));
                    var_28 = var_17;
                    var_29 = arr_1 [i_5];
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_30 = (max(var_30, (arr_7 [i_1])));
                                var_31 = max((((arr_2 [i_8]) * ((var_2 ? var_13 : 4294967295)))), (arr_14 [i_1] [i_1] [i_1 + 1]));
                                arr_22 [i_5] [i_5] [i_5] [i_5] [i_1] = (((arr_2 [i_1 - 3]) ? ((var_10 ? 147267549 : (min((arr_4 [i_8] [i_8]), 1792771039)))) : ((min((arr_16 [i_1] [i_1] [i_1]), var_1)))));
                                var_32 = (((((((var_4 && (arr_3 [i_1]))) ? (((var_8 ? -18346668 : var_9))) : (var_0 % var_19)))) && ((max((arr_12 [i_7] [i_5] [i_5] [i_1]), ((var_8 ? var_12 : (arr_15 [i_1] [i_8] [i_1]))))))));
                                var_33 &= (1817455990 ? 4294967295 : 120);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 17;i_9 += 1)
    {
        arr_25 [i_9] = (min(((((max((-2147483647 - 1), (arr_23 [i_9])))) ? ((~(arr_24 [8]))) : -19391)), 5987));
        var_34 = (-32767 - 1);
    }
    var_35 = (min(1931275836, -17458));
    var_36 = var_5;
    #pragma endscop
}
