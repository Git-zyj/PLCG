/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_4 >> (var_1 - 2066636518))) ^ (~var_8)))) ? -23 : ((((max(254, 0))) ? var_6 : ((32206 ? 244 : -512732672))))));
    var_20 = ((~(min((((0 ? var_16 : var_18))), ((-1153112055 ? 1 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = ((-(max((arr_6 [i_0]), (arr_6 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] = (((arr_11 [i_1] [i_1] [i_2] [i_1] [i_3] [i_3 + 1]) > (min((arr_7 [i_3 + 1]), (arr_10 [i_3 + 1])))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] = (arr_2 [i_3 + 1]);
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, ((min(var_12, var_15)))));
    var_23 = var_11;
    #pragma endscop
}
