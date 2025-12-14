/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_6;
    var_11 = var_3;
    var_12 = (((((((min(var_6, var_8))) ? (max(191, var_1)) : -412432336))) ? var_5 : (max(var_6, 5892219463374319800))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = ((((arr_2 [i_0 - 1] [i_0]) ? (arr_2 [i_0 + 1] [i_0 + 1]) : 63)) & ((max((arr_2 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [11] [i_1] [i_2] [i_3] [11] = (arr_11 [i_4 + 1] [i_4 + 1] [i_3 - 2] [i_3 - 2] [i_4] [11] [1]);
                                arr_14 [i_0] [1] = ((((min(((max(-11380, var_3))), (var_5 & var_5)))) ? (((min((arr_8 [1] [9] [i_4]), (((!(arr_8 [i_0] [1] [i_0])))))))) : (max(-7180279416102599972, (((~(arr_2 [3] [i_2]))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = max(((32767 ? (arr_9 [i_3] [i_3 - 2] [i_3]) : (arr_9 [i_3] [i_3 - 2] [i_3]))), ((-(arr_11 [i_0] [i_0 - 1] [i_0] [i_1 - 2] [i_4 + 2] [i_0 - 1] [i_0 - 1]))));
                            }
                        }
                    }
                    var_14 = (-(((arr_11 [3] [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1]) ? var_5 : (arr_11 [9] [i_1 - 1] [i_1 + 1] [1] [i_1] [i_1] [i_1]))));
                }
            }
        }
        arr_16 [i_0] [i_0] = ((((min((max((arr_4 [i_0] [0]), 77797685)), (arr_3 [i_0 - 1])))) ? (!var_1) : ((((min((arr_7 [11]), 55))) ? (((!(arr_10 [i_0])))) : ((~(arr_9 [i_0] [i_0] [i_0])))))));
        var_15 += (max((((arr_1 [i_0] [i_0 + 1]) ? (arr_7 [5]) : (max(var_1, var_7)))), (arr_2 [i_0 - 1] [i_0 + 1])));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_16 &= -10468;
            var_17 = (~(max((arr_20 [i_5] [i_6]), (arr_21 [i_6]))));

            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                var_18 *= ((~((-(arr_23 [i_5] [i_5] [i_7 + 3] [i_7 + 1])))));
                var_19 |= (((arr_23 [i_5] [i_7] [3] [i_7 + 3]) ? (((-(arr_19 [i_7 + 1] [18] [i_7])))) : ((((((arr_21 [i_5]) ? 1912287909 : (arr_22 [20])))) | (arr_20 [i_5] [i_7 - 1])))));
            }
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            var_20 = ((-16384 * (arr_20 [i_8 - 2] [i_8 - 2])));
            var_21 = (max(var_21, ((((arr_20 [i_8 + 1] [i_8 - 2]) - (arr_24 [i_5] [14]))))));
            arr_28 [i_5] [i_5] [i_8] = (((arr_17 [i_8 + 1]) && (arr_24 [i_8 + 1] [i_8])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_37 [i_11] = (((arr_25 [i_8] [i_8 - 2] [i_11 - 1]) ? var_5 : var_9));
                            var_22 &= (arr_31 [i_5] [i_5] [i_10 - 1]);
                        }
                    }
                }
            }
        }

        for (int i_12 = 3; i_12 < 24;i_12 += 1) /* same iter space */
        {
            arr_41 [i_12] [i_12] [i_12] = ((((max((arr_18 [i_12]), (((arr_40 [i_5] [i_12] [i_12]) ? (arr_23 [i_5] [i_5] [i_5] [i_5]) : (arr_34 [i_5])))))) ? -1 : (min((!-23365), 3550259392))));
            var_23 = (arr_35 [i_5] [i_5] [i_12] [7] [i_5]);
        }
        for (int i_13 = 3; i_13 < 24;i_13 += 1) /* same iter space */
        {
            arr_46 [i_13] [i_13] = (arr_18 [i_5]);
            var_24 = (min((max(-14652, (arr_26 [10] [i_13 + 1]))), 7));
        }
        for (int i_14 = 3; i_14 < 24;i_14 += 1) /* same iter space */
        {
            var_25 = (min(var_25, ((((((arr_30 [i_14 - 1] [i_14 - 3] [4] [i_5]) ? 2244388625 : 3)) | (((min((!var_7), (max((arr_36 [i_14] [i_14] [i_14 - 2] [i_14] [i_5] [i_5] [i_5]), 34337)))))))))));
            arr_50 [i_14] [i_14] = 33423360;
            arr_51 [i_14] [i_14] = ((((min((arr_27 [i_14 - 2] [6]), (arr_27 [i_14 + 1] [4])))) ? (arr_24 [14] [5]) : var_8));
            var_26 = ((+(((arr_23 [i_14 - 3] [i_14 - 2] [24] [i_14 - 3]) % (arr_48 [i_14 + 1] [i_14 - 1])))));
            var_27 = (max(((!((max(-46, var_9))))), (((max((arr_40 [i_14] [i_5] [i_14]), 2603100917)) <= (((-(arr_33 [i_5] [2] [i_5] [i_14] [11] [2]))))))));
        }
    }
    for (int i_15 = 1; i_15 < 17;i_15 += 1)
    {
        arr_55 [i_15 + 2] [1] |= 465274995;
        var_28 = (min(var_2, (max((arr_31 [i_15] [i_15] [i_15 - 1]), (arr_31 [12] [i_15] [i_15 + 3])))));
    }
    var_29 = ((!(((25340 ? var_2 : ((1 ? var_1 : var_9)))))));
    #pragma endscop
}
