/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_7 && -4438795478196109360) ? ((((max(var_2, var_4))) ? var_12 : -var_6)) : var_9));
    var_16 = (!236);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 &= 41167;
                                var_18 = ((~(arr_14 [i_4 - 1] [i_4 + 1] [i_1] [i_4 - 3] [i_4 - 2])));
                            }
                        }
                    }
                    var_19 += ((((var_7 && (arr_1 [22]))) ? ((var_11 | (arr_10 [i_0] [i_0] [i_0]))) : (~236)));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((-8764 ? 233 : 2803581728));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = (max(var_20, ((-1447237507720946222 ? 41170 : 1447237507720946208))));
                    arr_19 [i_0] [i_0] [i_1] [i_0] = (-1013 ? var_11 : var_6);
                    arr_20 [i_1] [i_1] = (((((var_12 ? var_0 : ((var_8 ? var_5 : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_5])))))) ? ((-((-1751522029090046400 ? -1751522029090046400 : 31366)))) : -var_1));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] = var_12;
                                arr_26 [i_0] [i_0] [i_1] [i_0] [i_0] = 59;
                                var_21 = (min(((-6861779890004741569 - ((25350 ? (arr_11 [i_6] [i_6] [i_6] [i_6]) : (arr_21 [i_1] [i_1]))))), (((arr_11 [i_0] [i_6 - 3] [i_1] [i_0]) ? var_1 : (arr_11 [i_6 - 3] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                                arr_27 [i_0] [i_1] [i_1] [i_6] [i_0] [i_0] [i_0] = ((-((((min(var_0, 6447))) ? (((arr_8 [i_1] [i_1]) ? 151 : (arr_1 [i_0]))) : (20614 && 4687584179260954029)))));
                            }
                        }
                    }
                    arr_28 [i_1] = (((((((max(20, 22680))) ? -3771715331029074997 : (((40186 ? 17211 : -1684168035)))))) ? var_10 : ((47989532 ? (var_11 / -9163652433594914450) : (arr_6 [i_1])))));
                }
                for (int i_8 = 3; i_8 < 23;i_8 += 1)
                {
                    var_22 = arr_14 [i_0] [i_1] [i_1] [i_8 - 2] [i_0];
                    arr_32 [i_0] [i_1] [i_1] = var_14;
                }
                var_23 = ((~(4796 && -5860301570713500373)));
                arr_33 [i_1] = ((((var_1 != (arr_29 [i_1] [i_1] [i_1] [i_1]))) && (arr_29 [i_1] [i_0] [i_1] [i_1])));
                var_24 = ((-((((!2394527130) && (((-(arr_21 [i_0] [i_1])))))))));
                arr_34 [i_0] [i_0] [i_1] = arr_21 [i_0] [i_1];
            }
        }
    }
    var_25 = var_6;
    #pragma endscop
}
