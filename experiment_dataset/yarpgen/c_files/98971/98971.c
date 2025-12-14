/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 1;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_3 - 1] [i_0] [i_0] [i_0 + 1] = ((!(((1 ? 255 : 70)))));
                            arr_11 [i_0 + 3] [i_0 + 3] [i_1] [i_0] [i_3 + 1] = var_7;
                            var_19 = (max(var_19, (((((((var_9 ? (arr_1 [i_1] [11]) : (arr_1 [1] [i_1])))) / (max(60223794, 131071)))) * (((6827 / (max(0, 9223372036854775807)))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] = (min(((3764 ? (((var_4 ? 1854384979 : (arr_8 [i_0] [5])))) : (((arr_3 [i_0]) ? var_0 : var_5)))), (min(62914560, (((4227378395 - (arr_4 [i_0 - 3] [0]))))))));
                            var_20 ^= (!((max(var_10, 1))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = (max((max(137438953471, 60223818)), (~1)));
                                var_22 -= 16676;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_34 [i_11] [9] [i_9] [i_8] [0] = var_7;
                                arr_35 [i_7] [i_8] [i_9] [i_10] [i_8] = ((-(((arr_18 [i_7 - 1] [i_9] [i_9] [i_7 - 1] [i_9]) ? (arr_19 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_8]) : ((1 ? (arr_30 [i_11 - 4]) : var_16))))));
                                arr_36 [i_8] [10] [i_8] [i_11 - 1] [i_10] = (((((arr_5 [i_11 + 1] [i_8] [i_9]) + 1))) || ((min(15974590621035723776, 62914560))));
                            }
                        }
                    }
                }
                arr_37 [i_8] [i_7] = ((min((arr_19 [i_7 - 2] [14] [i_7] [i_7 - 2] [i_8]), var_1)));
                var_23 = (((max((18446744073709551615 >= 1), (var_3 + 1))) << (-2561646074932556815 - 3029)));
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
