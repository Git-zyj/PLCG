/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max(var_1, ((((123 ? var_2 : -108)) - 4294967295))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 -= (((((((((arr_1 [i_0]) + var_7))) && var_1))) | ((((arr_0 [i_0]) >= var_1)))));
        arr_2 [i_0] [i_0] |= ((!((max((((var_1 < (arr_1 [i_0])))), (max(var_4, var_3)))))));
        arr_3 [i_0] [i_0] |= ((!(~var_9)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_14 *= (--11101975198655670410);

        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_4] [i_4 + 1] [i_3] [i_2 + 1] [i_2] = var_0;
                        arr_16 [i_1] [16] [i_3 - 1] [16] |= (((10070191816204310216 / var_11) ? var_0 : 132));
                        var_15 = ((-(!138)));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_16 = var_3;
                arr_20 [i_1] [i_2] [18] [7] = var_6;
            }
            arr_21 [i_2] [i_2] = (((!var_1) - (127 && var_11)));
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_17 |= ((var_11 ? (arr_22 [i_6 + 1]) : var_1));
            var_18 = (max(var_18, (138 == -31124)));
            arr_24 [i_1] = 117;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        var_19 = ((var_6 | ((49933 / (-2147483647 - 1)))));
                        arr_30 [i_8] [i_7] [i_6] [i_1 + 1] [i_1] = (!var_10);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_37 [9] [i_1] = (((137 >= var_2) ^ (((24 != (arr_23 [i_1] [i_1] [i_1]))))));
                    var_20 = var_11;

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_21 = (((arr_25 [i_1] [0] [i_1] [i_11]) | var_9));
                        arr_41 [i_1] [i_9] [i_10] [i_10] [i_11] = ((-(arr_35 [i_1] [i_9] [i_10] [i_11])));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_22 = (max(var_22, var_1));
                        var_23 = ((var_4 ? (!var_10) : 3652737987));
                        var_24 = ((var_9 && var_8) && (!96));
                        var_25 = ((var_11 <= (arr_42 [i_1 - 2] [i_1 - 3] [i_1 + 2])));
                    }
                    arr_44 [i_1] [i_9] [i_10] = (arr_18 [i_9] [i_9]);
                }
            }
        }
        var_26 = (!245);
    }
    var_27 *= (max((max(((132 ? var_11 : var_8)), ((min(var_6, var_3))))), (((var_1 & (~var_4))))));

    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_28 = (arr_11 [i_13] [i_13]);
        arr_49 [i_13] = ((((((-(arr_32 [i_13] [i_13])))) & (max(642229303, (arr_42 [i_13] [i_13] [i_13]))))));
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        var_29 = 16;

        for (int i_15 = 1; i_15 < 14;i_15 += 1)
        {
            var_30 |= var_3;
            var_31 = (max(((123 ? (min(var_0, var_11)) : (arr_45 [i_15 + 1]))), (arr_53 [i_14] [i_14])));
        }
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            arr_58 [i_16] = (max(var_7, (max(((min(var_11, var_7))), 1593337236))));
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 15;i_19 += 1)
                    {
                        {
                            arr_67 [i_19] [i_18] [i_18] [i_18] [i_18] [i_16] [i_14] = (max((min(((var_5 ? (arr_39 [i_14] [i_14] [i_17] [i_18 + 3] [i_17]) : 2147483632)), -1)), -var_1));
                            arr_68 [i_18] [4] [i_18] [i_18] [1] = ((max((9223372036854775807 & var_1), var_9)));
                            var_32 = arr_66 [i_14] [i_16] [i_16] [i_18 - 1] [i_19 - 2];
                        }
                    }
                }
            }

            for (int i_20 = 0; i_20 < 16;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        {
                            var_33 = (max(var_33, (--0)));
                            arr_78 [i_14] [i_22] [i_20] [i_21] [i_14] [i_14] = ((-(!-5967)));
                            var_34 = ((((-126 && (!var_0))) ? var_11 : (-99 || var_5)));
                            var_35 &= 579916182;
                            var_36 = -92;
                        }
                    }
                }
                arr_79 [i_20] [i_14] [i_14] = ((!(arr_60 [i_14])));
            }

            for (int i_23 = 0; i_23 < 16;i_23 += 1)
            {
                var_37 = (min(var_37, var_4));
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 16;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 14;i_25 += 1)
                    {
                        {
                            var_38 = ((((max(((-(arr_7 [i_14] [i_14]))), (((var_7 <= (arr_40 [8] [i_16] [8] [i_23] [i_25] [i_25]))))))) ? ((~(!var_7))) : ((~(arr_83 [7] [i_16] [i_23] [i_24] [i_25] [i_25])))));
                            var_39 = (((min((!var_0), (((arr_22 [i_14]) ? 18 : var_11)))) >= var_4));
                            arr_86 [i_14] [i_16] [i_23] [i_24] [1] = (max((((!(arr_76 [4] [i_16] [4] [i_24] [i_16])))), (min((min((arr_46 [i_16]), 123)), ((((arr_32 [i_14] [i_14]) ? -21301 : (arr_9 [i_16] [i_23] [i_25 - 3]))))))));
                        }
                    }
                }
                arr_87 [i_14] [i_14] [i_14] [i_14] = ((((((179 == 576460752303423487) != (var_10 != var_0)))) - (max((arr_70 [i_23] [i_14] [i_16] [i_14]), (1 < var_9)))));
                var_40 = (min(var_40, var_6));
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 13;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 16;i_27 += 1)
                    {
                        {
                            var_41 = ((((~(((18771 >= (arr_84 [i_14] [i_14] [i_14] [i_14] [i_14])))))) * (((min(var_3, var_7))))));
                            arr_93 [i_27] [i_26] [i_23] [i_26] [i_14] = ((var_8 && (((min(var_2, var_5))))));
                        }
                    }
                }
            }
        }
        var_42 = ((((((max((arr_34 [i_14] [i_14] [i_14]), var_0))) || (var_5 && var_0))) && var_1));
    }
    #pragma endscop
}
