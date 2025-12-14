/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 ^= (max(var_0, (arr_2 [i_0])));
        var_14 -= (((arr_3 [10]) ? ((max(var_9, (max((arr_1 [i_0]), 1))))) : (~var_2)));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_15 = (max(var_15, ((((~1) / ((-400994475 ? (arr_2 [i_1 - 2]) : 1)))))));
        var_16 -= (max(((~(~28758))), (~18)));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_3] [i_3] = var_1;
                    arr_15 [i_3] [i_3] = (((~(1 ^ var_6))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    {
                        var_17 = 1;
                        var_18 = ((((~(arr_25 [i_7 + 2] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 2])))) ? (min((arr_25 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7 + 3]), var_6)) : (((var_11 ? 1 : var_2))));
                    }
                }
            }
        }
        var_19 = (((((~(arr_13 [6] [6])))) ? (arr_13 [4] [i_2]) : var_10));
        var_20 = ((-(min(var_8, ((var_8 ? (arr_22 [i_2] [4] [i_2]) : var_2))))));
    }
    var_21 ^= var_3;
    #pragma endscop
}
