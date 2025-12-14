/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, var_7));
                    var_16 *= (min((arr_0 [i_1 + 1]), (((arr_0 [i_1 + 1]) ? 1 : 11942869901056741635))));
                    var_17 = (max(var_17, 4286164683750944499));
                    arr_8 [i_2] &= (((((((max(var_2, 1))) ? ((3635359455213389939 ? 117 : 14811384618496161684)) : (((1 ? var_0 : -7032210030422460181)))))) ? (((-1587837997 ? 15 : 1502476822))) : ((-5366949761431597565 ? ((((14811384618496161696 && (arr_4 [i_1] [i_2]))))) : 3635359455213389948))));
                }
            }
        }
    }
    var_18 = ((var_4 ? ((var_0 ? (max(var_2, 3635359455213389953)) : 1)) : var_1));
    var_19 = max(var_13, -1367403559);
    var_20 += (min((min((14811384618496161664 && 1), var_2)), 1));
    #pragma endscop
}
