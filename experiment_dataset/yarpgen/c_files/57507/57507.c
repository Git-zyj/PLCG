/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_10;
                arr_7 [i_1] [i_1] [i_0] = (((min(var_15, (arr_5 [i_0] [13]))) / (max(5437524399768049828, var_5))));
            }
        }
    }
    var_16 = ((((((1 * var_0) ? var_11 : 9223372036854775807))) ? var_13 : var_13));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] [i_3] [i_4] = ((((min(var_1, (arr_11 [18] [i_3])))) ? (arr_15 [i_2] [i_4] [i_4]) : ((((max(1, var_11))) ? (!1) : (3365135239300600800 && var_5)))));
                    arr_18 [i_2] = (max(var_14, var_9));
                }
            }
        }
    }
    #pragma endscop
}
