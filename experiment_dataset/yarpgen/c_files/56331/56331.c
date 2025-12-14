/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = (((max((var_0 + var_9), (var_3 * var_0))) <= ((max(28296, 28295)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((28297 >> (var_8 + 814470428)));
                arr_5 [i_0 + 1] [i_0] [i_0] = (max(((((var_7 >= (arr_2 [i_1] [i_0]))) ? -var_3 : var_8)), ((max(((var_4 <= (arr_3 [i_0 - 1]))), (28295 >= var_1))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                {
                    var_14 = (min((28297 | 0), var_10));
                    var_15 = (arr_12 [i_2] [i_4 - 2] [i_3 + 1] [i_4 - 2]);
                    arr_15 [7] [i_3] [i_3] [i_4] = ((-28279 ? 18446744073709551615 : 28278));
                    var_16 = (arr_6 [1]);
                }
            }
        }
    }
    #pragma endscop
}
