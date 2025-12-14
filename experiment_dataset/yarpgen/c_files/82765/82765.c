/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = ((((arr_9 [i_0] [i_0] [i_1] [i_2 + 1] [14] [i_2]) >> (((((-11 + 9223372036854775807) << (((-27 + 44) - 17)))) - 9223372036854775787)))));
                            var_15 = (((((~(arr_0 [i_0] [i_0])))) / 3631258116));
                        }
                    }
                }
                var_16 = ((((min((((var_11 ? (arr_0 [i_0 + 1] [i_1]) : 663709157))), (~5)))) ? ((~(~-34))) : ((~(arr_0 [i_1] [i_0 + 1])))));
            }
        }
    }
    var_17 = -20;
    #pragma endscop
}
