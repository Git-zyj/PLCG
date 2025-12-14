/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_14 = 35735;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] = (((arr_3 [i_0]) > (arr_0 [i_0] [i_0])));
            var_15 = (min(var_15, (((-21313 ? -21313 : 21664)))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_16 = ((-(-32767 - 1)));
                    var_17 = ((+(((arr_5 [i_0 + 1]) * -43871))));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    arr_15 [i_3] [i_0] [i_0] = (max(18446744073709551611, (!21339)));
                    arr_16 [i_0 - 1] [i_2] [i_3] [i_5] [i_0] = ((((max((arr_13 [i_0] [i_5 - 2] [i_3]), var_13))) ? (((!((!(arr_10 [i_0] [i_2] [i_2])))))) : ((~(18446744073709551615 != 43871)))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_18 -= (~6);
                        var_19 = (arr_0 [i_0 - 3] [i_0]);
                        var_20 = var_3;
                    }

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_21 = (max((((!(arr_5 [i_0 - 2])))), (max(var_2, (arr_5 [i_0 + 1])))));
                        var_22 = ((((((max(var_9, (arr_17 [i_0] [i_2] [i_5] [i_5] [i_2]))) * (arr_11 [i_0] [i_2] [16] [i_7])))) ? (((-32767 - 1) - 6917529027641081856)) : (((((arr_19 [i_0] [i_0] [i_0 - 1] [i_7] [i_0]) <= ((max((arr_5 [i_0]), var_12)))))))));
                        var_23 = (((~21643) & ((4441 ? var_5 : var_6))));
                        var_24 = (!var_0);
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3] = ((~(~var_2)));
                            var_25 = ((((max((arr_0 [3] [i_0]), (arr_0 [i_0] [i_0])))) && (((arr_0 [12] [i_0]) && (arr_0 [i_0] [i_0])))));
                            var_26 -= (((9656 + (arr_25 [i_0 - 2]))));
                            arr_27 [2] [i_2] [i_0] [i_8] [i_9] = ((((-((55889 ? -23848 : -22397))))) + ((((((arr_0 [i_2] [i_0]) ? var_5 : 5))) ? (arr_3 [i_0]) : (((max(42781, -8514)))))));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_27 = ((((1 ? 65509 : 10)) < 9));
                            arr_36 [i_12] [i_12] [i_12] [i_12] [i_12] |= ((+(((arr_23 [i_0 - 3] [i_2] [i_10] [i_11 + 2] [i_11 - 1] [i_11]) + 14916208848706525133))));
                        }
                    }
                }
                arr_37 [i_0] [i_0] = ((((max((arr_2 [i_0] [i_2] [i_10]), var_9))) ? 57781 : (~var_10)));
                var_28 = (var_2 - var_9);
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
            {
                var_29 = -21313;
                arr_40 [i_0] [i_2] = ((~(((-4109 > var_11) ? 2054 : ((max(-21314, var_11)))))));
            }
            var_30 = var_7;
            var_31 = (((~(max((arr_39 [i_0] [i_0] [i_2]), (arr_24 [i_0] [i_0] [i_2] [i_0] [4] [i_2]))))));
            arr_41 [7] [i_0] = 43887;
            var_32 = (~5523);
        }
        var_33 = (max(var_33, ((((((max((-32767 - 1), 6084)))) ? ((0 ? 38025 : (arr_25 [i_0 - 1]))) : ((var_13 ? 21329 : (arr_19 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [2]))))))));
    }
    var_34 = (max(var_34, ((max((max((!var_4), var_5)), (var_12 ^ var_3))))));
    #pragma endscop
}
