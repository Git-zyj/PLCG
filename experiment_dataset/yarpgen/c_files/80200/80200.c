/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_4, -2147483632))) ? (((((var_9 ? var_7 : var_11))) ? (((65535 ? 65509 : 0))) : (var_16 ^ var_17))) : (((~(~var_3))))));
    var_21 = var_6;
    var_22 = (((var_6 < 6) == var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((((arr_2 [i_0]) * ((((((var_19 ? var_0 : (arr_5 [i_1])))) < (max(var_3, var_8))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_24 = (max(6, ((min((max(var_11, var_13)), (arr_9 [i_3] [i_3] [i_3]))))));
                            var_25 = var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
