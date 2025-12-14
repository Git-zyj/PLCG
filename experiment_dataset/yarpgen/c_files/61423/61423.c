/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 += (((((arr_8 [i_2] [i_0] [i_2]) ? (((var_15 ? var_7 : (arr_0 [i_0])))) : (((((arr_8 [18] [18] [i_3]) + 9223372036854775807)) << (1 - 1))))) >> (((arr_10 [i_0] [i_0]) - 5605447770969981941))));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_23 &= ((((min((var_2 | var_19), (((var_17 ? 1 : (arr_4 [i_0] [i_1] [i_4]))))))) && var_2));
                                var_24 = (max(var_24, (arr_1 [i_0])));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(3404478369, 253));
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_5] [i_5] = (((((var_7 ? var_13 : var_10))) != (max((arr_8 [i_0] [i_0] [i_2]), 1))));
                                arr_20 [i_0] [i_1] [4] [4] [i_5] = (min((-var_0 <= -11097206080292634385), (min(0, ((var_5 ? var_10 : var_10))))));
                                var_25 ^= var_2;
                                var_26 = (min(var_26, (((((max((arr_5 [i_0]), var_11)))) * ((-(93 / var_3)))))));
                            }
                            var_27 *= (((((var_1 > 1685233815) ? 1 : 17225))) ? 1 : -7377948769336039488);

                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_28 += ((((min(((0 ? 1 : 0)), var_5))) ? (max(-var_4, ((var_19 ? var_2 : (arr_7 [i_2] [i_2]))))) : ((((((min(101, 167))) == (arr_5 [i_1])))))));
                                arr_23 [i_0] [i_1] [i_0] [5] [i_6] [i_6] = (((((((arr_11 [i_0] [i_1] [i_2] [i_2]) || var_6)))) <= (min(((min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_6]), var_5))), (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_29 = (min(17213, (((!(((var_0 ? var_17 : var_17))))))));
                                arr_26 [i_3] = (arr_2 [i_0] [i_1] [i_2]);
                            }
                            for (int i_8 = 1; i_8 < 19;i_8 += 1)
                            {
                                arr_30 [i_0] [i_0] [6] [6] [i_8] [i_8] [i_0] = ((((~(arr_29 [i_8])))) ? 0 : (~1));
                                arr_31 [i_0] [14] [i_2] [i_8] [i_8] [i_1] = ((+((var_10 << (((arr_21 [i_8] [i_1] [i_1] [i_1] [i_0]) - 2667354336))))));
                                arr_32 [i_2] [14] [i_8] &= (((((((127 ? 98 : var_11)) > (var_16 != var_6)))) & var_12));
                            }
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_30 = 8160;
                    arr_36 [i_0] [i_1] [i_0] [i_9] = ((((119 * (arr_16 [i_9] [i_1] [i_1] [i_0] [i_1]))) / (max(var_3, (arr_12 [i_0] [i_0] [i_1] [i_9] [i_9])))));
                    arr_37 [i_0] [i_0] [i_0] [i_0] = var_7;
                    var_31 = (((((-(3756560182 < 1)))) ? (max(((var_15 ? var_5 : (arr_1 [i_0]))), var_11)) : (arr_0 [i_0])));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_48 [i_10] [i_11] [i_10] [i_0] [i_0] = (min((arr_17 [i_11 + 3] [i_11] [i_11 + 1] [i_11 - 2] [7] [19]), (~var_19)));
                                arr_49 [i_0] [12] [i_1] [i_0] [12] [i_0] [i_1] = 231876294;
                                arr_50 [i_0] [i_1] [7] [i_1] [i_0] [i_0] [i_0] = (((~48311) <= ((1 ? (17981901801888988566 == 119) : ((69 ? (arr_8 [i_0] [i_0] [i_0]) : 0))))));
                            }
                        }
                    }
                    var_32 = ((17246 ? 1 : 1));
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                {
                    arr_54 [i_1] [i_0] = var_14;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_33 = ((+((((~var_15) <= ((163 << (var_10 - 85))))))));
                                arr_62 [i_0] [i_1] [i_1] [i_14] [i_14] = 122;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_34 += (arr_35 [i_0] [i_0]);
                        var_35 = var_18;
                        var_36 ^= 228;
                    }
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 22;i_18 += 1)
                        {
                            var_37 = min((arr_39 [i_0] [i_0] [i_13] [i_17]), (min(var_5, (max(var_3, var_5)))));
                            var_38 = (min(var_38, var_9));
                        }
                        var_39 += (arr_8 [i_13] [i_13] [i_0]);
                        var_40 = ((((min(var_15, 13712751543975037825))) ? (arr_55 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((((((arr_70 [16] [i_17] [i_13] [i_13] [i_1] [i_0]) % (arr_0 [i_17]))) <= -1044572107)))));
                        arr_73 [i_0] [i_1] [i_1] [i_13] [i_1] [i_1] |= ((!((((max(var_16, var_7)) << (arr_70 [i_0] [i_0] [i_0] [i_13] [i_0] [i_17]))))));
                    }
                    var_41 &= (arr_70 [i_0] [i_0] [i_1] [i_1] [i_13] [i_13]);
                }
            }
        }
    }
    #pragma endscop
}
