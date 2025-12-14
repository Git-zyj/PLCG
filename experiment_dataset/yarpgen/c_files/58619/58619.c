/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((1 ? 136 : -2388260438698628579)))));
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 &= (((arr_8 [i_0] [0] [i_0]) ? var_6 : ((((arr_5 [i_1 - 2] [7]) ? (arr_5 [i_1 - 2] [10]) : (arr_8 [i_1 - 1] [0] [8]))))));
                    var_16 &= 4503599627370495;
                    arr_9 [i_0] [i_0 - 3] [i_2] = var_7;
                    var_17 &= ((1 >> ((((1073610752 ^ ((((var_4 < (arr_2 [i_2 + 1]))))))) - 1073610727))));
                    arr_10 [i_2] [0] = ((-(arr_8 [i_0] [i_2] [i_0])));
                }
            }
        }
    }
    var_18 = ((~(var_11 | 12033619804614360730)));
    #pragma endscop
}
