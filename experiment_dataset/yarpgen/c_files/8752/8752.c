/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 |= var_1;

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        var_16 &= (max((arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0]), (min(-782723084, -var_8))));
                        arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = min(var_7, (min(170, var_0)));
                    }
                    var_17 |= ((var_6 ? ((-(!var_11))) : 102));
                    var_18 -= ((((min(((-968377004 ? 38348 : 159)), ((((arr_6 [i_1]) <= var_7)))))) ? ((((~181) <= (~-968377004)))) : ((((min(var_6, (arr_8 [i_0] [i_0] [i_1] [i_0])))) & (25165824 / var_1)))));
                    var_19 -= ((((min((arr_11 [i_0] [i_0] [i_1] [i_0]), (((153 <= (arr_8 [0] [0] [i_2] [i_2]))))))) << (((arr_8 [i_0] [i_0] [i_0] [i_0]) - 27547))));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_20 = var_6;
        arr_18 [i_4 + 1] = (min((((min((arr_16 [i_4]), var_2)) << (((!(arr_16 [i_4])))))), (~var_2)));
        var_21 += (min(((10 ? (~var_5) : ((((arr_17 [i_4]) <= (arr_14 [i_4] [i_4 + 1])))))), ((max((arr_17 [i_4 + 2]), (arr_14 [i_4 + 2] [i_4 + 1]))))));
        var_22 = (max(var_22, ((((((4095 ^ (((arr_14 [i_4 + 2] [i_4 + 2]) % (arr_16 [i_4])))))) ? (((arr_17 [i_4]) / (8191 * 38321))) : (arr_15 [i_4 + 1]))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_23 |= var_11;
            arr_21 [i_5] [i_4 + 2] = (((!var_9) ? ((var_10 ? (arr_19 [i_4 + 1] [i_4 + 1] [i_4]) : 14091)) : 27215));
            arr_22 [i_4] [i_4 + 1] |= (((arr_19 [i_4 + 1] [i_4 + 1] [i_5]) || (arr_19 [i_4 + 1] [i_4 + 1] [i_4])));
            var_24 = (max(var_24, (var_4 - 225)));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
            {
                arr_29 [i_4] [i_4 + 2] [i_4 + 2] [i_4] = var_6;
                var_25 = 38323;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_26 = (max(var_26, 97));
                            arr_36 [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4] [i_4] = (36 ? -371894235 : (arr_26 [i_4] [i_4] [i_4 + 1] [i_7 - 1]));
                            arr_37 [i_4] [i_4] |= ((~(~78)));
                            var_27 = (max(var_27, ((((arr_17 [i_4]) ? (arr_17 [i_4 - 1]) : (arr_19 [i_4] [i_4 - 1] [i_4 - 1]))))));
                        }
                    }
                }
            }
            for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_28 = ((((((~(arr_19 [i_4] [i_6] [i_10 - 1]))) + 2147483647)) >> (79 - 79)));
                arr_40 [i_4] [i_4] = (((((arr_33 [i_4] [i_4 + 1] [i_4] [i_4 + 2] [i_4 - 1] [i_10] [i_10 + 1]) ? 65535 : 27234)) % (((arr_33 [i_4] [i_4 - 1] [i_4] [i_4 + 2] [i_4] [i_4] [i_10 - 1]) ? (arr_33 [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_6] [i_4] [i_10 + 1]) : 400222483))));
            }
            var_29 = (~((((((var_1 ? 37841 : var_0))) && ((min(var_2, var_13)))))));
        }
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        arr_43 [i_11] |= ((((((min(var_9, var_5))) ? 38348 : var_8))) ? ((((min(370498791, 370498791))) ? ((((arr_41 [i_11] [i_11]) <= (arr_42 [i_11])))) : -12142)) : ((~(var_5 * -8191))));
        arr_44 [i_11] = ((371894234 != ((-968377004 ? -2147483636 : -8178))));
    }
    var_30 = (((var_12 ? (max(var_2, -11774) : var_4))));
    var_31 |= ((((3 ? ((min(255, 203))) : var_3))) ? 30 : (min((!-1368652507), -807825523)));
    var_32 = (max(var_32, (((((min(11774, ((var_6 ? -370498788 : 100))))) ? (min(((var_2 ? 21261 : var_13)), (min(-2130540619, var_5)))) : 8203)))));
    #pragma endscop
}
