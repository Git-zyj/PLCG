/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((~-3044273832227577406) > ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) == (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_13 = (min((((((2936590403 ? var_0 : var_0))) ? ((((arr_1 [i_0]) / 99))) : (min(-1912970363, 9223372036854775807)))), (((!((min(30, var_5))))))));
        arr_4 [i_0] [i_0] = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) + (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_13 [6] [i_2] = (arr_10 [i_1] [i_1 + 1]);
                    var_14 = (~(arr_12 [i_1 + 1] [i_3] [i_3]));
                    var_15 = ((-var_8 ? 6088 : -1));
                    arr_14 [i_1] [i_2] [i_3] [i_3] = (arr_8 [i_1 - 1]);
                }
            }
        }
        var_16 ^= ((0 ? (arr_7 [i_1 + 1] [i_1 + 1]) : 0));
    }
    var_17 = ((((min((!var_5), (var_2 && var_1)))) & (min(-1, var_10))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                arr_20 [i_5] [6] = max(((((arr_18 [i_4] [i_4] [i_5]) > 127))), (min((arr_18 [i_4] [i_5] [i_5]), (arr_18 [20] [i_5] [15]))));
                var_18 = ((((min((((arr_16 [i_4]) | (arr_17 [i_4]))), ((0 ? 6291456 : -3124))))) ? (((var_11 == (var_2 != 0)))) : (arr_15 [i_4])));
                var_19 *= (arr_16 [i_4]);
            }
        }
    }
    #pragma endscop
}
