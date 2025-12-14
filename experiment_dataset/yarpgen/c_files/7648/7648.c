/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_13 ^ var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((((min(861649791208668159, (arr_5 [12] [12]))) / (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? ((((178714938 == (arr_3 [i_1] [15]))))) : ((-(((arr_4 [i_0] [i_0]) ? var_5 : var_8))))));
                    var_21 = (((min((arr_7 [i_0] [i_0] [i_1] [13]), 178714924)) - ((var_15 ? var_18 : (arr_2 [i_2 + 1] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
