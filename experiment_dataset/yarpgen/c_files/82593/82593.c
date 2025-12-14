/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0 - 1] = (max(17393905989401732910, 8139655529081828026));
                    var_20 = (max(var_20, (((1757176091 ? -1 : 0)))));
                }
            }
        }
    }
    var_21 += ((1757176091 ? -372865155 : -1));
    var_22 = (-5752320310196635460 ? 14 : 2);
    #pragma endscop
}
