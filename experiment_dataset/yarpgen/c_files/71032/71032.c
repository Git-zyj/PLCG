/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(var_6, (!var_2))));
    var_12 ^= (max(((min(5778985183272696330, -5778985183272696331))), (min(((min(var_5, 166))), var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 |= 0;
                    var_14 = (4230359115436376398 <= 4294967295);

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_15 = (max(var_15, (!var_1)));
                        var_16 = (arr_6 [i_0] [i_3 + 2] [i_2 + 2]);
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_11 [i_0] = ((166 ? 1099511627774 : 4294967295));
    }
    #pragma endscop
}
