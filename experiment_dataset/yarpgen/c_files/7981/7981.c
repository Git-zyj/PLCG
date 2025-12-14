/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((((!((((arr_4 [i_0] [i_0]) & var_13))))) ? ((4294967295 ? (((arr_4 [i_0] [i_1]) ? var_6 : var_4)) : var_1)) : (max((((arr_0 [i_0]) - (arr_4 [i_0] [i_1]))), (arr_2 [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2 + 2] [i_2] [i_1] = (arr_3 [i_1 + 1] [i_1 - 1] [i_2 - 1]);
                        arr_10 [i_0] [i_1 + 1] [2] [i_1] |= ((((((!(arr_2 [i_0]))))) < 255));
                        arr_11 [i_0] [i_0] [i_0] [i_2] = (23 == var_6);
                    }

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_15 = (max(var_1, ((-124 ? var_2 : 3791708703376756829))));
                        arr_14 [i_2] = (((((((arr_3 [i_1] [i_1] [i_1]) >> (((arr_1 [i_0]) + 1307957401)))) >= 2047)) ? (max(61, 0)) : (max(3791708703376756829, 4294967295))));
                        var_16 -= max((arr_5 [i_0] [i_0] [i_0] [i_0]), ((((!(arr_2 [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_17 = ((var_1 ? 6497021212917652784 : (((0 ? var_8 : (arr_13 [i_5] [i_5] [i_2 + 2] [i_1 + 1] [i_1 + 1] [i_0]))))));
                        var_18 = (max(var_18, (arr_12 [i_1 - 2] [i_1 - 2] [i_2] [i_2 + 1] [i_2 + 1] [i_2])));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_20 [i_6] [i_2] [4] [i_2] [i_0] = (var_0 >= -1403187894);
                            var_19 *= ((!(arr_15 [i_1] [i_1] [i_1 - 2] [1] [i_1 + 1])));
                        }
                        arr_21 [i_5] [i_2] [i_2] [i_0] = var_9;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_20 ^= -1337900906;
                        var_21 -= (~-5);
                        var_22 = (max(var_22, 18446744073709551615));
                    }
                }
            }
        }
    }
    var_23 &= var_9;
    var_24 &= var_11;
    #pragma endscop
}
