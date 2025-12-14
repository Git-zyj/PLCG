/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 3014790845;
    var_14 ^= min(((((((var_5 ? var_10 : var_12))) || (!var_3)))), (4294967295 & 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((arr_2 [i_1]) ? ((((782193641 && 4294967295) << ((((~(arr_2 [i_1]))) - 106996649))))) : ((8388607 ? (arr_1 [i_0]) : 749668850))))));
                var_16 = arr_1 [i_1];

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_17 -= (((max((!var_8), 4294967284))) ? 4294967286 : (max((16 == 2323843839), 778584330)));
                    var_18 = (max(var_18, (((~1094014023) * 3014790845))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 |= max(3787716810, 591893850);
                                var_20 = 2838705281;
                                var_21 = ((arr_8 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_4 - 1]) ? (var_6 / var_6) : ((((778584330 > (arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_4 + 1]))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, (min((~3200953286), (((arr_14 [i_1] [i_1]) ? 442017504 : (arr_4 [i_0] [5] [i_0])))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_23 ^= ((~(((!(var_5 && 1023))))));
                    var_24 = ((-((-(((!(arr_15 [i_1] [i_1] [i_5] [13] [i_5]))))))));
                    var_25 = 4294967295;
                    var_26 = (((3014790845 & (var_2 ^ var_9))) & ((((1160473470 >> (((arr_8 [2] [i_5] [i_1] [i_0]) - 3895192590)))) | (4294967283 ^ 4294967295))));
                    var_27 = (min(var_27, (((((((305009526 & (arr_18 [4]))) ^ ((((var_7 && (arr_9 [i_1] [7]))))))) != 536870911)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_28 = (3014790861 ? var_5 : 3984222406);
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_8] = (((!4294967282) || (arr_24 [3] [i_8 - 1] [i_6] [i_7 + 1] [i_1] [15])));
                                var_29 = (max(var_29, (var_3 * var_4)));
                                arr_29 [14] [i_1] [5] [i_1] [13] [i_1] [i_1] = (~(0 >> 11));
                            }
                        }
                    }

                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        var_30 = (!0);
                        var_31 = ((((3941224399 ? 2898570413 : 3460401584))) ? ((536870913 + (arr_13 [i_1] [12] [i_6]))) : (var_7 && 4294967295));
                        var_32 = (max(var_32, (((arr_6 [i_1] [13] [i_9 - 3]) ? 3787716812 : (arr_23 [i_9 + 1] [i_1])))));
                        var_33 += var_12;
                    }
                    var_34 = (var_4 ? (arr_31 [i_0] [i_1] [i_6] [i_0]) : 4294967295);
                }
            }
        }
    }
    var_35 = var_10;
    var_36 -= (((min(var_9, 1346065955))) ? (min((min(var_5, 0)), (max(4294967295, var_1)))) : (min(2592526416, ((0 ? var_8 : var_7)))));
    #pragma endscop
}
