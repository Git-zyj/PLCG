/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((var_8 ? (((var_11 ? var_9 : var_11))) : var_4)), var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [4] = ((arr_2 [i_0] [i_0] [i_0 + 1]) - (arr_2 [3] [i_0] [i_0 - 2]));
                    arr_7 [i_2] [i_2] [i_0 + 2] &= ((12835 ? -4294967281 : (((-(arr_2 [i_0] [i_2] [i_0]))))));
                }
            }
        }
    }
    var_14 = ((var_12 ? ((var_4 ? var_6 : var_4)) : ((-var_11 * (var_9 / -3377263617483144831)))));
    #pragma endscop
}
