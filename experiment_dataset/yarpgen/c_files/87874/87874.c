/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((23847 ? ((~(arr_0 [i_0]))) : (((!(arr_0 [i_0 - 1])))))));
        var_11 &= (min(((max(22, -31))), ((-var_5 & (((5294 && (arr_2 [12]))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] = ((-1136 ? (((!((!(arr_7 [i_1] [11] [i_2])))))) : ((-((min(var_2, -52)))))));
            arr_10 [i_1] [i_1] [i_2] = 3458487555;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_12 = (max(var_12, ((((((-(min(20, 2147483648))))) ? (arr_6 [i_4]) : ((var_2 ? (arr_6 [i_1]) : (arr_2 [i_1]))))))));
                arr_16 [i_1] [i_1] [i_1] = (max(((max((((!(arr_5 [i_1] [i_3])))), -31))), 0));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_20 [i_1] [i_1] = ((var_7 == -1136) ? -38 : (arr_2 [i_3]));
                arr_21 [i_1] = ((((!(arr_12 [i_1]))) ? ((7742 ? -11 : 43669)) : (arr_12 [i_1])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_27 [i_1] [i_3] [i_3] [i_5] [i_1] [i_1] [12] = (!var_4);
                            arr_28 [4] [i_1] [4] [i_7] = 46641;
                            var_13 = ((-(arr_0 [i_7 + 2])));
                        }
                    }
                }
                var_14 = (min(var_14, (arr_11 [i_1] [i_1] [i_1])));

                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    arr_31 [i_1] [i_1] [i_1] [i_3] [i_5] [i_1] = -4;
                    arr_32 [i_1] [i_1] [i_5] [i_1] = (4294967295 != 4626);
                    var_15 = (max(var_15, (arr_12 [i_1])));
                    arr_33 [i_8] [i_1] [i_1] [i_1] = (~var_3);
                    var_16 *= (1495035894 > var_1);
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    var_17 = (((((-(arr_6 [8])))) ? (var_3 - 3) : ((var_9 ? 2208755524298236832 : (arr_1 [i_3])))));
                    var_18 &= (arr_0 [i_5]);
                    arr_36 [i_1] [i_1] [i_5] [7] = 2166;
                }
            }
            arr_37 [i_1] [i_1] [i_1] = -20746;
        }
        arr_38 [i_1] = (max(((max((arr_23 [i_1] [i_1] [i_1] [i_1] [5] [7]), var_6))), (--25)));
        var_19 = ((26 ? (!var_9) : -35));

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_20 ^= (max((((arr_4 [12] [12]) ? ((max(var_6, (arr_2 [i_1])))) : var_10)), 13));
            var_21 = (min((arr_39 [i_1] [i_10] [10]), (-var_2 + var_3)));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        var_22 = ((((min((arr_46 [i_11] [i_10] [i_11] [i_12] [i_1]), 25))) && 2047));
                        var_23 = (min(var_23, ((max(((-var_9 == (((2 ? (arr_13 [i_1] [i_10] [i_11]) : var_8))))), ((2108653475 < (arr_0 [i_1]))))))));
                        var_24 = (max(var_24, ((((max(-1161, 1417327921374125277))) ? (max((41 / 7813), ((-(arr_6 [i_10]))))) : 2041))));
                    }
                }
            }
            arr_47 [i_1] [i_10] = (arr_13 [i_10] [i_10] [i_1]);
        }
    }
    var_25 &= var_7;
    var_26 = min(2147483647, 13146916493966619934);
    #pragma endscop
}
