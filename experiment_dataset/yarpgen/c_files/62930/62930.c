/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (min(18446744073709551600, 1683125936));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_1] [i_1] = (((~235) ? var_3 : (~-2009271811355121170)));
                    var_11 = (((arr_8 [i_0 + 1] [i_1 - 2]) ? (((arr_4 [i_0 + 1] [i_1]) ? 4232066716958537125 : 3831985255)) : (((var_9 ? (arr_0 [2]) : var_7)))));
                    arr_12 [i_0 + 1] [i_0 + 1] [i_2 - 2] [i_1] = ((!(~3831985254)));

                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_12 |= var_6;
                        var_13 = (arr_14 [i_0] [i_0] [i_1]);
                        var_14 = ((((((arr_2 [1] [i_4]) ? 2009271811355121170 : 65535))) ? -2185356840439693303 : (arr_9 [i_0] [i_1] [i_4])));
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_15 = (arr_13 [12] [i_3] [i_3] [i_2 + 1] [i_2] [i_1] [i_0]);
                        var_16 = -2009271811355121170;
                    }
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_17 ^= (-24 ? -28 : 37);

                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, (((var_3 ? (arr_2 [i_0] [i_1 + 1]) : ((~(min((arr_19 [i_0] [i_1 - 1]), var_4)))))))));
                        var_19 = (-32767 - 1);
                        var_20 = -24;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_21 = (!8315738135188198070);
                        arr_25 [2] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_8] [i_8] &= (((arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_8] [i_0] [i_0]) ? ((((min(128, (arr_1 [i_0 + 1])))))) : (((arr_1 [i_6]) ? (arr_9 [i_2 - 1] [i_8] [i_0]) : (min(41784159057141651, 48))))));
                        arr_26 [i_1] = ((7413935745928003896 ? 82 : 57344));
                        arr_27 [12] [i_1] [12] [i_6] [i_1] = ((~(arr_9 [i_0] [i_1] [i_0])));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_22 = ((~((var_1 ? -var_2 : (min((arr_21 [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_2] [i_9])))))));
                        var_23 = (max(var_23, 1));
                    }
                }
                var_24 = (min((max(((var_7 ? var_8 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))), 38)), (((!((min((arr_6 [i_0 - 1] [7] [i_2 - 3]), 3110181129396078256))))))));
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    {
                        var_25 = (arr_20 [i_10] [i_10] [i_10] [i_0 - 1] [i_1] [i_10] [i_0]);
                        var_26 = ((~((var_5 ? (((-3498446459070605161 ? (arr_17 [i_0 + 1] [i_1] [i_10] [i_11]) : 38850))) : ((var_2 ? 2035432114 : 750331074))))));
                    }
                }
            }
        }
        var_27 = ((+((540431955284459520 ? (min((arr_9 [i_0] [1] [i_0]), 41582)) : 38))));
    }
    for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
    {
        arr_38 [6] = (-9223372036854775807 - 1);
        var_28 = -62;
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 14;i_15 += 1)
            {
                {
                    var_29 = (-((((max((arr_43 [i_13] [i_14]), var_2))) ? var_2 : (min((arr_45 [i_14]), 970659918)))));
                    var_30 = ((var_8 ? (arr_45 [i_13]) : (min(((4 ? 3172567852 : 82)), var_8))));
                }
            }
        }
    }
    var_31 = min(var_5, (min(var_8, (min(11, 3785680387689060558)))));
    #pragma endscop
}
