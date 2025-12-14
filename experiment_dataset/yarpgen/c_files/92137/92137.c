/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (((-32767 - 1) || (((-(arr_2 [i_2]))))));
                            var_21 = 1561206320;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_11 [i_0] [4] [i_1 - 2] [i_2 + 1] [i_3] [i_3] [i_3] = var_5;
                                var_22 *= ((+(((arr_10 [i_2] [i_2 - 2] [i_1] [i_2] [10]) % (arr_10 [i_2 - 2] [i_2] [i_1] [i_2] [i_2 - 1])))));
                                var_23 *= ((~(max((-32767 - 1), (min(-3830695650668958423, (arr_3 [i_0] [i_0] [i_0])))))));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_24 = (3830695650668958413 & 0);
                                var_25 = (((arr_1 [i_3] [i_5]) ^ ((+(((arr_4 [i_2] [i_3]) ? (arr_9 [i_0] [1] [i_3] [i_0]) : (arr_10 [i_0] [i_1] [i_3] [i_3] [i_5])))))));
                                var_26 = 3830695650668958419;
                            }

                            for (int i_6 = 1; i_6 < 20;i_6 += 1)
                            {
                                var_27 = (max(var_27, var_7));
                                var_28 = 0;
                                var_29 = (min(var_29, var_18));
                                var_30 = (max(((((((arr_12 [i_2 - 1] [13] [i_2 - 1] [i_1 + 1] [i_1] [13]) && var_0)) && ((max(0, (arr_15 [i_3] [i_3] [i_3] [i_3] [i_6]))))))), (arr_3 [i_6 + 1] [i_3] [i_0])));
                                var_31 *= ((((arr_8 [i_0] [i_1 - 2] [i_0] [i_1]) >= -14094616840564826465)) ? 96 : ((+(max((arr_7 [i_0] [i_1] [i_2] [i_3]), 3528891014)))));
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                arr_19 [i_3] [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1] = max((((-(((!(arr_13 [i_7] [i_3] [i_2 - 2] [i_1] [i_0]))))))), (min(1186706093, (arr_16 [i_1] [6] [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1] [i_1]))));
                                arr_20 [i_3] [i_7] = 187198374;
                                var_32 ^= 4294967289;
                            }
                            for (int i_8 = 2; i_8 < 18;i_8 += 1)
                            {
                                var_33 = (((~6) - (((max((arr_6 [i_3] [i_1 - 1] [i_2 - 1] [i_3]), -16777))))));
                                var_34 = -1902163325;
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 22;i_9 += 1)
                            {
                                arr_28 [i_3] [i_3] [i_2] = (((arr_18 [12] [i_0] [i_1 - 2] [i_2] [i_3] [i_9]) & 4294967285));
                                arr_29 [i_3] [i_1 - 2] [i_2 + 1] [i_3] [i_9] = (((arr_5 [i_1 + 2] [i_2 - 1]) != (-32767 - 1)));
                                arr_30 [i_3] [i_2 - 2] [i_3] = (~2733760985);
                            }
                            var_35 = (arr_13 [i_0] [i_0] [i_0] [i_0] [10]);
                        }
                    }
                }
                var_36 = ((((min(-8013, 0))) < (((arr_17 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_1 - 2] [i_0]) ? (arr_7 [i_0] [i_1 - 1] [i_0] [i_0]) : (-1625354569 > -8013)))));
            }
        }
    }
    var_37 |= 3793984727;
    var_38 = (~(max((1561206320 / 3), (var_8 && var_7))));
    var_39 = var_6;
    #pragma endscop
}
