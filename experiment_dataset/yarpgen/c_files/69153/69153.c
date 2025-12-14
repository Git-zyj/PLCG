/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_0, (~var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] = (!118);
                                var_11 = (max(var_11, ((~(((~146) ? 1 : 1504296503))))));
                            }
                        }
                    }
                }
                var_12 = (max(-1504296503, (((var_3 ^ 22) ? (max(var_9, var_2)) : (max(var_1, (arr_0 [i_0] [i_0])))))));
                var_13 *= ((((max(((max(var_4, (arr_9 [i_0])))), (2214716215 << 1)))) ? ((var_7 & (~30))) : (((-var_5 * (max(1, var_9)))))));
            }
        }
    }
    var_14 -= ((-((((((-9223372036854775807 - 1) ? 2080251080 : var_1))) ? var_0 : ((var_9 ? var_0 : 17316))))));
    #pragma endscop
}
