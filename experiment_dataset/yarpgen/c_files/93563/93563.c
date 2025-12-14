/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -101;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = -104;

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_17 = ((!(arr_4 [i_1 + 2] [i_1] [i_1 - 1])));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_18 *= 1;
                var_19 = (min(var_19, 13098));
            }

            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                var_20 *= ((var_15 || (!var_2)));
                var_21 = (max(var_21, var_12));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_22 -= -126;
                            var_23 = (max(var_23, ((((arr_16 [i_1] [i_5] [i_1 + 1] [i_4] [i_4]) * 1)))));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_0] |= (((arr_10 [i_0] [i_1 + 1] [i_1 + 1]) ? (arr_10 [i_0] [i_1 - 1] [i_1]) : 13764));
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_25 [i_8] [i_8] [0] |= (((((arr_23 [i_6 + 1] [i_6 + 1] [1] [i_6]) < 1)) ? (arr_20 [i_7] [i_7]) : 19));
                    var_24 = (max(var_24, 97));
                    arr_26 [i_8] = ((var_5 * ((-(arr_20 [i_7] [i_7 - 1])))));
                    arr_27 [i_6] [i_8] = (arr_24 [i_6]);
                }
                var_25 = ((((-24611 ? 6102818631754539173 : 1))) ? (((((arr_21 [i_6 - 1]) ^ var_0)) & (((1 ? -101 : var_3))))) : (arr_23 [i_6] [i_6 + 1] [1] [i_7 + 1]));
            }
        }
    }
    var_26 = (max(var_26, ((((((((var_0 ? var_0 : var_6))) ? (-13773 * 6008758908139880680) : (((var_3 ? -1795457065 : 1))))) * var_13)))));
    #pragma endscop
}
