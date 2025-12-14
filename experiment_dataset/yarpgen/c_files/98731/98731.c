/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = (min(1, ((((var_10 ? var_9 : var_3)) % var_1))));
    var_21 = ((-1 & (((var_15 & var_15) * ((var_3 ? var_2 : var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = 1007955570;
                    var_23 = ((~(min(var_11, ((((arr_0 [i_0]) & (arr_0 [i_0]))))))));
                    var_24 = (((!var_9) ? (((-3878272790 ? var_6 : (((-(arr_4 [i_1] [9]))))))) : -7068398800611399437));
                }
            }
        }
    }
    #pragma endscop
}
