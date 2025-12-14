/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_3;
    var_19 &= var_7;
    var_20 |= (((var_4 ? var_16 : (min((-9223372036854775807 - 1), 9223372036854775807)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [14] [i_1] [i_2] = 10490;
                    arr_8 [i_1] = 1;
                    arr_9 [i_2] [i_1] = (~14704737243844210282);
                    arr_10 [2] [i_1] [i_1] [i_2] = (min((arr_4 [i_0]), ((min((arr_4 [i_1]), (arr_4 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
