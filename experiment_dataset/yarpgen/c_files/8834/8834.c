/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_15);
    var_21 = (max(var_21, ((min(-681665845, 681665845)))));
    var_22 = ((var_2 <= ((max(7317965566856830940, (681665844 ^ -115))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 + 1] [i_0] = ((((max((arr_2 [i_1 - 1]), 3273614683731818941))) ? (var_4 / -16673) : -5854539574863366387));
                arr_5 [i_0] = (~-118);
            }
        }
    }
    #pragma endscop
}
