/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = var_11;
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (((((((-25 ? 29 : 35))) / (arr_2 [i_0]))) | (arr_2 [i_0])));
        arr_4 [i_0] = ((-((var_17 ? 19 : 45134))));
        arr_5 [i_0] = ((((arr_1 [i_0]) != 0)) && (arr_2 [i_0]));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_13 [i_2] [0] [i_1] [i_1 - 2] = (((12745 >= -29) ? ((((max((arr_6 [i_1 + 1]), var_13))) ? (((((arr_8 [9] [i_1]) && var_0)))) : var_11)) : (arr_8 [i_1 + 1] [i_1 - 1])));
                    arr_14 [i_2] [i_2] = var_17;
                }
            }
        }
    }
    #pragma endscop
}
