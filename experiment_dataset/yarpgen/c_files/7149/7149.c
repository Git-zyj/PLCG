/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-var_8 < ((127 ? -20450 : -192114104))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_15 = (max(var_15, (((((((~(arr_2 [i_0] [i_0] [i_0]))) ? ((max((arr_0 [i_1 + 1]), 53609))) : -192114104)))))));
            var_16 = (min(var_16, 1099511627712));
            var_17 = var_9;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (208092056683517181 && -20468);
            arr_8 [i_2] = 190;
            var_19 = var_9;
        }
        arr_9 [i_0] = (~242);
        var_20 = ((arr_7 [10] [i_0]) ? (max(192114105, (arr_0 [i_0]))) : 2051226471);
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_21 ^= ((208092056683517181 ? 1099511627710 : ((max(((var_3 ? 4294967295 : (arr_10 [i_3 + 1]))), var_5)))));

        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            var_22 = (~(arr_11 [10] [i_3 - 1]));
            arr_14 [5] [i_4] = (((((arr_10 [i_3 + 1]) >= (arr_10 [i_3 + 1]))) ? ((((arr_10 [i_3 + 1]) == -36))) : -var_13));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    {
                        var_23 = ((4020623128 && (((((((arr_15 [i_3 + 1] [i_3 + 1] [i_5] [i_4]) ? var_10 : -192114104))) ? (arr_21 [i_6 - 3] [16] [i_4 - 1] [6]) : (arr_15 [i_3] [i_3] [i_3] [i_4]))))));
                        var_24 = (min(var_24, ((((((-117 ? (arr_20 [16] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_6 - 2]) : (arr_21 [i_3 - 1] [11] [i_3 - 1] [i_6])))) ? (((((min(var_0, (arr_10 [i_4 + 1])))) ? (arr_13 [i_6 + 1] [i_3 - 1]) : (((arr_11 [1] [i_3]) ? (arr_20 [i_3] [i_4] [i_5] [11] [i_6 + 1]) : var_6))))) : (((arr_11 [i_3] [i_4]) ? ((max(-17186752, var_5))) : (max(var_11, (arr_11 [i_6] [i_3]))))))))));

                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            arr_26 [i_4] [i_4] [i_5] [17] [i_7 + 1] = ((((((var_4 ? var_3 : var_3))) ? (!var_7) : (arr_10 [i_7]))) << var_3);
                            var_25 = var_12;
                            arr_27 [i_3 + 1] [i_4] [i_5] [4] = (arr_11 [i_3 - 1] [i_6 - 3]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 24;i_8 += 1)
        {
            arr_30 [i_3] [i_8] [i_8] = -121;
            arr_31 [i_8] = ((18446742974197923897 ? ((((var_8 && (arr_24 [i_3] [17] [i_3 - 1] [i_3 - 1] [i_8]))))) : (arr_18 [i_3 + 1])));
            arr_32 [22] [22] &= ((~(arr_23 [i_3 - 1] [i_3 + 1] [i_3] [12] [i_3 + 1] [i_3])));
        }

        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            var_26 = (arr_33 [i_3] [16]);
            var_27 = max((((min(1099511627710, 274344154)))), var_4);
            var_28 = (min(var_28, var_6));
        }
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_29 = (min((18446744073709551614 | 274344178), var_4));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_30 = (arr_36 [i_10]);
                var_31 -= (arr_40 [18]);
                arr_44 [i_10] [i_11] = (((!59) ? (arr_20 [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1]) : (!-78)));
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    {
                        var_32 += 142664194;
                        var_33 *= ((((min(((0 ? (arr_49 [1] [i_13] [i_13]) : 1099511627712)), ((((arr_28 [i_13] [9]) ? var_0 : (arr_18 [i_10 - 1]))))))) ? ((~(((arr_51 [i_10] [i_10] [i_13] [i_14 + 1] [12] [i_15 + 1]) - var_7)))) : (((var_13 < (max(8, 288221580058689536)))))));
                        var_34 += (((min(((max(77, var_4))), 95)) * ((((var_3 == (arr_11 [i_10] [i_10])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
