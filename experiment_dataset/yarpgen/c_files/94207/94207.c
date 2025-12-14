/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 ^= (((18446744073709551615 != (~var_8))));
                var_12 = (((((arr_1 [i_1] [i_1]) != 18446744073709551599)) ? (((18446744073709551599 != (arr_1 [2] [i_0])))) : (min(var_3, (arr_1 [i_0] [i_0])))));
            }
        }
    }
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            {
                arr_10 [i_2] &= (((((32761 ? (arr_0 [i_2] [i_3 + 4]) : (arr_0 [i_3] [i_3 + 1])))) ? (arr_0 [i_3] [i_3 + 2]) : (min((arr_0 [9] [i_3 + 1]), (arr_0 [i_2] [i_3 + 3])))));
                var_14 = (((var_1 / ((min(var_9, 5496))))) | (arr_6 [i_2] [i_3 + 1]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = (~var_5);
                            var_16 &= (min((((arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3]) ? (arr_11 [i_3 + 2] [i_3 + 1] [8] [i_3]) : (arr_11 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 2]))), (((var_0 ? var_5 : (arr_3 [i_2]))))));

                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_17 = ((((((~-12) ? ((~(arr_11 [i_4] [i_4] [i_4] [i_4]))) : (~var_8)))) ? 42 : ((var_4 ? var_0 : ((255 ? 65535 : (arr_2 [i_2] [0] [2])))))));
                                var_18 -= min(2270433253739588196, 9);
                                arr_17 [i_3] [i_3] [i_3] [i_3] [6] = (5 % 10);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_19 = (17994899068042510190 == -1);
                                var_20 = (max(var_20, ((((((arr_12 [i_2] [i_2] [i_2]) ? var_4 : var_2)) & var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= 1;
    #pragma endscop
}
