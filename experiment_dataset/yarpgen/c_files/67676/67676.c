/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = ((((min(((((arr_6 [i_0] [i_0] [i_0]) & 0))), ((-501790495 ? 1431976541999884268 : 501790494))))) ? (((!(arr_3 [i_4] [i_4 + 3] [i_0])))) : (1 == -501790494)));
                                var_13 = (max(var_13, var_8));
                            }
                        }
                    }
                    var_14 = (((((max((arr_1 [i_1] [i_2]), (arr_1 [i_0] [i_2]))))) | ((+((var_5 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_15 += (var_9 <= var_0);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_16 = ((-(min((max(0, (arr_12 [i_5]))), 501790494))));
                        var_17 = (arr_12 [i_5]);
                        arr_21 [i_8] [i_8] [i_8] [i_5] |= (!3341293866397540422);
                    }
                    var_18 = (min((95 && 1), (max((((var_3 ? (arr_20 [i_5] [i_6] [i_6] [i_7] [i_7]) : var_4))), (arr_12 [i_6])))));
                    var_19 = ((((min((arr_16 [i_7] [i_5] [i_5]), (arr_13 [i_7])))) ? (((((max((arr_13 [i_5]), (arr_15 [i_5])))) ? var_3 : (arr_18 [i_5] [i_6] [i_7] [i_5])))) : 15105450207312011194));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_20 = (min(var_20, (((((min((((!(arr_22 [i_5] [i_6] [i_6])))), (max((arr_24 [i_5] [i_5]), (arr_20 [i_5] [i_6] [i_5] [i_5] [i_5])))))) ? (((!(!var_1)))) : (arr_15 [0]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_21 = (arr_13 [i_11]);
                                var_22 -= (max(var_6, (min((min(-501790495, (arr_12 [i_5]))), var_5))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((((3341293866397540422 ? (arr_27 [i_6] [i_6] [i_9] [i_6] [i_9] [i_6]) : ((var_11 ? 501790494 : var_5))))) ? ((((min(-18409, 501790484))))) : (arr_14 [i_13]))))));
                                var_24 -= ((!((min(var_10, -501790481)))));
                                var_25 = (min(var_25, ((~((max((arr_27 [i_12] [i_13] [i_13] [i_13 + 2] [i_13] [i_12]), (arr_27 [i_12] [i_12] [i_13] [i_13 + 2] [i_12] [i_12]))))))));
                                arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] = ((((min(var_0, (arr_31 [i_13] [i_12] [i_9] [i_6] [i_5])))) ? -501790495 : (arr_30 [i_5] [i_5] [i_9] [i_6] [i_6] [i_5] [i_5])));
                            }
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            {
                                var_26 = ((!(arr_28 [i_5] [i_6] [i_14] [i_5] [i_5])));
                                var_27 = (min(var_27, ((max((((((max(0, -501790494))) ? (((((arr_44 [i_16] [i_15] [i_15] [i_15] [i_6] [i_5]) >= (arr_41 [i_5] [i_6] [i_15]))))) : (arr_42 [i_15] [i_5] [i_5])))), ((-(max((arr_14 [i_15]), (arr_15 [i_15]))))))))));
                            }
                        }
                    }
                    arr_45 [i_5] [i_6] [i_5] = (arr_44 [i_6] [i_6] [i_5] [i_6] [i_6] [i_6]);
                }
                for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                {
                    var_28 = (max((((((min(var_3, 1))) || ((!(arr_24 [i_6] [i_6])))))), var_1));
                    var_29 = (arr_19 [i_5] [i_5] [i_5] [i_5]);
                }
                var_30 -= 500432491;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 22;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            {
                var_31 |= (arr_49 [i_18]);
                var_32 = (((((arr_50 [i_18]) ? (arr_50 [i_18]) : -501790495))));
                var_33 -= (min(0, 17670));
            }
        }
    }
    #pragma endscop
}
