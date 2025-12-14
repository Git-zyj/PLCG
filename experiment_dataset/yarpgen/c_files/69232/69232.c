/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((arr_2 [i_0]) >> ((((1 ? -357300054 : -6652677462494483708)) + 357300058))))));
                var_20 = (((((arr_3 [i_1 - 1] [i_1 - 1]) | 548134797289836645))) ? (!3239297338) : 36028797018963936);
                var_21 = (min(var_21, (((((((arr_1 [6] [i_1]) ? 3239297334 : (arr_1 [4] [i_1])))) && ((3239297333 && (arr_1 [18] [18]))))))));
            }
        }
    }
    #pragma endscop
}
