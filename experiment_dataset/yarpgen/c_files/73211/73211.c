/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = ((((arr_0 [i_0 + 1]) ? 127 : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0] = (max((((arr_6 [i_0] [17] [i_0 + 1] [i_0]) ? (arr_6 [i_0] [i_1] [i_0 + 1] [i_0 - 1]) : (arr_6 [i_0] [i_0] [i_0 + 1] [1]))), ((min((-127 - 1), 4899)))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] |= (((arr_3 [i_0 - 1] [i_0 - 1]) || ((max((arr_3 [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 - 1]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_21 -= 4886;
        arr_13 [i_3 + 1] [i_3] = (-127 - 1);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((((~(-127 - 1)))) ? ((var_2 ? var_12 : 428153102)) : (arr_6 [i_4] [i_4] [i_4] [i_4])));
        var_22 = (arr_15 [i_4]);
    }
    var_23 = (((((var_12 * 4899) * (((max(60635, 1)))))) % 67108862));
    #pragma endscop
}
