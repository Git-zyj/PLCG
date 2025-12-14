/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = 13081951996897002870;
                arr_8 [i_0] [i_1] = ((+(((arr_6 [i_0]) + (arr_6 [i_0])))));
                var_14 = 1;
                var_15 = (arr_0 [i_1] [i_0]);
            }
        }
    }
    var_16 = ((var_11 ? (1 ^ 0) : (min(-1, ((-1547871506 ? 31 : 2859034843))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_17 = -5;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 = min((((46 != ((var_7 >> (var_13 + 1934836371)))))), ((var_8 ? var_2 : 0)));
                                var_19 = max((arr_16 [i_2] [i_2 - 2] [i_6 - 3] [i_6] [i_6]), (min((arr_16 [1] [i_2 + 2] [i_6 + 1] [i_6] [i_6]), (arr_16 [i_2] [i_2 + 2] [i_6 - 2] [i_6] [i_6]))));
                            }
                        }
                    }
                    var_20 = ((((((!(arr_15 [i_2] [i_2] [i_2 + 4]))))) > ((var_2 ? (arr_22 [i_2] [i_4 + 2] [i_4] [i_4 - 1] [i_4]) : (arr_22 [i_2] [i_4 + 2] [i_4] [i_4] [i_4 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
