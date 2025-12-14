/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (((((!(arr_1 [i_0 - 1]))))) ^ var_12);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (!119);
                            var_15 = ((((36258 + (arr_7 [i_0 + 1] [i_1 + 1] [i_2 + 1] [i_0 + 1]))) ^ (((-(arr_1 [i_0 - 1]))))));
                            var_16 = (~(((arr_10 [i_1] [i_2] [i_2 - 1] [i_2] [11] [i_2]) ? var_3 : var_4)));
                        }
                    }
                }
                var_17 = ((~((~(arr_3 [i_0 - 2] [i_0 + 1])))));
            }
        }
    }
    var_18 = -var_10;
    #pragma endscop
}
