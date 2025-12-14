/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 |= (max(1, 4161536));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 ^= var_3;
                            arr_10 [i_2] = (min((~2291370572343374490), (((var_7 == (arr_1 [i_2 - 1]))))));
                            var_15 = min((var_6 | 18446744073705390068), (((var_7 ? (arr_5 [i_2 - 3]) : var_11))));
                        }
                    }
                }
                arr_11 [i_1] = ((max((arr_6 [i_0] [i_1] [i_1]), var_6)));
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
