/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((max(var_1, (min(3555924286, -9868))))), var_8));
    var_21 = (min(var_21, (2347036938495070548 | 7398283256683714984)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [i_0]), -27316));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 2] [i_0] [i_1 + 2] = ((~((-9855 ^ (arr_3 [i_0] [i_0])))));
                    arr_8 [17] [i_0] [i_1] [i_0] = ((min(797819410, (((arr_0 [i_0]) / var_13)))) - -9866);
                    var_22 = (max((((!(((var_11 ? var_9 : 31744)))))), (+-9854)));
                }
            }
        }
    }
    var_23 = -var_13;
    #pragma endscop
}
