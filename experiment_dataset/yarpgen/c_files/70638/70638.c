/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70638
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

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_12 = ((263137800 ? 8195588938234250971 : 1));
                    arr_6 [i_1] [i_1] = (max((((-127 - 1) / -263137800)), -27615));
                }

                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    arr_10 [i_3] [i_1] [i_1] [i_0] = var_6;
                    var_13 = (((((var_3 ? ((var_7 ? var_0 : var_3)) : (~263137817)))) ? (~27625) : ((max(1, 3)))));
                }
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    var_14 &= ((-5465165991512419934 - (((-5401595327612265492 ? -10674 : (arr_1 [i_4 + 4]))))));
                    var_15 &= ((-((-((var_9 ? 263137800 : var_3))))));
                    var_16 -= (((arr_8 [i_1] [i_4 - 1] [i_4] [0]) ? (!422738326115492836) : (((!(arr_8 [i_0] [i_4 + 2] [i_4] [8]))))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_17 += -263137781;
                    var_18 = 1742084583;
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_19 ^= (~263137755);
                    var_20 += -102;
                    arr_19 [i_1] = (((((!(((var_2 ? var_1 : 52518)))))) != -255));
                    var_21 = ((~((7 ? 1 : -1))));
                    var_22 = (min(var_22, ((((!10689) ? -263137770 : ((~(arr_15 [i_6 + 1] [i_1]))))))));
                }
                arr_20 [i_1] = (((-102 ? 1 : 1)));
            }
        }
    }
    var_23 = var_7;
    var_24 = var_9;
    var_25 = var_6;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            {
                arr_26 [i_7] = ((~(arr_1 [i_7])));
                var_26 = (--125);

                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    arr_29 [i_9 - 1] [i_7] [i_9 + 2] = 9261;
                    var_27 = var_10;

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_28 += (!65524);
                        var_29 = (min(var_29, (((1 != (((arr_2 [i_7 + 2] [7]) ? 0 : 1)))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        {

                            for (int i_13 = 3; i_13 < 8;i_13 += 1)
                            {
                                arr_38 [i_7] [i_7] [i_11] [i_8] [i_7] = (((1482505192 == 65535) ? (((~(arr_30 [i_13 - 1] [i_7] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 + 1])))) : 4105803929));
                                var_30 = (min(var_30, (((((((-425583886 ? var_8 : var_4)))) ? (max(var_9, 12)) : ((((arr_9 [i_7 + 1] [i_12] [i_13 + 1]) ? var_5 : 14))))))));
                                var_31 ^= (~-14202);
                            }
                            /* vectorizable */
                            for (int i_14 = 4; i_14 < 11;i_14 += 1)
                            {
                                var_32 -= ((16777215 ? 1 : var_10));
                                var_33 ^= ((31910 ? 1609 : var_5));
                                var_34 = var_7;
                            }
                            arr_41 [i_7] [i_8] [i_7] [i_12] = (14 == 10689);
                        }
                    }
                }
                var_35 ^= (~14204);
            }
        }
    }
    #pragma endscop
}
