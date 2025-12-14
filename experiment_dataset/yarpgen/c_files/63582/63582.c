/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = var_6;
                var_16 ^= (min(((max(var_13, var_8))), (((arr_5 [i_0 - 1] [i_1] [i_0]) ? (min((arr_2 [1] [i_1]), 60)) : (((4289036468 ? var_3 : var_13)))))));
                var_17 = (min((((arr_4 [12] [i_1] [i_0 - 1]) << (arr_4 [i_0] [3] [i_0 - 1]))), (~var_13)));
                var_18 = var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 &= (min(6088927670828036704, ((~(min(var_8, (arr_11 [i_0] [i_1])))))));
                            arr_14 [i_0] [i_2] [i_0] [12] [i_0] = (min((((!((!(arr_13 [i_0] [i_1] [i_1] [i_3])))))), ((var_12 ? var_3 : (min(195, 5150761509578803336))))));
                            var_20 = (((((((arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) >= (arr_4 [i_0] [i_0] [i_0]))) ? (((max(var_14, 81)))) : (arr_0 [i_3 + 1] [i_3 + 1]))) >> (((((arr_1 [i_1]) | (2861975233 & var_14))) - 4294957419))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
