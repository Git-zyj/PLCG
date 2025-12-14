/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 *= ((((min((((!(arr_4 [i_0] [i_0] [i_0 + 1])))), (~var_14)))) ? ((min((((-32767 - 1) == 1)), (!var_11)))) : var_1));
                arr_6 [9] [i_0 + 1] = ((((max(((1 ? var_5 : 2107192011130036279)), 4360))) && (arr_4 [i_0 - 1] [i_0 + 1] [i_0])));
                var_16 = ((((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))) && (((arr_0 [i_0 - 1] [i_1]) || (arr_2 [i_0 - 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 = (min((((((max(var_13, var_8))) || (arr_7 [i_3])))), ((-10889 ? var_5 : var_11))));
                var_18 ^= 219;

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_16 [i_2] [19] [i_4] = (((max((!var_12), (max((arr_15 [i_3]), -2107192011130036292)))) ^ (arr_8 [i_2])));
                    var_19 = ((((max((arr_11 [i_2 + 1] [i_2 + 2]), (1 && 2639)))) ? ((15 >> (84 - 64))) : (arr_14 [i_2] [i_2] [i_2] [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_3] [i_6] [i_5 + 1] [i_6] = (((((-9223372036854775807 - 1) ? 0 : var_12)) != (!0)));
                                arr_23 [i_6] [i_6] [i_4] [i_6] [i_2 + 3] = ((((min((arr_13 [i_4]), (arr_13 [i_2 + 3])))) | 0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 7;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_20 &= (arr_14 [i_7] [i_8] [i_7] [i_8 + 1]);
                    var_21 = (min(var_21, (arr_12 [i_8 + 1] [i_8] [i_7])));
                }
                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_22 = ((((max((arr_17 [i_8 - 1] [i_7]), var_2))) || var_8));
                        var_23 = ((~(min((arr_9 [i_8 + 3]), (arr_9 [i_7])))));
                    }
                    var_24 = var_1;
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_46 [i_7] = (arr_35 [i_8 - 3] [i_8 + 3] [i_8 + 4] [i_8 + 2]);
                            var_25 = ((var_1 ? (((~(arr_15 [i_13])))) : (min((~var_1), 9223372036854775807))));
                            var_26 = ((((min(var_11, (arr_43 [i_8 + 4] [i_8] [i_12] [1])))) ^ (arr_43 [i_8 - 1] [i_8] [i_8 - 1] [i_13])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
