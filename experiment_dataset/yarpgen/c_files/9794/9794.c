/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-var_17, (min((max(var_5, 8837492245197907511)), 15313270763427510712))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((arr_0 [i_0] [i_1]), ((-(max((arr_3 [i_0] [i_1 + 2]), (arr_1 [i_0])))))));
                var_19 = (((((~(arr_0 [i_1 + 1] [i_0 + 3])))) ? (((!(max((arr_0 [i_0] [i_1 + 2]), (arr_1 [i_1])))))) : (((((arr_3 [i_0 - 2] [i_1 + 2]) ? (arr_3 [i_0 + 1] [i_1 - 1]) : (-2147483647 - 1))) | (!-161717505)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_0] = max((min(15313270763427510712, -15313270763427510712)), (max((((arr_7 [i_3] [i_3] [i_2] [i_2] [i_0] [i_0]) ? 8 : 28)), -18446744073709551607)));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_0 + 2] [i_2] [i_0] [i_0] = ((-(arr_5 [i_1] [i_2] [i_1])));
                                var_20 ^= (!(arr_7 [i_2] [20] [i_0] [i_2 - 3] [i_4] [i_4 - 1]));
                                var_21 |= ((!(arr_5 [i_4 - 1] [i_0] [i_0])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                var_22 = (~1);
                                arr_19 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_2 + 1] [i_3] [i_5] [i_2] = ((((!(arr_3 [i_0] [i_0]))) ? ((((arr_9 [i_0] [i_1 - 2] [i_2] [i_5]) ? (arr_15 [i_3] [i_3] [i_2] [i_3]) : (arr_8 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) : (arr_5 [i_0] [i_2] [i_2])));
                            }
                            arr_20 [i_2] = (~(((arr_7 [i_0] [i_0 - 2] [i_2] [i_1 - 1] [i_1 + 2] [i_2 - 1]) ? ((((-9223372036854775807 - 1) == 228))) : (248 - 16777184))));
                            var_23 += (((((arr_2 [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0]) : ((((arr_0 [i_0 + 3] [i_0 - 1]) ? (arr_16 [i_3] [i_2 - 3] [i_1] [i_0] [i_0 - 1]) : (arr_10 [i_0])))))) & (arr_17 [10])));
                        }
                    }
                }
                var_24 -= (min(((!(arr_18 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_1 - 2]))), ((!(arr_9 [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
