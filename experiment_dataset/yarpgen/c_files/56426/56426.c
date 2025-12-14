/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_19 += var_11;
                        arr_10 [i_3] = ((28999 << (783854549 - 783854546)));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((~(((arr_7 [i_3] [i_2] [1] [i_1] [i_1] [i_0]) ? (arr_5 [13]) : (arr_2 [i_0] [i_1])))));
                        arr_12 [i_3] [i_0] [i_1] [i_2] [i_2] [i_2] = (var_1 && var_15);
                        var_20 = (max(var_20, var_3));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_21 = (arr_3 [i_2 - 1] [i_2 + 2] [i_2 - 1]);
                        var_22 = (min(((((var_10 != (arr_8 [3] [i_2] [i_2] [i_1] [i_1] [i_0 + 1]))) ? (((((arr_9 [i_4] [1]) <= var_15)))) : (min(18446744073709551615, var_0)))), (arr_2 [i_1] [i_2])));
                    }
                    var_23 -= (arr_3 [i_0 + 3] [i_0] [i_2 + 1]);
                    var_24 += (arr_9 [i_2] [i_0 + 3]);
                    var_25 *= (((arr_6 [i_0] [i_2 + 3] [i_0]) * (((max(-839088400, var_4)) * var_8))));
                }
            }
        }
    }
    var_26 &= 28999;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_27 = (min(var_27, ((((min((arr_19 [i_5] [i_6] [i_5]), (arr_20 [i_5] [i_5 + 2] [i_5 - 1]))) == (arr_22 [i_6 - 1] [i_7]))))));
                    var_28 = ((((min((arr_24 [i_5] [i_6 - 1] [i_7] [i_5 - 1]), (arr_23 [i_6 - 1] [i_6 - 1] [i_7] [i_5 - 1])))) + ((1152921504606846975 * (arr_23 [i_5] [i_6 - 1] [i_6 - 1] [i_5 + 1])))));
                    arr_25 [i_5] [i_7] = 977721750;
                }
            }
        }
    }
    #pragma endscop
}
