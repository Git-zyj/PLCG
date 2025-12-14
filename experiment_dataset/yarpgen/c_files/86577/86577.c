/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 688803501));
    var_20 = (max(var_20, 3606163794));
    var_21 = (max(28490, 536862720));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_22 ^= (arr_5 [i_2 - 1] [i_2 + 1] [i_3]);
                        var_23 = 32767;
                    }
                }
            }
        }

        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            var_24 = (((~-32744) == 32));
            arr_14 [i_0] = ((16 ? ((32724 ? -6847 : 971108398)) : 19579));
        }
        var_25 = (min(var_25, (~5879507440423964090)));
        var_26 = ((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]));
    }
    #pragma endscop
}
