/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(-1719974562, (min(var_16, 1719974562))))) ^ var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((!(!var_5))));
                    arr_9 [4] [i_0] = ((((-1 ? -121 : (-121 - 1))) + ((((var_4 ? var_2 : var_13))))));
                }
            }
        }
    }
    #pragma endscop
}
