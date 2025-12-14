/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((58 ? var_6 : ((7901495949871384733 ? 111715780 : 15052689465265329670))))) ? -var_9 : (~-var_3)));
    var_11 = (max(var_11, var_5));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = ((var_4 ? (min((arr_4 [2] [i_1] [i_0 - 1]), (arr_2 [i_0 + 1]))) : ((((((arr_1 [i_2]) ? var_9 : var_1))) * var_2))));
                    var_13 = (arr_5 [i_0 + 1] [i_0] [i_0]);
                }
            }
        }
    }
    var_14 = var_5;
    #pragma endscop
}
