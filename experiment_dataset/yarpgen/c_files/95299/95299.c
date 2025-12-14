/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(-var_11, var_18)) << ((max(0, 44)))));
    var_21 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_1] [i_2] &= (((arr_5 [i_0] [i_2 - 3] [19]) * ((1708684176 ? -72 : 14279453737046917401))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_22 = ((12195875184453895272 || (12195875184453895272 << 44)));
                        arr_12 [i_0] [0] = (((arr_2 [i_2 + 2] [i_2 - 2] [i_2]) ? (((arr_1 [i_0]) ? 2 : var_16)) : var_3));
                        var_23 = (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]);
                        var_24 += (((arr_5 [11] [i_1] [i_3]) ? var_13 : (arr_5 [i_3] [i_2 + 3] [i_0])));
                    }

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_16 [i_0] [i_2] [20] [i_4] [12] [i_2] &= ((((min((min(2, 2811617846301375422)), (((!(arr_8 [10] [i_2]))))))) && ((!((max(var_1, (arr_2 [i_0] [i_1] [i_1]))))))));
                        var_25 += (((arr_10 [i_0] [i_2 - 4] [7] [17]) ? ((((1 < (arr_10 [10] [i_2 + 3] [i_2] [12]))))) : (arr_8 [i_2 - 1] [i_2])));
                        arr_17 [i_0] [18] [14] [i_4] = (arr_13 [i_0] [i_1] [i_2] [i_0]);
                        var_26 -= (arr_0 [i_0] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_2 + 1] = (arr_7 [i_0]);
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = -7728818843241060849;
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_27 = (max((3084951355 * 62474), var_2));
                        arr_25 [17] [i_0] = (max((arr_10 [i_1] [i_1] [i_0] [19]), (((!(arr_0 [i_0] [i_0]))))));
                    }
                    var_28 = (max(var_28, (((((~((-1070139572 ? 12632 : 0)))) ^ (((((var_19 ? (arr_11 [i_2] [i_2] [1] [i_1] [i_2]) : var_14))) ? ((12195875184453895284 ? (arr_15 [i_0] [16] [i_2] [i_0]) : var_1)) : ((max((arr_19 [i_0] [i_1] [7]), 0))))))))));
                    var_29 = ((((max(9223372036854775807, 0))) ? ((6 ? 0 : 9223372036854775807)) : ((max(((((arr_1 [i_0]) < (arr_7 [i_0])))), (arr_2 [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_30 = ((((var_10 ? ((var_5 ? var_13 : var_4)) : (~924230716))) < var_3));

    for (int i_7 = 3; i_7 < 8;i_7 += 1)
    {
        arr_28 [1] = (max((((arr_1 [2]) ? (arr_27 [i_7 - 3]) : var_11)), (arr_8 [i_7] [18])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_31 = (((-87 + 5) % (arr_14 [i_9] [i_8] [0] [i_7] [i_7])));
                    arr_35 [i_9] = ((-((min((arr_24 [i_9] [i_8] [9] [i_7] [8]), (arr_24 [i_9] [i_8] [i_9] [i_7] [4]))))));
                    var_32 *= (-9223372036854775800 + 17171480576);
                    var_33 = (max(var_33, ((max((arr_10 [i_7] [1] [i_9] [i_8]), (arr_10 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 3]))))));
                    var_34 = 10497156102466638817;
                }
            }
        }
    }
    #pragma endscop
}
