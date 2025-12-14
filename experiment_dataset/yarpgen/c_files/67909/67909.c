/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 = ((((arr_0 [i_0 + 2] [i_0]) ? (((arr_2 [i_0]) ? 448011277 : 28672)) : -26221)));
        arr_3 [i_0] [i_0] = (~0);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((((41 ? var_9 : 254)) + 60213));
        var_20 = 36864;
    }
    var_21 = (max(var_21, (((((((min(var_5, 1)) & var_17))) ? (+-1) : (~60213))))));
    var_22 = 3824587966;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_23 = ((7502229153892581059 ^ (!var_0)));
                var_24 &= (32999 * 0);
                var_25 &= var_17;
            }
        }
    }
    var_26 -= var_15;
    #pragma endscop
}
