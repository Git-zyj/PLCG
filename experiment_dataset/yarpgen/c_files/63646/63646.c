/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 3026402784));
    var_12 = (-32767 - 1);
    var_13 = (((var_3 ? var_9 : 0)));
    var_14 = (((min(var_8, var_2))) ? ((996885117 ? var_8 : var_6)) : var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] = 0;
                    var_15 -= arr_5 [2] [i_0] [i_0 + 1] [i_1 - 1];

                    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (((-(min((((-1992115018 ? -36 : 0))), ((var_4 ? -19 : var_7)))))))));
                        arr_11 [i_0] [i_1] [i_0] = ((-(min(8064, var_5))));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_17 = (4151537086 % 1);
                        arr_15 [i_1] [i_1] [i_2] [i_4] = (arr_14 [i_0] [i_1] [i_0]);

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_18 = (((((var_4 ? var_1 : -19)) <= ((~(arr_8 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5]))))));
                            var_19 = ((((((arr_8 [i_4] [i_4 - 1] [i_1] [i_4 + 1] [i_5 + 1] [i_5 + 1]) ? 65535 : -29946))) ? ((var_8 % (arr_4 [i_1 + 2]))) : (arr_6 [i_1] [i_1] [i_1 - 1] [i_1 - 2])));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_20 = arr_0 [i_6];
                            var_21 = (~35614);
                        }
                        var_22 = (min(var_22, (((1 ? ((var_9 ? 1 : 9223372036854775807)) : ((min(-19, 0))))))));
                    }
                    arr_21 [i_0] [i_1] [i_1] = 53;

                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        var_23 = var_0;
                        arr_24 [i_0] [i_0] [i_0 + 2] [i_1] = ((28320 ? var_9 : 268435392));
                        var_24 = 28320;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_25 = ((~(arr_10 [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_8])));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_26 = ((0 >= (((((min(var_9, 1))) && (arr_1 [i_0]))))));
                            var_27 -= (min(((var_5 ? 1 : 0)), 1035699021));
                            arr_31 [i_0 - 1] [i_0 - 1] [i_1] [i_8] [i_8] [i_9] |= ((((min((~var_9), 996885117))) ? (~1822023334) : 1128287592));
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_28 += var_3;
                            var_29 -= ((var_5 ? (((-4356 ? 4356 : -9405))) : (!var_0)));
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_8] [i_10] [i_1] = ((((var_9 ? (arr_0 [i_0 + 2]) : var_8)) < (min((arr_0 [i_0 + 1]), 13835058055282163712))));
                        }
                    }
                    for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_0] [i_1] = 1128287581;
                        arr_40 [10] [i_0 - 1] [i_1] [i_2] [i_11] &= -1326146024;
                    }
                    for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_1] [i_2] [i_1] [i_12] = ((-23123 & (arr_18 [i_0] [i_1] [i_2] [i_12])));

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            arr_47 [i_0 + 2] [i_2] [i_12] [i_1] = (((((-16100 ? 1326146034 : (arr_8 [i_0 - 1] [i_0] [i_1] [i_0] [i_0] [i_0 + 2]))))));
                            var_30 = (((((max(11242, var_7)))) ? -14 : ((1326146023 ? (((16100 ? 54596 : -24))) : (min(4265096509, 455295395))))));
                            arr_48 [i_1] = (min(17853895593719457898, -14));
                        }
                        var_31 = (max((min((-14 >= 483989626), (arr_2 [i_1] [i_2]))), -1326146035));
                    }
                }
            }
        }
    }
    #pragma endscop
}
