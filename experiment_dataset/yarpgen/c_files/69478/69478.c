/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= (arr_1 [i_2]);
                    var_15 = (min(var_15, 0));
                    var_16 = (-7883341890453071387 ? var_0 : (!-9223372036854775803));
                }
            }
        }
        var_17 += ((!((max(0, -7883341890453071391)))));
    }
    var_18 = var_5;
    var_19 *= var_6;
    var_20 += (var_5 || var_9);
    var_21 = var_9;
    #pragma endscop
}
