/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_8;
    var_14 = (~(min((max(var_10, var_11)), (var_3 / var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min((arr_0 [i_2]), ((max((arr_5 [i_0] [i_1] [i_2]), (min(var_1, var_4)))))));
                    var_16 = (max(var_16, (min(((((arr_4 [i_0] [i_1]) || ((min(var_10, (arr_5 [i_0] [i_1] [i_2]))))))), ((~(arr_0 [i_1])))))));
                    var_17 = (max(var_17, (((8 / (arr_5 [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
