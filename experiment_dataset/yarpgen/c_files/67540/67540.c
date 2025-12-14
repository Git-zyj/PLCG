/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((~(max(-2147483645, -10344)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((+(min((arr_4 [i_0] [i_0] [i_0 - 3]), (arr_4 [i_0 + 4] [i_0] [i_0 + 1])))));
                var_15 = var_2;
            }
        }
    }
    var_16 = var_2;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_10 [i_3] &= (-2147483637 ^ 90);
            var_17 += (arr_4 [i_2 + 1] [i_3] [i_2 + 1]);
            arr_11 [i_3 + 1] [i_2] [i_2] = var_2;
            arr_12 [i_2] [i_2] = ((2147483644 ? (var_12 && 127) : 2611894210));
        }
        var_18 = ((3396099312186352033 ? (arr_5 [i_2 + 1]) : (-9223372036854775807 - 1)));
        arr_13 [i_2] = (arr_2 [i_2 + 1]);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = var_8;
        var_20 = (((((arr_5 [i_4]) == (arr_5 [i_4]))) ? ((var_12 ? (arr_5 [i_4]) : (arr_5 [i_4]))) : ((min(2047, (min(var_10, -2027905425)))))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    {
                        var_21 = 127;
                        var_22 = ((max((((192 << (var_6 - 8822981358906946442)))), 72057594037862400)));
                    }
                }
            }
        }
        var_23 = (min(var_2, var_4));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                {
                    arr_35 [5] [i_9] [i_10] = (((arr_31 [i_9 + 1] [i_9] [i_10]) ? (arr_31 [i_9 + 1] [i_8] [i_10]) : 72057594037862400));
                    var_24 = (!var_2);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((2147483645 ? (arr_30 [i_9 + 2]) : (arr_17 [i_9 + 2]))))));
                                arr_41 [2] [i_9] [10] [11] [i_11] [i_11] [i_12] = var_4;
                                var_26 = (((arr_0 [i_9 - 1] [i_11]) ? (arr_0 [i_10 - 1] [i_8]) : var_10));
                                var_27 = -46;
                            }
                        }
                    }
                    var_28 = (arr_0 [i_8] [i_8]);
                }
            }
        }

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_44 [i_13] = (arr_2 [i_8]);
            var_29 = (arr_20 [i_8]);
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_30 = (arr_17 [i_8]);
                            arr_57 [5] [5] [i_14] [i_15] [14] [4] = (((arr_29 [i_16 - 1] [i_16 + 1]) ? (arr_56 [i_17 - 2] [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1] [i_17] [i_15]) : (arr_27 [i_15] [i_17 - 1] [i_15])));
                            var_31 = (~121);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        {
                            arr_63 [i_8] [i_8] [i_14] [i_8] [i_15] [i_8] [i_19] = (~var_2);
                            var_32 = (arr_5 [i_8]);
                            var_33 = ((-((72057594037862380 ? 9223372036854775799 : 0))));
                            var_34 = (((arr_43 [i_8] [i_15] [i_8]) / (arr_62 [i_8])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        {
                            arr_69 [i_8] [i_15] = (arr_19 [i_14] [6] [6]);
                            var_35 = (max(var_35, (arr_18 [i_8] [i_14] [i_21])));
                            var_36 = ((92 ? 1 : 2817078437736007551));
                        }
                    }
                }
                arr_70 [i_15] [i_8] = (((((-(arr_28 [i_8])))) <= (arr_25 [i_8] [14] [i_15] [i_8])));
            }
            for (int i_22 = 3; i_22 < 13;i_22 += 1)
            {
                var_37 = 2147483645;
                var_38 = (((arr_48 [i_8] [i_22 + 1] [i_8]) || 0));
                var_39 = ((((((arr_30 [i_22]) ? 3428869331729411455 : var_2))) ? (arr_23 [i_8] [i_22 + 1] [i_22 - 2] [i_22 - 2]) : var_5));
                var_40 = ((~(arr_72 [i_14] [1] [i_22 + 1] [i_14])));
                arr_75 [i_8] [i_14] [i_22 - 1] [i_22] = (arr_18 [i_8] [i_14] [i_22 - 2]);
            }
            var_41 = var_6;
        }
        arr_76 [i_8] = (((arr_40 [i_8] [i_8] [i_8] [i_8]) ? (~2) : (arr_16 [i_8])));
        arr_77 [i_8] = (~-1135458104191378789);
        var_42 = (~1045988496233778593);
    }
    #pragma endscop
}
