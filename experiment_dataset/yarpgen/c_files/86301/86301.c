/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max(var_5, (min(1, 4181374168129264194)))), -129628764));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] = (!123198876);
            arr_7 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
            arr_8 [i_0] [i_0] = (arr_2 [i_0] [8]);
            var_12 = ((!(!var_6)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = (((((var_4 ? 192 : -5410927987894911146))) ? 1 : var_4));
                        arr_16 [i_0] [i_0] [i_0] [i_3] [4] = (arr_3 [i_0 + 2]);
                    }
                }
            }
        }
        var_14 = 246;
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_15 = var_0;
        arr_20 [i_4] = (max((~var_9), (((arr_19 [i_4] [i_4]) ? (max(-95, 7200996702160960296)) : (arr_19 [8] [8])))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            var_16 = (arr_18 [i_4]);
                            arr_35 [7] [7] [i_4] [7] [14] = (arr_33 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            arr_36 [i_4] [i_7] [i_6] [i_5] [i_4] = 8355840;
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            arr_41 [i_4] [12] [i_4] [i_4] [i_4] [i_4] = ((254 - 1563977655) ? var_3 : (((5185010769570111323 ? -8355830 : 234))));
                            var_17 = var_2;
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            arr_44 [i_4] [i_4] [i_4] = 1;
                            var_18 = ((5128 / (arr_38 [i_4] [i_4] [i_4])));
                            arr_45 [i_4] [10] [i_6] [i_7] [7] [i_6] [i_4] = (-99 ^ (!0));
                        }
                        arr_46 [i_4] [i_4] [5] [i_7] = ((1 == (arr_32 [1] [1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2])));
                        var_19 = 17;
                    }
                }
            }

            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                arr_49 [i_4 + 1] [i_5] [i_4] = var_4;
                arr_50 [i_4] [i_5] [i_4] [i_5] = var_4;
            }
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                var_20 = -0;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_21 = (~5458521571716018033);
                            arr_61 [i_4] [i_12] [i_4] [i_14] = (arr_17 [i_13]);
                            arr_62 [5] [5] [i_4] [i_13] [i_14] = ((var_3 << (14720582176017730996 - 14720582176017730992)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_69 [i_4] [i_4] [i_12] [i_4] [i_16] = (arr_26 [i_4] [i_5] [i_15] [i_5]);
                            arr_70 [i_4] [i_4] [i_12] [i_4] [i_4] = (arr_28 [i_4 + 3] [i_12] [i_12 + 2] [i_12 - 2] [i_15 + 1]);
                            arr_71 [i_4] [i_5] [i_4] [i_16] [i_4] = (~15);
                        }
                    }
                }
            }
        }
        arr_72 [i_4] = min(4, (min((((0 ? 15872 : (arr_19 [1] [i_4])))), (min(465079405197111480, (arr_56 [i_4] [i_4] [i_4] [i_4]))))));
    }
    #pragma endscop
}
