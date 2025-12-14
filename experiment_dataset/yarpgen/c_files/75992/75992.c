/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = (var_7 | 2318560760);
                    var_14 = (((((((max(2318560790, 1976406535))) ? (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : ((((arr_0 [i_0]) || 62934)))))) ? (!185) : (((!(arr_3 [i_0] [i_0] [i_2 - 1]))))));
                }
            }
        }
    }
    var_15 = ((8191 ? 185 : var_7));
    #pragma endscop
}
