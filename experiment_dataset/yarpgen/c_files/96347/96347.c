/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_14;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (((!(arr_2 [i_2]))))));
                        var_17 ^= ((((min((arr_0 [i_2]), (-121 != -121)))) >> (((min(((((arr_6 [i_2] [i_2]) ? var_8 : var_9))), (min(7817761282582384415, -121)))) + 124))));
                    }
                }
            }
        }
        var_18 ^= ((+((min((arr_1 [8] [i_0 + 1]), -121)))));
    }
    var_19 -= var_3;
    #pragma endscop
}
