/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_16 >= ((var_14 ? -2228040895901054742 : 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [10] [i_0] = (var_9 || var_12);
        var_21 |= ((50 ? var_15 : var_11));
        var_22 *= ((var_13 ? (~32871) : (116 == var_16)));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_23 = (((((min(var_17, var_17)))) < (max(((32880 ? var_7 : var_18)), var_11))));
        var_24 = ((((!(20971 && var_15))) ? (((!(((var_17 << (var_1 - 4005487748))))))) : ((-(!3)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_25 = ((-2228040895901054739 >= (max(var_12, 50))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [6] |= var_2;

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_26 = ((var_0 ? var_15 : var_3));
                            var_27 = (!-65);
                            arr_22 [i_2] [i_4] [i_2] [i_4] [6] [6] [i_2] = var_1;
                        }
                        var_28 = 69;

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_25 [i_4] [1] [7] [4] [i_7] = (((var_8 >= var_1) / (((!1) ? -2228040895901054733 : 4294967282))));
                            arr_26 [i_4] [i_4] [10] = ((var_0 ? (max((min(var_4, var_2)), ((max(var_6, -18964))))) : (((~(1 || var_4))))));
                        }
                        var_29 = (var_13 % var_19);
                        var_30 |= ((-43 ? (-2228040895901054755 + var_19) : (((max(var_16, var_9))))));
                    }
                    var_31 *= ((((10370 ? var_4 : var_8)) | (!1328781919)));
                    arr_27 [i_4] [i_4] [i_3] = ((((((min(32662, 18957))))) ? var_17 : ((var_15 * (!var_18)))));
                }
            }
        }
        var_32 = (!-var_7);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_33 = var_17;
        var_34 = (((((-16384 ? 2047 : 18963))) * (233030483 / 3310717256)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_36 [i_8] [i_8] = (((((3352775186 ? var_18 : 20628))) ? -var_18 : (((1 && ((max(942192110, 4294967269))))))));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {

                        for (int i_12 = 2; i_12 < 23;i_12 += 1)
                        {
                            var_35 ^= 16383;
                            arr_41 [0] [i_11] [i_10] [i_9] [i_8] = (3908628904 >= var_8);
                            var_36 *= var_2;
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            arr_44 [i_13] [i_13] [i_13] [i_10] [i_8] = (~-23750);
                            arr_45 [1] [i_13] [1] [i_13] [i_8] = (223 & var_17);
                        }
                        var_37 = (((var_14 > 209) ? -504602820056624874 : 15363));

                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_38 = ((var_16 ? -8 : var_14));
                            arr_48 [i_8] [i_8] [i_14] [i_8] = ((var_2 ? var_4 : 49));
                        }
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            var_39 = ((var_13 ? 217 : var_19));
                            arr_52 [i_9] = 1;
                            var_40 = (~-8);
                            var_41 |= -16384;
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            var_42 = ((-(!4294967295)));
                            var_43 |= (251658240 || (var_19 * var_16));
                            var_44 ^= var_11;
                        }
                    }
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        var_45 ^= (-(min((max(var_9, 2070863501)), (-682481740 != 250))));
                        var_46 = (((((~var_8) / (((var_7 ? var_10 : -94))))) - (((((max(15358, var_15)) > var_18))))));
                    }
                    var_47 = ((4225397051 | (((32880 << (((-32288 + 32314) - 13)))))));
                    var_48 = (max((min(32883, var_11)), (((var_4 ? var_3 : var_16)))));
                }
            }
        }
    }
    var_49 = var_15;
    #pragma endscop
}
