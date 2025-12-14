/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max(-19, 10));
    var_13 = ((max((var_8 ^ var_9), (16681105217269814336 <= 88))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((var_4 ? var_8 : var_7)) + -var_7));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] |= var_7;
                            var_14 = (~var_3);
                            var_15 = var_0;
                            var_16 = (min(var_16, (((max(var_11, (((var_0 + 9223372036854775807) << (((var_2 + 158) - 32)))))) | (var_0 & var_1)))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
