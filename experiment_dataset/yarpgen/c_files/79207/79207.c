/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 &= ((!(((arr_0 [i_0 - 1] [i_0 + 2]) != 5365407903080621446))));
        var_18 -= ((5365407903080621446 & (var_1 + var_5)));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            {
                arr_10 [i_1 + 1] [i_2] [i_2 + 4] = (var_6 + 68);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_19 = ((-1060482683 ? (((arr_5 [i_2 + 2]) % 13081336170628930169)) : var_14));
                            arr_16 [1] [i_2] [i_2 - 1] [i_3] [23] = (arr_2 [6]);
                            arr_17 [9] [1] [i_3] [i_3] [i_3] [i_2] = ((-var_6 - (arr_3 [2])));
                            var_20 = (((((!128) != ((((arr_7 [20] [1]) && 13081336170628930170))))) ? (arr_11 [12] [i_4] [i_2]) : (max((((arr_3 [3]) - var_1)), var_1))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
