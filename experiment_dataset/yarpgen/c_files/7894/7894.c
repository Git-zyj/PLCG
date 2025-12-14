/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((-1960749242 > (1960749242 || var_5)));
        arr_4 [i_0] [i_0] = ((((1960749242 || 54011) || (!11521))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 = (max(var_19, 114));
                        var_20 = (((54011 * var_10) < (-28 * var_4)));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_21 ^= ((var_0 ? (((-1960749250 + 2147483647) >> (~-32))) : var_15));
                        var_22 = (max(var_22, 54011));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_23 = 141;
                        var_24 = -var_8;
                        var_25 = -65535;
                    }
                    arr_22 [1] [10] [i_2] |= var_8;

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_26 *= var_5;
                        var_27 = (max(var_27, var_17));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_28 [i_1] [i_1] [i_1] [13] [i_7] = var_0;
                        arr_29 [i_7] [i_2] [i_2] [i_1] = 6125;

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_33 [i_1] [8] [i_1] = (((min((204 == -37), (11524 ^ 12051290804408371157))) << (((-var_9 + 233) - 10164327655726369444))));
                            arr_34 [i_8] [i_1] [i_2] [i_1] [i_0 + 1] = 1963804688937007742;
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_28 = -25;
                            arr_38 [1] [i_1] [2] = (max(12, ((~(-127 - 1)))));
                        }
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            var_29 = (((14416274755739769903 ? 36 : 10051524066517562796)));
                            var_30 = (max(((~(~var_8))), ((((~var_5) << (min(18446744073709551615, 1)))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                {
                    var_31 = (min(var_31, (((6736698216712514591 <= ((((var_2 ? 8395220007191988819 : -1960749242)))))))));
                    var_32 -= ((-var_4 > (((2147483626 ? -47 : 46)))));
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 19;i_13 += 1)
    {
        var_33 = (max(var_33, (3588577196880845022 ^ 18446744073709551615)));
        var_34 = (((!(((var_0 ? var_13 : var_16))))));
        var_35 = (max(var_35, (((-1960749250 + (((var_0 + 2147483647) << 0)))))));
        var_36 = var_15;
        arr_52 [10] [i_13] = -1960749238;
    }
    var_37 = (min(var_37, (((var_7 ? ((((8395220007191988819 ? var_17 : -18899)))) : ((var_2 % (var_1 || 10051524066517562796))))))));
    #pragma endscop
}
