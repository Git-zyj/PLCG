/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4184466444;
    var_16 = (min((min(4184466444, var_3)), (((110500851 ? var_2 : var_8)))));
    var_17 *= ((!(3417695461 || 3926521440)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = 190747506;
                var_18 ^= ((905738491 / 3417695447) ? 4044131432 : (arr_0 [i_0] [i_1]));
                var_19 = (min(3417695461, 4184466449));
                var_20 = (max(var_20, (((((363373503 && (4184466432 <= 3417695448))) || (((-195073215 / 1330123876) == (min(4184466446, var_10)))))))));
            }
        }
    }
    #pragma endscop
}
