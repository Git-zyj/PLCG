/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] [i_0] = (min((((~var_8) << ((((var_8 ? 12 : 4294967295)) - 12)))), (min(132, (arr_4 [i_0] [4])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (-449356105 + 52);
                    var_19 = (arr_5 [i_0]);
                    arr_10 [i_0] [i_1 + 1] [i_0] = ((var_0 ? 694284129 : (arr_1 [i_2])));
                    arr_11 [i_2] = (min((-123 % 281474976710655), (arr_3 [i_1 - 1] [i_1 - 1])));
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    var_20 |= ((((min(var_0, 148917439))) + (((((var_8 - (arr_3 [i_0] [i_0])))) ? ((52 ? (arr_2 [i_1]) : 449356119)) : ((((arr_1 [i_0]) <= (arr_7 [i_3]))))))));
                    arr_14 [i_0] = 2886486071871401222;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_21 = (max(var_21, 2617163222));
                    arr_17 [i_0] [i_4] [i_4] [i_1] = (((var_8 != var_12) ? (~-1344656732) : (arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 3])));
                }
            }
        }
    }
    var_22 = 4534044254360968075;

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_23 = (max(var_23, (((-(var_0 << var_3))))));
                    var_24 = ((!449356104) ? (((arr_20 [i_6]) ? (arr_18 [7]) : ((min(var_2, 2328))))) : (arr_19 [i_6] [i_7]));
                }
            }
        }
        var_25 = (max(var_25, (((1062370475 == (((-2886486071871401219 < ((694284129 ? 7727 : var_13))))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 19;i_9 += 1)
            {
                {
                    arr_32 [i_9] = (((min(-1, -58))));
                    arr_33 [i_5] [i_5] = (((((arr_20 [i_5]) <= (((arr_30 [i_5] [i_5]) / var_4)))) ? ((var_10 | ((~(arr_23 [i_5]))))) : ((((((var_17 << (((arr_30 [20] [i_5]) - 2510803327))))) || (~var_4))))));
                    arr_34 [i_9 + 1] [i_5] [i_5] [i_5] = var_0;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_26 |= ((~(((arr_30 [9] [i_8]) - -52))));
                        var_27 = (max(var_27, (((!(var_14 ^ var_16))))));
                        var_28 = 694284129;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_40 [4] [4] |= (var_10 | var_2);
                        var_29 *= var_12;
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_8] [i_12] [i_8] [i_8] [i_5] |= (arr_38 [16] [i_5] [i_9] [16] [i_9]);

                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            arr_48 [i_12] [i_13] = (min((1030557681 >= 1111088208), ((449356105 ? 2563641303973894957 : 177))));
                            var_30 = (min(var_30, ((((((78 ? (arr_20 [i_8]) : (((((arr_29 [i_5] [i_12] [i_13]) < 694284142))))))) && (60 ^ 694284146))))));
                        }
                        arr_49 [i_5] [i_8] [i_5] &= var_12;
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        var_31 = ((-(((!(~var_8))))));
                        var_32 -= (min(449356118, (((10168798343485910896 || (arr_37 [i_5] [i_8] [i_14] [i_14]))))));
                        var_33 = (((((-40 > ((2147483647 ? (arr_36 [i_14]) : (arr_29 [i_5] [i_5] [i_5])))))) << ((202 ? (!-68) : (449356127 != var_11)))));
                        arr_52 [i_5] [i_14] [i_9] [18] = ((!(((((var_4 & (arr_24 [i_9] [i_9] [i_8]))) ^ (arr_29 [i_5] [i_9 - 1] [i_14]))))));
                    }
                    var_34 = (arr_31 [i_9 - 2] [i_8] [i_5]);
                }
            }
        }
    }
    var_35 = -var_16;
    #pragma endscop
}
