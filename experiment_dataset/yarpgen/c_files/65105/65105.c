/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = ((!(arr_0 [i_0])));
        var_19 = (((((((arr_0 [1]) > var_7)))) == var_7));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_20 += ((!(arr_12 [i_3 + 1] [i_3 + 1] [i_2] [0] [i_3] [i_3 + 1])));
                            arr_15 [3] [i_2] [i_4] = ((((((arr_3 [i_1]) ^ (arr_6 [2] [i_2] [4]))) > var_12)));
                        }
                    }
                }
                arr_16 [i_1] [6] = (min(-15361, (((-(arr_7 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
