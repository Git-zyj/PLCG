/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-7693472765528934977);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((~((var_3 ? ((var_3 ? 15 : var_3)) : (((3394600497585137504 ? (-9223372036854775807 - 1) : 46)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((var_3 / (((17151888645510577214 ? -69 : -4894284574329914471)))));
                                var_15 |= (arr_3 [i_4]);
                            }
                        }
                    }
                }
                arr_13 [2] [i_1 + 2] = (min((((arr_9 [i_0] [2] [2]) ? (arr_4 [i_1 + 3] [4]) : 18446744073709551596)), (~var_8)));
            }
        }
    }
    var_16 = (((((((1 ? var_8 : 0)) >> 65524))) ? 58 : var_6));
    #pragma endscop
}
