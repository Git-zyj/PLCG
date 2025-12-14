/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_17 ? (var_16 | var_17) : (var_5 & 2118452236))) << (var_2 - 20499)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 598008990;
                    var_19 = (arr_1 [i_1] [i_2]);
                }
            }
        }
        var_20 += (min(-35, -47));
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        var_21 = arr_9 [i_3] [i_3];
        arr_11 [i_3] = ((((var_4 == (arr_10 [i_3 + 1]))) ? 8280843900925511020 : (min(18446744073709551590, var_17))));
    }
    var_22 = ((var_14 > (((~((2647870070 ? -687083756 : var_6)))))));
    #pragma endscop
}
