/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((--3755927686) ? var_6 : ((0 ? 16312819132432040822 : 29674))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (~25717);
                var_17 = -25719;
                var_18 = (min(var_18, (!3350840011355244345)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (~16719757328326387237);
                            var_20 = (min(var_20, (((21044 ^ ((~(((arr_1 [1]) ? (arr_9 [i_1] [13] [i_3]) : 0)))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 &= var_0;
    var_22 = ((((((~(var_15 << 0))) + 2147483647)) >> (127 - 111)));
    var_23 = var_8;
    #pragma endscop
}
