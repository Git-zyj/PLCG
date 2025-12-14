/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(127, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = ((arr_4 [i_1 + 2] [i_1 + 2] [i_0]) ? ((16 % (arr_4 [i_1 - 1] [i_1] [i_0]))) : ((((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) & (arr_4 [i_1 - 1] [i_1 - 1] [i_0])))));
                arr_5 [i_0] = ((~((-9 ? (((arr_1 [i_0]) % var_14)) : ((~(arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 &= var_1;
                                var_19 = ((((var_2 / (arr_7 [i_0] [i_1 + 3] [i_0]))) & var_3));
                                var_20 = (~var_6);
                                arr_13 [i_0] = (min(18446744073709551599, (max(9, ((32 ? 18446744073709551583 : 38))))));
                                arr_14 [i_4] [i_4] [10] [i_4] [6] &= 9;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((((min(var_0, 16))) ? (((arr_11 [i_6] [i_5 + 1] [i_1] [i_0]) % var_3)) : (~5))))));
                            var_22 = (((~var_0) ? (((-122 ? (((17210 << (var_13 + 566341999)))) : (min(2144943023681203994, 123))))) : (min(246, ((10 ? 18446744073709551583 : -10340420))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
