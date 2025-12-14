/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(-1425850418, var_0));
                arr_6 [i_0] [i_1] [i_0] = ((max((arr_4 [i_1 + 3]), (arr_4 [i_0]))) ? ((min(81, (!81)))) : ((1522186244324784867 ? (var_9 == var_4) : ((min((arr_1 [i_1]), 1))))));
            }
        }
    }
    var_13 = ((max(var_7, var_8)) != ((var_7 ? (max(3106802683, 25)) : 95)));
    var_14 = var_7;
    #pragma endscop
}
