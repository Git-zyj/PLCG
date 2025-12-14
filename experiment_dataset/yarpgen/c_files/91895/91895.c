/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (~var_0);
                                var_21 = ((-((min(var_16, (arr_11 [i_0] [i_0] [2] [i_3] [i_4] [i_4] [i_0]))))));
                                var_22 = (arr_2 [i_0]);
                                var_23 = min(18446744073709551615, (max(9706, (((arr_13 [i_0] [i_1] [i_2] [4] [i_2]) ? 0 : 18446744073709551615)))));
                                var_24 |= (min(4, 8142500874615181422));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] = var_2;
                                var_25 = (arr_18 [7] [i_5 - 1] [i_5 - 1] [i_7 + 2] [i_7] [i_7]);
                            }
                        }
                    }
                    var_26 = (min((arr_8 [i_0] [i_1]), var_12));
                    var_27 = var_15;
                    var_28 = var_2;
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_29 &= (arr_0 [i_0] [i_8]);
                        var_30 = (arr_9 [i_0] [i_1] [i_8] [i_9] [i_9] [i_1]);
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_31 = var_14;
                        var_32 = (arr_3 [15] [7]);
                        var_33 = (arr_28 [i_0] [i_0] [i_0] [i_0] [i_8 - 2] [i_0]);
                    }
                    arr_32 [i_0] [i_1] [i_0] [i_1] = ((127 ? ((~(arr_4 [i_0]))) : 31820));
                    var_34 = (max(var_34, (arr_19 [i_0] [i_8])));
                }
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    arr_36 [i_0] = (min((min(422065109473705469, (max(18446744073709551607, 119)))), 1799101814713721460));
                    var_35 = var_2;
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_36 = (arr_34 [i_0] [i_0] [i_0]);
                    var_37 = (max(var_37, (((((arr_8 [i_0] [15]) >= (arr_8 [i_0] [i_1])))))));
                    arr_40 [i_0] [i_1] [i_0] [i_0] = var_19;
                    arr_41 [i_0] [i_0] [i_0] [i_12] = (arr_12 [i_0]);
                }
                arr_42 [i_0] [i_0] [i_0] = 2364703619;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            {
                var_38 = ((102 ? -603646079 : 5843312302352586761));
                var_39 &= (max((((157 ? -20390 : 1799101814713721465))), -102));
            }
        }
    }
    #pragma endscop
}
