/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((2357623939 ? (((((var_4 ? var_1 : var_2))) ? (((var_2 << (8605406806215252042 - 8605406806215252036)))) : 3404217271)) : (((var_16 | (~var_2)))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [8] = (((max(((-(arr_7 [i_0] [i_1] [i_2] [i_3]))), ((((arr_0 [11] [i_0]) && 1))))) == (1 - 63)));
                        var_21 = (max(1, ((3619482529 ? 675484766 : 675484766))));
                        var_22 *= (~-1);
                        var_23 -= (max(((((!3619482518) & (arr_7 [i_0] [i_1] [i_2] [i_1])))), ((~(4294967291 ^ -25857)))));
                        var_24 = ((675484760 << (((max(((675484762 + (arr_1 [i_1]))), (arr_9 [i_3] [i_3 - 1] [1] [i_3 - 1]))) - 4294956382))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    var_25 = ((!(50747 * 300665111)));
                    var_26 = 115;
                    var_27 = (((max(-73, var_16)) >> (var_11 - 1656719739)));
                }
            }
        }
        var_28 = (((arr_5 [i_0]) % ((4294967274 >> ((((max(1, 11128))) - 11120))))));
        var_29 = (((!(arr_14 [i_0] [i_0]))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_30 = ((((((arr_22 [i_7] [i_6] [i_6]) ? 1 : var_16))) >= (arr_21 [i_6])));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_28 [i_9] [i_8] [5] [i_7] [i_8] [i_6] = (arr_27 [i_6] [6] [i_8]);
                        var_31 = (arr_26 [i_6] [i_6] [i_8 - 1] [i_8]);
                        var_32 = var_10;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 22;i_12 += 1)
                {
                    {
                        var_33 = ((var_12 ? ((((((arr_25 [22] [i_10] [i_11] [i_11]) / (arr_23 [i_6] [i_6])))) ? (max(3619482518, 1)) : (!var_3))) : (arr_20 [i_6])));
                        var_34 = ((min(0, (arr_25 [i_11 - 2] [i_11 - 2] [i_10] [i_12 - 1]))));
                        var_35 = 50747;
                    }
                }
            }
        }
        arr_36 [i_6] [i_6] = 1810606357;
    }
    for (int i_13 = 1; i_13 < 17;i_13 += 1)
    {
        var_36 = ((((!(arr_30 [i_13] [i_13 + 2]))) ? ((((((arr_31 [7] [i_13 + 2] [i_13 + 2] [7]) ? (arr_25 [17] [i_13] [i_13] [i_13 + 2]) : (arr_19 [22] [i_13 + 1])))))) : 0));
        var_37 &= var_19;
    }

    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        var_38 = (max((arr_30 [i_14] [i_14]), (max(153, (arr_21 [i_14])))));
        var_39 *= (min(-24, (min((arr_32 [i_14] [i_14] [i_14]), -var_12))));
    }
    #pragma endscop
}
