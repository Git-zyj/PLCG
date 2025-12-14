/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 2474;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 -= ((279358647 ? 3560918938 : 16042602221885220167));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (((((750951794175187259 ? 715721602 : var_0))) ? -1605908465 : (arr_13 [i_3 - 1] [i_2] [i_3 - 1] [i_3 - 1] [i_3])));
                                arr_15 [i_0] [6] [i_2 + 3] [i_3] [i_2] = (!32767);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_18 = (((arr_1 [i_5] [i_5]) ? 3847613678 : 50324));

        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_26 [i_6] [i_6] = -var_3;
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_6] = ((var_8 ? (arr_25 [i_5] [i_6] [i_6 + 2] [i_5]) : (arr_13 [i_8] [i_6] [i_6] [i_6] [i_5])));
                        var_19 = 879720688;
                    }
                }
            }
            arr_28 [9] [i_6] [i_5] = (((arr_24 [i_6] [i_6] [i_6 - 1]) ? (((var_10 ? var_10 : (arr_16 [i_5])))) : -6240438625657461437));
        }
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            arr_32 [i_9] = ((8640465538391631973 ? (arr_11 [i_9] [i_9 + 1] [i_9]) : (arr_11 [i_9 - 1] [i_9 - 1] [i_9])));
            var_20 = 4339728478687786250;
        }
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        arr_35 [8] [8] = ((((((((25492 ? (arr_33 [i_10]) : 1994716332))) ? var_14 : 8038))) ? ((+((var_13 ? (arr_33 [i_10]) : (arr_33 [i_10]))))) : 9591));
        arr_36 [i_10] [i_10] |= var_3;
        arr_37 [i_10] [i_10] |= ((101270178 ? -var_2 : 15590377931339498681));
    }
    var_21 = (((((1186661663 ? (2323091696 != 16126469783645931737) : var_10))) ? var_6 : (min((~var_11), ((min(var_4, 7996)))))));
    var_22 = var_6;
    var_23 = (!var_6);
    var_24 = ((~(((((8437349242553702752 ? 1129785462 : 3559880707))) ? (min(-465271841, 193)) : var_1))));
    #pragma endscop
}
