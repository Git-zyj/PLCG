/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (max(var_22, 78));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 + 3] [i_3] [1] [i_3 + 3] = (((((~(arr_7 [i_3 + 3] [i_2] [i_1] [i_0])))) ? (((arr_3 [i_3]) ? 85 : (arr_5 [i_2 - 1]))) : -var_16));
                            var_23 ^= (arr_1 [i_0] [i_3]);
                            var_24 = (arr_9 [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_0 + 3] [i_0]);
                        }
                    }
                }
                arr_11 [i_0] [4] [i_1] = ((-117 ? (((arr_5 [i_0 + 1]) / 63)) : ((min((arr_5 [i_0 + 4]), (arr_5 [i_0 - 2]))))));
                var_25 |= ((~(((!(var_3 * var_17))))));
            }
        }
    }
    var_26 = (((((!(var_18 - var_4)))) | 36));
    #pragma endscop
}
