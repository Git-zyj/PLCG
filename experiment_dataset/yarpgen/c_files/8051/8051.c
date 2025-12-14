/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((5408472225367696666 ? var_10 : (((!(var_5 + var_3)))))))));
    var_16 += ((!(13038271848341854949 / 35)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = ((-((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
        var_18 -= ((-1 ? var_0 : 33));
        var_19 = ((((((!(arr_3 [i_0] [i_0]))) ? (max(var_3, 13038271848341854935)) : ((((!(arr_0 [i_0]))))))) * (((((var_1 ? (arr_2 [i_0]) : 124)))))));
        var_20 &= (max(194, 13038271848341854940));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = max(((((13969444529051685356 == (arr_0 [i_0]))) ? (arr_8 [i_0] [i_1] [i_2]) : (((arr_8 [i_0] [i_0] [i_0]) / 6662615183148844653)))), var_0);
                    arr_10 [i_0] = (((max(100, var_4)) >> (var_10 - 63828)));
                    var_21 = (max(var_21, (arr_7 [i_1])));
                    var_22 = (((((-2949 ? ((min(var_3, (arr_1 [i_1])))) : ((100 ? (arr_6 [i_2] [i_2] [i_1] [i_0]) : var_7))))) ? (((!var_8) ? 145 : -155)) : (arr_2 [i_2])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 6;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, (arr_24 [i_7 + 2] [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 + 2])));
                            var_24 -= var_11;
                            var_25 ^= (arr_20 [i_3] [i_4] [i_5] [i_3]);
                            var_26 *= (max(6865677146836766724, (arr_14 [i_7] [i_4])));
                        }
                    }
                }
                var_27 = var_1;
                var_28 = (arr_1 [i_4]);
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_29 = (~80);
                            arr_34 [i_4] [i_8] [i_9] = 1;
                        }
                    }
                }
                var_30 -= ((!((((arr_20 [i_3] [i_3] [i_4] [i_4]) ? 155 : var_9)))));
            }
            var_31 = ((((255 ? ((var_9 ? var_8 : 6662615183148844650)) : (arr_21 [i_3] [i_3] [i_4] [i_4]))) * var_4));
        }
        arr_35 [i_3] [i_3] = var_5;
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            arr_40 [i_11] [i_12] = (max((~7), ((79 ? var_11 : 6662615183148844634))));
            var_32 = (((((((-(arr_33 [i_12])))) ? (((arr_8 [i_11] [i_12] [i_11]) ? -94 : 23852)) : 139)) < ((1 ? var_12 : (arr_32 [i_12] [i_12] [i_11] [i_11] [i_11])))));
            var_33 ^= ((!(((((arr_22 [i_11] [i_12] [8] [i_11] [i_11]) > 4406419971475310873))))));
        }
        var_34 = (max(var_34, 23852));
        var_35 = (max((((!(arr_28 [i_11] [i_11])))), (arr_4 [i_11])));
        arr_41 [i_11] = ((((6662615183148844653 ? 13038271848341854949 : (arr_15 [i_11])))));
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {
        var_36 = ((~((0 ? -33 : 108599078878398263))));
        var_37 = ((249 ? (((13038271848341854948 ? -1 : 1))) : ((295219709 ? 5645218485570242608 : 7541))));
        var_38 = (max(var_38, ((((((var_12 ? 31070 : 166))) ? (~var_1) : ((((arr_22 [i_13] [i_13] [i_13] [i_13] [i_13]) && var_13))))))));
    }
    var_39 = (max(var_39, (((9223372036854775807 ? ((var_10 ? ((6132802818502043760 ? 1 : 30554)) : -45)) : 166)))));
    #pragma endscop
}
