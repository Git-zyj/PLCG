/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (i_0 % 2 == zero) ? (((((12481098489247805071 / ((max(var_0, 65520))))) ^ (min((max(var_17, var_11)), ((((arr_0 [i_0]) >> (((arr_2 [i_0]) - 18531)))))))))) : (((((12481098489247805071 / ((max(var_0, 65520))))) ^ (min((max(var_17, var_11)), ((((arr_0 [i_0]) >> (((((arr_2 [i_0]) - 18531)) + 34153))))))))));
                arr_7 [i_0] [i_1] [i_0] = (arr_1 [i_0]);
                var_20 = (arr_0 [19]);
                var_21 = (min((((((var_7 + 9223372036854775807) >> (var_10 + 147))) & (((arr_0 [17]) & (arr_3 [i_0]))))), 2509330125));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((+(((arr_13 [i_5] [i_5] [i_4]) ? (arr_15 [i_5] [i_6]) : var_15))))) ? 65530 : (arr_15 [i_5] [i_5]))))));
                                arr_24 [i_2] [i_2] [i_2] [i_5] = ((-((-5743265689499935700 ? ((6911121416113224808 ? 161 : (arr_4 [i_2]))) : ((0 / (arr_4 [i_2])))))));
                                var_23 &= var_0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_32 [i_2] [i_7] [i_2] [i_2] = ((!(((~(arr_2 [i_2]))))));
                            arr_33 [i_2] = (max(var_6, ((((((arr_9 [i_7 + 2]) || (arr_20 [i_3] [i_8])))) * ((-(arr_25 [i_2 - 1] [i_2 - 1])))))));
                            var_24 ^= ((((var_13 / var_7) * (((var_18 / (arr_25 [i_2] [i_2])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
