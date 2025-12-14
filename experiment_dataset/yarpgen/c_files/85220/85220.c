/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_5, (max(17981163286253151616, 1848897704424484439))));
    var_17 = (6312 / var_5);
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [3] = (((((var_14 ? 14762419616621076255 : var_14))) ? (arr_3 [i_0] [i_3]) : (~var_10)));
                            arr_11 [i_3] [i_2] [i_1] [i_0] = 23086;
                        }
                    }
                }
                var_19 = (((((arr_4 [i_0]) >= ((40396 ^ (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))) ? 288230376151711743 : (arr_4 [3])));
                arr_12 [i_1] [i_0] = var_4;
                var_20 = arr_0 [8] [i_1];
            }
        }
    }
    var_21 -= (((var_8 ^ var_11) << (((((~var_9) ? var_3 : (~18446744073709551615))) - 63642))));
    #pragma endscop
}
