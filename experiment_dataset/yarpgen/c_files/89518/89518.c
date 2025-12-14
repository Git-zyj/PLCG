/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = -var_7;
                    arr_10 [i_1] [i_1] [i_2] = (min((arr_8 [i_0] [i_1] [i_2]), (((arr_3 [i_2 + 2] [i_0 + 1] [8]) ? 1480038754 : 6364325761882868997))));
                }
            }
        }
    }
    var_21 = ((var_8 ? ((6364325761882869012 ? 2974447459 : 6364325761882869012)) : (min(7942716871718202418, (((var_2 ? var_14 : var_15)))))));
    #pragma endscop
}
