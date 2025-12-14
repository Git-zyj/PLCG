/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((((-(-32767 - 1)))) ? var_1 : var_7)), var_6));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 |= (arr_1 [i_0 - 3]);
                    var_14 = (min(var_14, ((min((arr_4 [i_2]), -var_4)))));
                    var_15 = ((((-32767 - 1) == (-32767 - 1))));
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
