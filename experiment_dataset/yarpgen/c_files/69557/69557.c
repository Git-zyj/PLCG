/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_9 < (!-8))));
    var_18 = (max(var_18, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = 0;
                    var_19 = ((1 ? ((((max(8192, -42))))) : (max((2634103315 >> 0), ((max(2047, 120)))))));
                }
            }
        }
    }
    var_20 = (((((((var_7 ? 42 : var_6)) != (~-6968193705866208492)))) / 63));
    #pragma endscop
}
