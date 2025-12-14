/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~9) ? var_7 : ((var_2 ? 13401187107514415421 : var_18))));
    var_20 = 22339;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 += var_18;
                    var_22 = 1;
                }
            }
        }
    }
    var_23 = ((((((((var_12 ? var_17 : var_4))) ? -var_10 : (131040 <= 13401187107514415438)))) ? ((~(var_4 && var_14))) : (((37 || 14830966337671974552) ^ ((var_12 ? 249 : var_1))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_17 [i_6] [i_6] [i_6] [i_3] = (((~var_10) | ((((44 && (arr_9 [15])))))));
                        var_24 = var_10;
                        var_25 = -62603;
                        arr_18 [i_3] [i_4] [i_6] [i_5] [i_6] = (~92);
                        var_26 = (min(var_26, 5045556966195136194));
                    }
                }
            }
            var_27 *= ((var_8 & (arr_10 [i_3] [i_3] [i_3])));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            var_28 = (((57 ? var_3 : (arr_13 [i_7] [i_3] [i_3]))));

            for (int i_8 = 4; i_8 < 22;i_8 += 1)
            {
                arr_23 [i_3] [i_3] [i_3] &= (((arr_13 [i_8 + 3] [i_8 + 1] [i_8 + 2]) ^ -38));
                var_29 = (((~-38) & ((var_11 ? var_8 : 17842556718373537901))));
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    var_30 -= ((var_14 < (arr_16 [i_10] [i_7])));
                    arr_28 [i_10] [i_10] [i_3] [i_9] [i_3] [i_3] = -4348827045929444032;
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        var_31 += (((arr_26 [i_12 - 1] [i_7] [3] [i_11] [i_12] [i_11]) || var_6));
                        arr_34 [i_12] [i_12] = (arr_26 [i_12] [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12 + 3]);
                        var_32 &= ((2604 ? (~var_15) : 1));
                    }
                    arr_35 [1] [i_7] [i_9] [i_11] = 10275733967430184690;
                }
                var_33 = (arr_20 [i_9] [i_7] [i_3]);
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                arr_39 [i_13] [i_7] [i_3] = (~7612432605580924669);
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_34 = (arr_8 [i_7] [i_14]);
                            arr_45 [i_14] [i_14] [i_13] = 2015184925;
                            var_35 = (min(var_35, (((0 ? (var_6 <= 16291365998433092838) : var_17)))));
                            var_36 ^= (0 ? var_2 : ((30720 ? 5045556966195136195 : var_3)));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_37 *= (arr_43 [i_3] [i_7] [i_16]);
                arr_48 [i_3] [i_7] [i_7] = var_1;
            }
            arr_49 [i_3] [i_3] [i_7] = (((7612432605580924669 ? 49152 : 3502764589445024927)));
        }
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            var_38 = -var_11;

            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 23;i_20 += 1)
                    {
                        {
                            arr_63 [i_20] [i_18] [i_19] [i_3] [i_18] [i_3] = var_1;
                            arr_64 [i_3] [i_18] [i_3] = ((((var_18 ? 16033842308578569661 : -26)) ^ (arr_32 [i_3] [i_3] [i_3] [i_3])));
                            var_39 -= ((((var_16 ? 1989305856 : 32767)) + -var_17));
                            arr_65 [i_18] [i_18] [i_19] [i_18] [8] [i_18] [i_18] = (((arr_60 [i_18] [i_20 + 1] [18] [i_20 + 1] [i_3] [i_18]) ? (arr_60 [i_18] [i_20 - 1] [i_20] [i_20 - 2] [i_17] [i_18]) : 1888361121));
                        }
                    }
                }
                arr_66 [i_17] [i_17] [i_18] [i_17] = (arr_13 [i_3] [i_17] [i_18]);
            }
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                arr_71 [i_3] [i_3] [i_21] = ((~(arr_59 [i_21] [i_3] [7] [7] [i_21] [i_21])));
                arr_72 [i_21] = 4638713482039261375;
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 24;i_23 += 1)
            {
                {
                    arr_80 [i_3] [i_22] [i_3] &= ((-(arr_31 [i_3] [14] [i_23 - 1])));
                    var_40 = (max(var_40, ((((var_2 < var_14) | 1)))));
                }
            }
        }
    }
    #pragma endscop
}
