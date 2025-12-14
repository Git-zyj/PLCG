/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 &= ((var_0 && var_10) ? var_0 : var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_16 = (arr_4 [i_2]);
                        var_17 = 6346317474855616497;
                        arr_12 [4] [i_1] [4] [i_2] [i_0] = min((min((arr_6 [i_2]), (arr_6 [i_2]))), var_10);
                        var_18 = (arr_8 [10] [i_1] [i_2] [7]);
                    }
                    var_19 = (max((arr_4 [i_2 + 2]), ((933351404 ? 13002534451519482571 : (933351382 || 4294967295)))));
                    arr_13 [i_2] [i_2] [i_2 + 1] [i_2] = ((var_4 + (((arr_0 [i_2 - 1]) * (arr_5 [i_1] [i_2 + 2] [i_2])))));
                    arr_14 [i_0] [i_1] [i_2] = (((var_7 % var_5) > ((((var_3 && (arr_5 [i_0] [i_0] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
