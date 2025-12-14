/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (-4249469483434146952 - var_9);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 -= (min((arr_5 [i_0 + 1] [i_1] [i_2]), ((min((!-1152692407), (((arr_4 [i_0] [i_2]) && var_3)))))));
                    var_13 = (((max(var_4, (arr_4 [i_0 + 1] [i_0 + 1]))) - (arr_5 [i_0] [i_0] [i_0])));
                    var_14 = (arr_4 [i_2 + 3] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
