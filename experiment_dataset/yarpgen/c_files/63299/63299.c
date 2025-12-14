/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (max((arr_4 [i_0] [11]), (arr_4 [i_0] [i_2])));
                    var_18 = var_6;
                    var_19 = ((((var_16 - ((max(-1, 0))))) & (((((max((arr_0 [2]), (arr_5 [i_1])))) >= (((arr_2 [i_0 - 1]) - (arr_1 [i_1] [12]))))))));
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = ((var_13 ? (var_8 > -var_1) : var_1));
    #pragma endscop
}
