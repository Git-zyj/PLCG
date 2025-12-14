/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (249 / 10234178810277530108);
                    var_16 = (min(var_16, (((((arr_1 [7]) ? 132120576 : 1))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_17 = (max(var_17, (((((10234178810277530108 ? (arr_12 [i_3] [i_4]) : (arr_12 [i_4] [i_3])))) ? (((arr_2 [i_3] [i_4]) / (arr_1 [i_4]))) : 237))));
                var_18 = (((((arr_10 [i_4]) ? (arr_11 [i_4]) : 10234178810277530125))));
                var_19 = (1 ^ 253);
                var_20 = (max(var_20, (arr_0 [i_3])));
            }
        }
    }
    #pragma endscop
}
