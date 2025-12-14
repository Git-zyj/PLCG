/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (~(((~19513) ^ (~var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (15640 < 49896);
                    var_16 = 15343;
                    arr_9 [i_0] [i_0] [6] [i_0] = ((((max(15640, (((arr_8 [i_0] [i_1]) ? var_4 : 1))))) ? var_6 : 12193607162028202798));
                    var_17 = ((var_5 ? (arr_4 [i_0] [1] [0]) : ((((max(104, 42573)))))));
                }
            }
        }
    }
    #pragma endscop
}
