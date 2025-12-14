/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (85 << 0)));
                                var_21 = (min(var_21, ((((((min(158, (arr_6 [i_2] [i_2 - 1] [i_2 + 1]))))) / -7639897723774643522)))));
                                var_22 = (max(var_22, (~6506345301912238406)));
                            }
                        }
                    }
                }
                var_23 = 121;
            }
        }
    }
    var_24 = (((((((((0 ? 1 : var_4))) ? (32767 + -7639897723774643522) : (!var_18))) + 9223372036854775807)) << (((((~10294) ? (min(var_3, var_0)) : ((min(var_6, -32767))))) - 18105468373798101948))));
    #pragma endscop
}
