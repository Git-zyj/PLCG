/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = 32;
                    arr_8 [i_0] [4] [i_2] = ((((((var_9 >= 1) ^ ((var_1 ? 0 : var_9))))) - (((0 > 1131590291522036728) ? var_1 : 4486269521212155279))));
                    arr_9 [i_0] [i_0] = ((((var_7 ? (arr_2 [i_0]) : (arr_2 [i_0]))) == 13438338325153634521));
                }
            }
        }
    }
    var_11 = ((!(((~(var_3 >> 1))))));
    var_12 = (var_2 * var_5);
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                {
                    var_13 = (arr_11 [i_5 - 1] [i_3 - 1]);
                    arr_17 [i_3] = ((92 ? ((var_8 ? var_10 : (var_9 >= 1))) : (min((((1 ? var_7 : 0))), 13574850481624551533))));
                }
            }
        }
    }
    #pragma endscop
}
