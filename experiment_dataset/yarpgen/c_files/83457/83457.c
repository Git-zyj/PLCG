/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((max(1138962096, 4294967284))) >= (min(var_4, 1138962103))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_2] = -78;
                var_12 = (78 && 12);
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_13 = ((arr_12 [i_4] [i_1]) & -74);
                            var_14 = (var_8 != 22761);
                        }
                    }
                }
                var_15 -= var_2;
            }
            var_16 = var_10;
        }
        var_17 = (~var_0);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_18 = ((min((arr_10 [i_0] [i_6] [i_6] [i_7]), var_8)));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (max(8388607, ((var_3 ? 78 : 331172331))));
                    var_19 += ((max(-79, 1)));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_20 = 1;
                        var_21 = ((~(min((min(27521, (arr_14 [i_0] [i_6] [i_7] [i_8] [i_8]))), (1 + var_10)))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 3677365608;
                        var_22 += (min(((((arr_11 [i_0] [i_0] [i_0] [i_0]) && 1))), var_4));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_23 = (((min(2123793673, 1)) + 49));
                                var_24 = ((((max(1, 4294967295))) && ((min(1296840048, var_3)))));
                                var_25 -= ((((((max(2767203792, 4750518083047787575))) && var_9)) && ((max((arr_21 [i_10] [i_10] [i_9] [i_7] [i_6] [i_0]), (arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                                var_26 = (max(((max((min(4161536, 1)), var_1))), ((min(var_3, var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_27 = (min(((min((min(9223372036854775807, 1)), -var_4))), (((max(var_2, (arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))) - (arr_31 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))));
                            var_28 *= ((((min(var_8, 4290805760)) <= (((((arr_21 [i_11] [i_12] [i_13] [i_14] [i_14] [i_15]) && 2767203798)))))) ? var_8 : (min(((min(var_8, (arr_26 [i_11] [i_12] [i_13] [i_14])))), ((var_9 >> (var_1 - 66456445))))));
                        }
                        var_29 = ((~(max((1974792343 | 10651931048260796876), (max(var_9, (arr_16 [i_11])))))));
                    }
                }
            }
        }
        var_30 *= min((((4215987120 ? var_10 : 1))), ((4294967293 ? (arr_40 [i_11] [i_11] [i_11] [i_11]) : var_6)));
        var_31 = (!var_10);
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    {
                        var_32 = (!440956146413958943);
                        var_33 = ((1974792370 ? var_0 : ((min(((var_2 ? 2767203792 : 42)), (1 && 0))))));
                        var_34 = -var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
