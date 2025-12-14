/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (min(var_16, var_4));
        var_17 -= ((!((((arr_0 [i_0] [13]) << (!131071))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (!var_14);
        var_18 = (((arr_4 [i_1]) && ((((arr_4 [i_1]) ? var_12 : (arr_4 [i_1]))))));
        var_19 ^= -var_13;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_3] = (((arr_2 [i_2]) ? (((~(((-38 <= (arr_10 [i_1] [i_2] [i_3]))))))) : (arr_9 [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_6 [i_1] [i_2])));
                                var_21 = (min(var_21, (((~(((61411 <= (arr_7 [i_1] [i_2] [i_4])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_22 = 61411;
        var_23 = var_15;
    }
    var_24 = (!var_9);
    var_25 = ((var_1 ? (min((var_13 * var_6), var_12)) : (((((~-103) <= (~70)))))));
    var_26 *= var_7;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_27 = ((250 ? (arr_27 [i_7] [i_9]) : 103));

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_28 *= -31;
                        var_29 = (((!(arr_23 [i_8 + 2]))));
                    }
                    var_30 = ((~((max((max((arr_1 [i_7] [4]), var_3)), (!12622757540623317120))))));
                }
            }
        }
    }
    #pragma endscop
}
