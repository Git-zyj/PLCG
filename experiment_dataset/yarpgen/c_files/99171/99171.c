/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((max((1 ^ var_1), 0)))));
                var_17 -= ((((min((arr_4 [6] [i_1 + 3]), 224))) ? (arr_4 [16] [i_1 + 2]) : (((arr_4 [16] [i_1 + 4]) ? 1181 : (arr_4 [6] [i_1 + 2])))));
                var_18 &= ((((((31 + (arr_2 [i_1] [i_0])))) ? (var_7 + var_11) : (min(224, (-2147483647 - 1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_19 &= var_12;
                                var_20 = (arr_1 [i_2 - 4] [i_6]);
                            }
                            for (int i_7 = 3; i_7 < 14;i_7 += 1)
                            {
                                var_21 = 146;
                                var_22 &= ((!((((225 ? (arr_12 [i_2 + 2] [i_3] [11] [11]) : -614444078790936027)) < (max(var_9, var_10))))));
                            }
                            var_23 = (((arr_5 [i_2]) * ((36 ? (arr_0 [i_2 - 1]) : ((min(-203857713700191417, var_10)))))));
                            arr_20 [11] = var_0;
                            arr_21 [i_3] = (((((614444078790936027 ? var_11 : (~-614444078790936019)))) && ((max((var_8 + 18446744073709551615), (((7590311519394178696 != (arr_16 [i_5 - 1] [1] [i_3] [i_3] [i_2 + 1])))))))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_25 [i_2] [10] [i_2] &= (((~(64354 != 3726706347))));
                    arr_26 [i_2] [i_3] &= ((((((18446744073709551604 + 2147483647) >> (var_12 + 192775795)))) ^ (((9223372036854775807 ^ 4294959104) * (var_12 || var_9)))));
                    var_24 -= ((((((arr_10 [i_2]) ? var_13 : 614444078790936035)) >= var_1)) ? (((~(max((arr_16 [i_2] [i_2] [i_3] [i_3] [i_8]), 749820934))))) : (var_9 * var_7));
                    arr_27 [i_8] = 30922;
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_25 -= (min(((-((var_10 ? (arr_9 [i_3] [i_2 + 1]) : 0)))), (((~(var_2 <= 0))))));
                    arr_31 [i_2 - 1] = (!0);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_26 = ((1 * ((0 ? ((min(var_5, 9896))) : (!var_0)))));
                                var_27 = var_2;
                            }
                        }
                    }
                    var_28 *= ((((((arr_23 [i_3]) ? (arr_23 [i_2]) : var_13))) ? ((((arr_12 [i_2 + 1] [i_2] [i_2] [i_2 - 4]) & var_8))) : ((10360 ? var_0 : (arr_13 [i_2 + 2])))));
                    var_29 = (arr_34 [i_2] [i_3] [i_3] [i_9] [16]);
                }
                /* vectorizable */
                for (int i_12 = 4; i_12 < 15;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_46 [i_14] = ((2048 ? 64354 : 32));
                                var_30 = ((0 ? (arr_36 [i_2 + 2] [i_2 - 3] [i_2 - 4]) : (arr_41 [i_2] [i_2 - 4] [i_12 + 1] [i_13])));
                                arr_47 [i_14] [i_3] = ((arr_44 [i_2] [i_3] [i_12] [i_14] [i_2]) ? (1 ^ var_4) : (((~(arr_24 [i_2] [i_2] [i_13])))));
                            }
                        }
                    }
                    var_31 = ((-(!1)));
                    var_32 = (((((arr_42 [i_2] [i_2 - 4] [i_2 - 4] [i_3] [i_12]) ^ (arr_9 [i_3] [i_12 - 2]))) ^ (((0 ? var_7 : 26411)))));
                }
            }
        }
    }
    var_33 = 65535;
    var_34 |= (~var_9);
    #pragma endscop
}
