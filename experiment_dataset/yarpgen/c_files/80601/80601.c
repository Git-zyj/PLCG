/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_9));

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) || var_16));
        var_18 = (min(var_18, ((min((((!(var_10 == var_8)))), 534072831)))));
        var_19 = (((((((arr_0 [i_0]) ? var_5 : var_10))) && (arr_0 [i_0]))));
        var_20 = (max((min((arr_0 [i_0 - 3]), (((!(arr_1 [i_0] [i_0])))))), 1));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_21 -= ((((((arr_12 [i_0 - 1] [i_1 - 1]) ? var_4 : 2125796715))) || (((!0) || ((((arr_8 [i_0] [i_0] [i_0]) ? var_4 : 11)))))));
                        var_22 = 831061647;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_0] = var_13;
                            var_23 += (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_24 += (((var_8 != 65110) ? ((~(min(831061647, 65110)))) : (((arr_6 [i_1] [i_1] [i_1 - 1]) ? var_11 : var_7))));
                        }

                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_25 = ((!((min((arr_18 [i_0 - 2] [i_1 - 1] [i_5 + 2]), var_15)))));
                            var_26 *= ((65092 && ((max((var_4 - var_16), (arr_8 [i_0 - 3] [i_1 - 1] [i_1]))))));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_5] = ((-((-(arr_1 [i_1] [i_1])))));
                            var_27 ^= (arr_7 [i_2] [i_2] [i_2] [i_2]);
                        }

                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_28 = (((max((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 4] [i_0 - 1]), var_3)) != -65112));
                            var_29 = ((~(arr_22 [i_3])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_7] = ((max(1, 1)) ? (((!(!var_2)))) : (!0));
                            var_30 &= (((6539882296998546634 >= var_5) ? (((arr_11 [i_7] [i_7] [i_1 - 1] [i_0]) ? ((6539882296998546638 << (var_9 + 2796))) : ((((10205648934243986350 <= (arr_19 [i_1]))))))) : ((((1 <= (arr_12 [i_0] [i_7])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] &= arr_8 [i_8] [i_8] [i_8];
        var_31 += (((arr_13 [i_8 + 1] [i_8] [i_8] [i_8 - 3] [i_8 - 3] [i_8]) ? (((arr_22 [20]) ? (arr_22 [20]) : (arr_0 [i_8 + 1]))) : ((-(arr_5 [i_8 - 3] [i_8])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_32 -= (arr_21 [i_8] [i_9] [i_9] [i_8] [i_9]);
                    arr_34 [i_10] = (((((!(((var_4 ? var_3 : (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9]))))))) - ((((arr_14 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 2]) <= ((max(1758796867, (arr_1 [i_8] [i_9])))))))));
                    var_33 = var_1;
                }
            }
        }
    }
    var_34 = ((!-1217622340) ^ var_6);
    var_35 = (var_7 | 4294967295);
    #pragma endscop
}
