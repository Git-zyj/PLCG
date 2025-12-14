/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(min(var_0, 0))));
        var_20 = ((((min(((~(arr_0 [i_0] [i_0]))), (~var_15)))) ? (~var_13) : (min(var_5, var_16))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (min(1823275199, (min((arr_6 [i_1]), (((arr_7 [i_0] [i_1] [i_2]) ? -1823275225 : var_14))))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                        {
                            var_22 = (arr_14 [i_1] [i_2] [i_1] [i_4 - 2] [i_4 + 1] [i_4 - 2]);
                            arr_17 [1] [i_1] [i_1] [i_1] [i_2] = (~0);
                        }
                        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_23 = ((((~(((arr_0 [i_5] [i_3]) ? (arr_7 [i_0] [i_0] [i_3]) : (arr_7 [i_0] [i_0] [i_0])))))) ? ((((max(var_4, var_10)) && (!var_15)))) : ((min((max((arr_8 [i_0] [i_0] [i_0] [2]), var_11)), (arr_16 [i_0] [i_1] [i_5])))));
                            var_24 = ((((arr_15 [i_2] [i_5 + 1] [i_2] [i_5 - 1] [i_5 + 1]) ? ((var_13 * (arr_5 [i_5 - 2] [i_0]))) : (((1823275193 ? var_5 : var_2))))));
                            var_25 = ((var_6 || ((min(var_13, (((arr_6 [i_3]) ? 2284584852 : 692575360)))))));
                        }
                        var_26 = (((-(arr_9 [i_1]))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_25 [i_6] [i_6] [10] = (!var_17);
            arr_26 [i_6] [i_6] [i_7] = 1;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_30 [3] [i_6] [i_8] = ((((min(var_5, (1823275213 != var_8)))) ? ((((((arr_22 [i_6]) + 1))) ? var_1 : 17491)) : (max(((var_3 ? (arr_24 [i_6]) : (arr_27 [i_6]))), var_1))));
            arr_31 [i_6] [i_8] = ((+(min((((arr_28 [i_8]) ? var_13 : 21490)), var_18))));
        }
        var_27 = ((((max(((max(8388600, 61761))), ((42843 ? 4 : var_14))))) ? (((-(arr_23 [i_6] [i_6])))) : (((3781 ^ (arr_22 [i_6]))))));
        arr_32 [i_6] = (((arr_27 [i_6]) ? 112 : (((((-(arr_27 [i_6]))))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_44 [2] [2] [15] [i_9] [i_11] [i_12] = (((((((max(61757, var_2))) + ((max(11, var_4)))))) ? (((((arr_21 [i_6]) ? 4564 : (arr_40 [i_6] [i_9] [i_10 - 1] [i_9] [i_11] [i_12]))))) : 128));
                                var_28 = (((((arr_43 [i_10 - 2] [i_10 - 2] [i_9] [i_10 - 1] [i_10 - 2] [i_10 - 2]) ? ((var_5 ? (arr_24 [4]) : (arr_22 [i_11]))) : var_7)) / (((-(arr_38 [i_6] [i_6] [i_6] [2] [2]))))));
                            }
                        }
                    }
                    var_29 = (min((min(((min((arr_27 [i_6]), (arr_27 [i_9])))), (max((arr_28 [i_9]), (arr_38 [i_6] [13] [i_9] [i_9] [i_6]))))), 17));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_30 = (min(((min((((arr_43 [2] [12] [12] [12] [i_13] [i_13]) ? 10842 : var_5)), (((arr_37 [8] [8]) ? 0 : 8388600))))), (((arr_36 [i_13] [i_13] [8] [i_13]) ? (((max(40769, var_13)))) : 13982355648761250372))));
        var_31 = (max((min(((min(2375481742, 41))), (arr_29 [i_13] [i_13] [i_13]))), -12884));
        var_32 = (max(((min((arr_42 [i_13] [i_13] [i_13]), var_14))), (arr_35 [i_13] [i_13])));
        var_33 = (((arr_38 [i_13] [i_13] [i_13] [i_13] [i_13]) ? (arr_38 [i_13] [i_13] [i_13] [i_13] [1]) : (arr_38 [i_13] [i_13] [i_13] [i_13] [i_13])));
    }
    var_34 = (~var_8);
    var_35 = ((-(min(var_0, -var_0))));
    var_36 = (~var_10);
    #pragma endscop
}
