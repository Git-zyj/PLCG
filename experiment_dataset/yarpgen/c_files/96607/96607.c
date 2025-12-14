/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((max(var_14, var_10))), ((((min(var_0, var_6))) ? (1 & var_11) : ((255 ? var_3 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_2] = (!255);
                    var_20 -= (max(248, -2009917958));
                    var_21 = var_6;
                    var_22 += var_18;
                    var_23 &= 5;
                }
            }
        }
    }
    #pragma endscop
}
