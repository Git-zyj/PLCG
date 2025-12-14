/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_14));
    var_21 = (max(var_21, (var_18 != var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((((((79 && var_2) ^ ((((arr_3 [i_2]) >= (arr_0 [i_0] [i_0])))))) * ((((-1343295454240215041 % 1) > 108))))))));
                    arr_6 [i_1] [i_2] = (((104 / 1) + (((arr_1 [i_1]) * var_3))));
                }
            }
        }
    }
    #pragma endscop
}
