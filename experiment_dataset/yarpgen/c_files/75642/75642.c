/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((18446744073709551615 - var_13), ((((((12456272183458154432 ? 22 : 759451515))) ? 4294967295 : var_0)))));
    var_21 = 4294967295;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_22 = ((-(((arr_1 [4] [6]) & (arr_5 [i_0])))));
                        arr_10 [i_1] = 3535515780;
                        var_23 &= (~18706);
                    }
                    var_24 *= ((-(max((arr_5 [i_2 - 1]), var_9))));
                }
            }
        }
    }
    var_25 ^= var_15;
    #pragma endscop
}
