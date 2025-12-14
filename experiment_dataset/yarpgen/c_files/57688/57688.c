/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = 218431430;
        var_15 = ((~(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 += (-var_2 % 12075920235750004777);
                    var_17 = (((!1) / 7));
                    var_18 = (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_6));
                }
            }
        }
        var_19 &= ((~(arr_3 [i_0])));
    }
    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        var_20 *= ((max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 4]))));
        var_21 = (((-(arr_10 [i_3 - 2] [i_3 - 1]))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_22 = ((((63 ? 1818 : -8612)) > (min(2147483647, 24))));
                        var_23 = (min(var_23, (~1126)));
                        arr_21 [i_4] [i_4] [i_4] = (max(((((((arr_11 [i_4] [i_4]) % (arr_9 [i_6]))) > (max(var_11, 255))))), (((((var_1 ? (arr_10 [i_3] [i_3 + 1]) : (arr_19 [i_3] [i_3] [i_4] [i_3] [i_6] [i_6])))) ? (arr_12 [i_4] [i_3 + 1]) : (arr_17 [i_3] [i_3] [i_3 - 2] [i_3])))));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_24 = (max((min(var_3, (((-(arr_10 [i_7] [i_8])))))), (arr_28 [i_7])));
            var_25 = (min(var_25, ((max((min(var_3, (arr_17 [i_7] [i_7] [i_8] [i_7]))), (arr_17 [i_8] [i_8] [i_7] [i_7]))))));
            var_26 = (max(var_26, ((((((max((arr_24 [12]), 8630)) | (((var_4 ? (arr_15 [i_7] [i_7] [i_7] [i_8]) : var_3)))))) ? ((max((arr_16 [i_7] [i_8] [i_7] [i_8]), 24760))) : var_12))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_27 |= ((8612 ? var_8 : ((-(arr_15 [i_8] [i_8] [i_8] [i_8])))));
                            arr_37 [i_7] = (21998 + 8193274646548105488);
                        }
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {
            var_28 = (((((arr_15 [i_7] [i_7] [i_7] [i_12 - 1]) ? (arr_15 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12 - 2]) : (((min((arr_26 [i_7] [i_12]), 32))))))) / (((arr_29 [i_12 - 2] [i_12] [i_7] [i_12]) / var_9)));

            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                var_29 = (((~((min(38, var_12))))) & (((arr_33 [i_7] [i_12 + 1] [i_7] [i_7] [i_7]) ? var_4 : -1587184349)));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 0;i_15 += 1)
                    {
                        {
                            var_30 = (+(((arr_20 [i_7]) / var_7)));
                            var_31 = (max(var_31, var_6));
                            var_32 = (arr_31 [i_7] [i_7] [i_13]);
                        }
                    }
                }
                var_33 = (arr_14 [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_12]);
            }
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                var_34 = (min((min((arr_41 [i_7]), (max((arr_14 [i_7] [i_12] [i_12 - 1] [i_16]), 114)))), (((arr_32 [i_12 + 1] [i_12 - 2] [i_12 - 2] [i_12 - 2]) ? (arr_32 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 2]) : var_3))));
                var_35 = ((((min((63 | 0), (((arr_23 [i_7]) ? -2147483646 : (arr_38 [i_7] [i_12] [i_7])))))) ? (arr_42 [i_16] [i_12] [i_7] [i_7] [i_7]) : (min(((~(arr_51 [i_7] [i_12 - 3] [i_12] [i_16]))), (arr_12 [i_7] [i_16])))));
                var_36 |= (min(var_8, (((!(((1 ? var_6 : var_11))))))));
            }
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                var_37 |= var_1;
                var_38 = (max(var_38, ((min((((arr_47 [i_12 + 1] [16] [16] [i_12 + 1] [i_12 + 1]) ? (arr_42 [i_7] [i_12 - 1] [i_17] [i_17] [i_12]) : (max((arr_22 [i_17] [i_12]), 255)))), ((((arr_44 [i_7] [i_7] [i_7]) == (arr_53 [i_12 + 1] [0])))))))));
                var_39 = (min(var_39, (((((max(18446744073709551596, 241))) ? (~var_9) : (min((max(var_2, 12393328867082057920)), (arr_38 [4] [i_12] [i_17]))))))));
            }
        }
        var_40 = (arr_28 [i_7]);
    }
    #pragma endscop
}
