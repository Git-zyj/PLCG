/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] |= -218283899;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = var_7;
                    var_20 = (max(var_20, (((((min((var_1 && -218283916), -var_15))) ? ((-((-(arr_1 [i_0] [i_2]))))) : (arr_3 [i_0]))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_21 -= ((((-(arr_9 [i_2]))) % ((var_3 ? var_0 : var_3))));
                        var_22 *= ((var_14 || (arr_1 [i_1 - 1] [i_1 - 1])));

                        for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_23 *= ((1 ? 1 : 18446744073709551615));
                            var_24 *= (((((18446744073709551610 ? var_15 : (-9223372036854775807 - 1)))) ? (arr_5 [i_0] [i_0]) : var_2));
                            var_25 |= ((64990 ? (~var_18) : 11170640424579546818));
                        }
                        for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, (((((((-9223372036854775807 - 1) ? var_10 : -1714667042))) ? 18446744073709551595 : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_5]))))));
                            var_27 -= (((((var_5 ? -17244 : (arr_14 [i_5 + 3] [1] [4] [i_1] [i_0] [i_0])))) && (((1 ? var_4 : (arr_17 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_1 - 1]))))));
                            var_28 = -218283897;
                        }
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_29 *= (min((arr_24 [i_0] [i_1] [i_1] [i_2] [i_2] [18]), (max((((arr_15 [i_1] [i_1 - 1] [1] [i_1 - 1]) - (arr_13 [i_0] [i_0] [i_0] [i_6] [i_0]))), (arr_17 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_1] [i_0])))));
                        var_30 = ((((18446744073709551615 ? (((arr_13 [11] [i_1] [i_0] [i_6] [i_2]) ? var_7 : 31)) : (arr_13 [i_0] [i_1 - 1] [i_2] [i_6 + 1] [i_0]))) >> 1));
                    }
                }
            }
        }
        var_31 = (max(var_31, ((min((((((var_1 ? 1 : 1))) ? (arr_27 [i_0] [i_0] [i_0]) : 962474607)), (arr_15 [i_0] [11] [i_0] [i_0]))))));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_35 [i_7] [i_7] = var_1;
            arr_36 [i_7] [4] [4] = 25945;
            var_32 = ((((((min(-30780, (arr_18 [14] [14] [14])))) ? (min((arr_14 [i_7 - 1] [i_7 - 1] [12] [i_8] [i_7 - 1] [i_7 - 1]), var_15)) : 1)) + 1));
        }
        var_33 = (max(var_33, ((((max(1501628171848194489, -1048575)) * (((-218283890 ? ((max(var_0, var_4))) : ((-(arr_19 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1])))))))))));
    }
    var_34 = (max(var_34, ((min((var_15 == var_18), (((!var_4) ? var_1 : var_9)))))));
    #pragma endscop
}
