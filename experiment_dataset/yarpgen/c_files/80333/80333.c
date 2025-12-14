/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = ((var_8 + var_7) ? (~var_4) : var_9);
                    arr_8 [i_1] [i_1] = var_3;
                    arr_9 [i_1] [1] [15] = -34;
                    arr_10 [i_0] [i_1] [i_0] = (var_1 <= var_9);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    var_14 = ((-12155 ? 31 : 217));
                    arr_16 [i_4] [12] [i_4] = ((-3753 ? 56518 : 4290226995));
                    var_15 = (min(var_15, -var_13));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_16 = (((var_10 / var_0) ? (!194) : ((var_13 ? var_3 : var_11))));
        var_17 = (((((var_4 ? ((var_1 ? var_0 : var_5)) : var_11))) ? var_11 : ((12154 ? 9317975959124434146 : 3670852939))));
        var_18 = ((var_7 ? ((var_1 ? var_10 : var_11)) : (((var_0 ? var_6 : var_6)))));

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_19 = ((((var_9 ? var_4 : var_5))) ? (min(var_0, var_4)) : (((((((12144 ? 530177809 : 9317975959124434159))) && var_3)))));
            var_20 = var_4;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_21 = (min(var_21, (((((max(9128768114585117461, 56518))) ? var_6 : ((min(var_2, var_3))))))));
                        var_22 = ((var_11 ? ((-((max(27, -23))))) : ((((min(1, 31))) ? var_13 : var_10))));
                    }
                }
            }
        }

        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            arr_29 [1] [i_9] [i_9 + 1] = ((32 ? (~13243461351053220331) : -5896889298640784041));
            arr_30 [i_9] = ((((max((var_12 + var_2), var_8))) ? (var_8 || var_11) : ((var_2 ? -var_4 : (var_10 >= var_12)))));
            arr_31 [i_9] = var_11;
            var_23 = ((var_12 ? (((min(8339, -319)))) : (min(var_4, var_9))));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_35 [i_10] = (min((~var_3), ((((max(var_12, var_1))) ? (~var_13) : ((var_1 ? var_13 : var_10))))));
            arr_36 [i_5] [10] |= (min(((((min(0, -120))) & (var_5 && var_6))), (((var_4 ^ var_3) ? var_13 : 4601454522664428884))));
        }
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            var_24 *= var_4;
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_43 [1] = (((min(var_1, var_5))) ? (~var_9) : (max(2405159456, 12955902141123392368)));
                        arr_44 [i_5] [i_11] [i_12 - 3] [i_13] [i_11 - 1] = (((min(9317975959124434141, -4))) && (min(var_7, var_7)));
                        arr_45 [i_5] [i_11 - 1] [i_5] [i_13] = (min(((56518 ? 30810 : 65528)), 5));
                        arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((~((((max(var_7, var_8))) >> (var_0 != var_2)))));
                    }
                }
            }
            var_25 = (min((((var_11 ? var_5 : var_10))), var_4));
            var_26 = (max(30813, 119));
            arr_47 [i_5] [i_5] [9] = (((min(var_9, var_3)) >= (var_0 / var_5)));
        }
    }
    for (int i_14 = 1; i_14 < 14;i_14 += 1)
    {
        arr_50 [i_14] = (min(27504, (-319 == 65383)));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                {
                    var_27 = var_2;

                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {

                        for (int i_18 = 3; i_18 < 14;i_18 += 1)
                        {
                            var_28 = (max(var_1, ((var_10 >> (var_10 - 44411)))));
                            arr_60 [i_14] [i_14] [5] [i_16] [5] [i_18 + 3] [i_14] = (max((min(var_12, (max(1150506462, -5901395772037886398)))), (var_11 == var_11)));
                        }
                        var_29 = (((((min(var_8, var_7)) && (((var_8 ? var_11 : var_0))))) && (((var_1 ? 7 : var_10)))));
                        var_30 -= (min(((0 ? -120 : 68)), (var_6 == var_5)));
                    }
                }
            }
        }
        arr_61 [i_14] = (((1 * 1018204541) && ((var_8 == (((-32767 - 1) ? 65535 : 62208))))));
    }
    var_31 = var_9;
    var_32 = ((((((min(var_1, var_13))) + var_3)) * ((var_1 * (var_13 != var_3)))));
    #pragma endscop
}
