/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] = 26621;
            arr_7 [i_1] = var_10;
            arr_8 [i_0] [i_1] = 2769715292;

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_15 [i_0] [i_0] [i_3] = (arr_2 [i_3]);

                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_1] [1] [i_3] [i_4] = 389730584;
                        arr_20 [i_0] [i_0] [i_0] [i_0] [8] [i_0] = (51300 & 1937);
                        arr_21 [i_2] [9] [16] [i_3] [i_2] [i_3] = ((arr_3 [i_3]) / ((15541 ? (arr_18 [i_4 - 1] [i_3] [4] [i_2] [4] [i_0]) : var_15)));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] = var_8;
                }
                var_19 += ((!(arr_1 [i_0])));
                arr_23 [i_0] [i_0] = var_17;
                var_20 = (48283 != 4282245925);
            }
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_28 [i_0] = ((3514792806 ? var_4 : 3514792806));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_35 [i_0] [i_0] [0] [i_0] [0] [i_6] = (arr_26 [i_0] [i_5]);
                        var_21 = (min(var_21, var_2));
                        arr_36 [i_6] = 7651;
                    }
                }
            }
            arr_37 [i_5] [i_5 - 1] = ((389730602 ? 8764 : (~43109)));
            arr_38 [i_0] [i_0] = 3022;
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_22 = 17274;
                            arr_48 [i_8] [i_8] [i_9] = -8939;
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_23 ^= (var_18 > var_18);
                            arr_53 [i_8] [i_10] [i_10 - 1] [i_8] [i_8] [i_0] [i_8] = (!var_0);
                        }
                        arr_54 [i_8] [i_8] [1] [i_10] = ((var_3 ? (arr_27 [i_9] [16] [i_0]) : 49148));
                        var_24 = ((!(arr_9 [i_0] [i_8 + 1] [i_9] [i_10 + 1])));
                    }
                }
            }
            var_25 = arr_14 [i_0] [i_0] [i_0] [i_8 + 2] [i_0];
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 19;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            arr_65 [i_15] [i_15 + 1] [i_15] [i_14] [i_0] [i_0] [i_0] = (((arr_63 [i_13 + 2] [i_14] [i_14] [i_15 - 3] [18]) < var_11));
                            var_26 = (((var_13 ? 48283 : 1563976702)));
                            var_27 = (((arr_49 [i_0] [i_0] [i_14] [i_0] [i_0]) && (arr_49 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_66 [i_0] [i_13 - 1] [i_14 - 1] [i_0] [i_16] = (~4151467240);
                            arr_67 [i_0] [i_0] [i_0] [i_0] &= var_11;
                        }
                    }
                }
                arr_68 [i_13 - 1] [i_13] [i_13 + 1] = var_15;
                var_28 = (min(var_28, ((((arr_46 [i_0] [i_0] [i_14] [i_14] [i_13]) | var_17)))));
            }
            for (int i_17 = 1; i_17 < 19;i_17 += 1) /* same iter space */
            {
                var_29 = ((var_18 ? (arr_32 [6] [i_13] [i_13] [i_13 + 2] [i_13 - 1] [i_17 + 1]) : (arr_42 [i_13] [i_13 - 2] [i_13] [i_13 - 1])));
                arr_71 [i_13] = var_13;
            }
            var_30 = (arr_14 [i_0] [i_0] [i_13 - 1] [i_13] [i_13 - 1]);
        }
        var_31 -= (min((((arr_63 [i_0] [i_0] [10] [i_0] [i_0]) ? (arr_33 [i_0] [2] [i_0] [i_0]) : 17257)), ((~(arr_33 [i_0] [16] [i_0] [i_0])))));
        arr_72 [i_0] = var_3;
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_19 = 4; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                {
                    var_32 = var_13;
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 19;i_22 += 1)
                        {
                            {
                                arr_87 [i_22] [17] [i_22 + 1] [i_22 + 1] [i_18] [i_22] = ((((min((arr_76 [i_22 + 1] [i_22 + 1] [i_19 - 3]), (arr_39 [i_18] [i_18] [i_21])))) ? 43427 : 55048));
                                arr_88 [i_18] [i_19] [i_19] [i_19] [i_22] |= ((min(var_18, var_7)));
                                arr_89 [i_18] [i_21] [i_20] [i_19] [i_18] = ((((min(var_12, (arr_83 [i_18] [i_18] [i_22 - 1] [i_19 - 3])))) ? ((var_18 ? (arr_11 [i_18] [i_19] [i_22 + 1] [i_19 - 1]) : var_8)) : (~var_1)));
                                arr_90 [10] [1] [i_21] [i_18] [i_20] [6] [i_18] = ((~((((min(22230, (arr_1 [i_18])))) ? (min(var_13, var_9)) : (((min((arr_79 [i_19] [i_20] [i_22 + 1]), var_10))))))));
                                var_33 *= min(780174489, (arr_9 [i_21] [i_21] [i_21] [i_21]));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 20;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 20;i_24 += 1)
            {
                {
                    var_34 = (min(var_34, ((min((arr_9 [i_18] [i_18] [7] [i_24]), (!1))))));
                    arr_95 [i_18] = (min(((min(2185395217462890046, 3514792804))), var_14));
                    arr_96 [i_18] [i_18] = (arr_30 [i_18] [i_23] [i_24]);
                    arr_97 [i_18] = ((~(min(((197803659 ? var_10 : var_11)), (arr_85 [i_18] [i_18] [i_23] [1] [i_24])))));
                }
            }
        }
        var_35 *= var_10;
    }
    var_36 -= (min((min(var_0, 4151467240)), (--3514792791)));
    /* LoopNest 2 */
    for (int i_25 = 2; i_25 < 17;i_25 += 1)
    {
        for (int i_26 = 3; i_26 < 16;i_26 += 1)
        {
            {
                arr_102 [i_26] = 1432;
                var_37 ^= 3514792806;
            }
        }
    }
    #pragma endscop
}
