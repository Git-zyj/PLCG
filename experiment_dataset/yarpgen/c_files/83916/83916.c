/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (~var_1);
                var_10 += arr_4 [13] [i_1] [13];
                var_11 = (max(var_11, (arr_3 [i_0] [i_0 - 2])));
                arr_6 [6] [6] |= var_8;
                var_12 = (~var_5);
            }
        }
    }
    var_13 += var_8;
    #pragma endscop
}
