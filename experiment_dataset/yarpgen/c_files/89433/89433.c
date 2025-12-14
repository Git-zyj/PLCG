/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (arr_6 [i_2] [i_1] [i_2] [i_2]);
                    var_19 = max(65535, 43);
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((182 ? 2047 : 4193015082));
                }
            }
        }
    }
    var_20 = ((var_2 ? ((var_4 ? (min(var_3, var_2)) : 63494)) : var_8));
    var_21 = 115;
    #pragma endscop
}
