/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 -= ((~(arr_7 [i_0] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 -= (((((((((var_6 ? var_4 : var_7))) || (!var_9))))) * (((101 >> (101 - 83))))));
                                var_12 = var_2;
                                var_13 = (!((max(var_3, (arr_4 [i_0 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_14 = 7;
                                var_15 = ((max(var_1, ((((arr_4 [i_0]) == var_7))))) * 0);
                            }
                        }
                    }

                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_25 [i_1] [i_1] [i_1] = (min((((var_7 ? 1 : -7980401620586752741))), var_4));
                            var_16 = ((((min(21, (arr_20 [i_7 + 1])))) ? (((~-102) % (var_4 != 0))) : ((max((max(1, 1)), (((arr_24 [i_7] [i_1] [i_0] [i_0] [i_8] [i_1] [i_8]) <= 230)))))));
                        }

                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            var_17 = (-var_1 - 0);
                            arr_28 [i_0 + 1] [i_0 + 1] [i_2] [i_7 - 2] [i_1] = (((var_2 ^ 4294967295) ? (!1) : (((!(32751 <= -74))))));
                            var_18 = (max(-32762, ((4294967295 ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : var_5))));
                            var_19 = (((((~(arr_10 [i_0 - 1] [i_1] [i_7 - 1] [i_9 + 1])))) ? (arr_13 [0] [0] [3] [0] [i_9 + 1] [i_9]) : ((((var_5 ? -6672436731742715591 : var_5)) ^ 1))));
                        }
                        var_20 -= ((!(((var_6 && var_3) || 1))));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_21 = var_2;
                        var_22 = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_36 [i_0 + 1] [i_1] [i_1] [i_11 - 2] = (i_1 % 2 == 0) ? (((~((1 << (((arr_23 [i_1] [i_1] [i_1] [i_11] [i_1]) - 128))))))) : (((~((1 << (((((arr_23 [i_1] [i_1] [i_1] [i_11] [i_1]) - 128)) + 118)))))));
                                var_23 = ((~(((max(4294967291, 1)) >> (-21515 + 21538)))));
                                arr_37 [i_1] [i_1] [7] [i_1] [3] = ((1 & ((((arr_10 [1] [i_1] [i_1] [i_0 + 1]) <= -9223372036854775797)))));
                                var_24 = ((((max((1 >= -80), (min(var_5, 1421777456))))) ? ((((arr_12 [i_0] [i_1] [i_0 + 1] [i_12 - 3] [i_12]) ? (arr_19 [i_0 - 2] [i_2] [i_1] [i_12 - 3] [6]) : var_9))) : (max(27517, var_1))));
                                var_25 = 33554431;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 -= (var_8 - var_0);
    var_27 = (((5437 ^ -2694574181393622960) <= var_8));
    var_28 = 4294967295;
    #pragma endscop
}
