/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((var_7 / ((var_1 ? -300336544 : (arr_2 [i_1] [i_1] [i_1])))))) != ((-var_5 ? ((min(var_0, var_2))) : (min(4917316938351971337, -4917316938351971338))))));
                arr_7 [i_0] [6] &= (min(27016, 9));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = ((9 ^ (((((((arr_11 [12]) <= var_3))) - var_1)))));
                            arr_12 [i_1] [i_2] [i_1] [i_1] [i_1] = var_9;
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (((arr_13 [i_4]) << (arr_13 [i_4])));
        var_13 = (((arr_13 [i_4]) / (arr_14 [i_4])));
    }
    #pragma endscop
}
