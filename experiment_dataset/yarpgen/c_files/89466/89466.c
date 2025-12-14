/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!var_5) ? (~var_3) : ((-var_4 ? -var_9 : var_6)));
    var_17 ^= (var_3 ? var_4 : var_14);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = max(1430442565, 3486697967);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((var_2 ? (arr_3 [i_3] [i_1] [i_2]) : ((2872514704 ? 3339557473 : 3486697958))))));
                        var_20 = (4294967295 ? 2804551754 : 3486697967);
                    }
                }
            }
        }
        var_21 &= (~var_0);
        var_22 = (-(arr_5 [i_0 + 1] [i_0] [i_0 + 1]));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_23 -= (~(((arr_12 [i_4 - 1] [i_4 + 1]) + (arr_12 [i_4 - 1] [i_4 + 1]))));
        var_24 = 3209941545;
    }
    #pragma endscop
}
