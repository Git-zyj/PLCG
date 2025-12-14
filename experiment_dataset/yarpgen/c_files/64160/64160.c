/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (!(((83 ? 59 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min(var_2, (arr_2 [i_0 - 2] [i_0 + 1] [i_0 - 1])));
                var_20 = (arr_3 [i_1] [i_0]);
            }
        }
    }
    var_21 += (~(!1));
    var_22 = (((((var_0 | ((var_12 ? -19254 : -1907944310299428366))))) ? ((1 ? (max(var_8, 6798923128193159443)) : -19254)) : var_2));
    #pragma endscop
}
