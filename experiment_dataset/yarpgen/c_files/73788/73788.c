/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_1] [i_1] [i_0]);
                var_20 = (arr_3 [i_0] [i_0] [i_1]);
                var_21 = (max(var_21, ((((~(arr_1 [i_0 + 1]))) * (arr_1 [i_0 + 1])))));
                var_22 += ((((-(arr_3 [i_0] [i_0] [i_1])))));
                arr_4 [7] [i_1] = (((-127 - 1) == 4107158871));
            }
        }
    }
    var_23 = var_3;
    var_24 = var_4;
    var_25 = ((10046 / 1) * 8);
    #pragma endscop
}
