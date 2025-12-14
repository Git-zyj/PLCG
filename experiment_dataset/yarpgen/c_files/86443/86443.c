/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? -84 : var_12))) << ((var_10 << (var_8 - 58703)))));
    var_16 = (min(var_16, var_7));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_17 = (((arr_1 [i_0]) ? var_9 : (((~(arr_1 [i_0]))))));
            var_18 = 61;
            var_19 = ((70 ? -26605 : (((2194648991 != (arr_1 [i_0]))))));
            var_20 = (((~-26589) ? (arr_2 [i_0] [i_0] [i_1]) : 177));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 ^= (((((var_0 % var_5) << ((((max(var_9, (arr_6 [i_0] [i_0] [0])))) - 42219)))) << (max(51, ((-(arr_6 [i_0] [i_0] [2])))))));
            var_22 = (!((min((arr_2 [i_0] [i_0] [i_0]), 65529))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_23 = (1242077091 << 0);
                            var_24 = (arr_5 [i_2]);
                            var_25 = (((((min(62, var_11))))) % (arr_13 [i_2] [10] [i_2]));
                        }
                    }
                }
            }
            var_26 = (((((arr_10 [i_2]) % var_0))) ? (-2140045343772544667 != var_5) : ((min((arr_10 [i_0]), (arr_10 [i_0])))));
        }
        var_27 = (min(var_27, -26605));
        var_28 = 83;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            var_29 |= (((((((arr_14 [i_6]) ? (arr_14 [i_6]) : var_10))) ? ((((arr_17 [i_6] [1] [i_7 - 1]) + 2147483647))) : (arr_17 [i_7] [i_6] [i_6]))));
            var_30 |= ((((44 % 247) ? (((148 << (205 - 196)))) : ((2147483637 ? var_13 : (arr_15 [i_7]))))));
            var_31 = (min((arr_17 [i_6] [i_7 + 1] [i_7 + 1]), 24));
            var_32 &= ((((min((arr_18 [i_6] [9]), 166))) ? ((-26606 ? 2147483637 : 1)) : 0));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_33 &= ((-((((((var_5 != (arr_14 [i_6]))))) % 1287274238))));
                            var_34 = (max(var_34, var_0));
                            var_35 = (max(var_35, ((((((((((arr_25 [i_6] [i_6] [i_6] [i_8] [i_9] [i_8] [i_10 - 1]) ? 0 : var_0))) ? ((1 ? var_10 : 67108862)) : (((((arr_18 [i_6] [i_6]) != var_11))))))) ? 4095 : (((arr_25 [i_6] [i_6] [i_8] [i_9] [i_10 + 2] [i_8] [1]) ? (((-(arr_25 [i_10] [i_8] [i_8] [i_8] [i_7] [i_8] [i_6])))) : (arr_21 [i_6] [i_8] [1]))))))));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_36 = 178;
            var_37 = ((((max(((65516 ? 26588 : (arr_21 [i_11] [i_6] [i_6]))), 12))) ? ((((((arr_20 [i_6] [i_6] [i_11]) ? 4048752961 : var_14))) ? (((max((arr_27 [i_6] [i_6] [i_6]), (arr_19 [i_6] [i_6] [i_6] [i_11]))))) : (arr_26 [i_6] [i_11] [i_6] [i_11]))) : (arr_23 [i_6] [i_11] [i_11] [i_6])));
            var_38 = (max(var_38, (arr_16 [i_6] [i_11] [2])));
        }
        var_39 = ((((!(arr_27 [i_6] [i_6] [i_6]))) ? (((78 != 31) ? (arr_26 [i_6] [i_6] [i_6] [i_6]) : (((60014844 ? 26616 : (arr_17 [i_6] [i_6] [i_6])))))) : (((-(arr_24 [8]))))));
        var_40 = ((!((min(var_1, (arr_15 [i_6]))))));
    }
    #pragma endscop
}
