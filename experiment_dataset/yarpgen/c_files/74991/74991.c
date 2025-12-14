/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((~((~((1 & (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_15 = (arr_10 [i_1] [i_2] [i_3]);
                            arr_17 [i_1] [i_2] [i_1] [i_1] [i_1] = ((((((arr_11 [i_1] [i_2] [i_3]) - 1))) > (max((arr_12 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]), var_12))));
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_21 [i_2] = ((-(((arr_14 [i_1] [i_1] [i_6]) ? (31629719175903444 / 2920515984) : 67108864))));
                var_16 = (min((min(31629719175903444, var_7)), (!var_2)));
                var_17 = (!(var_6 || var_11));
                arr_22 [i_2] [i_2] [i_6] = (max((((arr_14 [5] [i_2] [i_6]) ^ (arr_14 [20] [1] [i_2]))), ((min((arr_14 [4] [i_2] [i_6]), (arr_14 [i_1] [i_2] [i_6]))))));
            }
        }
        var_18 = (-31179 / (31629719175903444 || -7040423036945436853));
        var_19 = arr_11 [i_1] [2] [i_1];
        var_20 -= (((((~(var_3 & var_1)))) || ((536870911 >= ((251 ? var_8 : (arr_5 [i_1])))))));
        var_21 += ((((min(((((arr_5 [19]) != var_0))), 35605))) ? ((((11033 >> (var_3 - 1480210072607935401))))) : -var_7));
    }
    var_22 = -7040423036945436853;
    var_23 = (max(((((499557632 ? var_2 : var_2)))), (~var_8)));
    #pragma endscop
}
