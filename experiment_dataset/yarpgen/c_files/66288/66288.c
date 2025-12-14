/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (!((((arr_0 [i_0] [i_1 + 3]) | 0))));
                var_15 = (((~(max(93, var_6)))));
            }
        }
    }
    var_16 = ((((var_10 || (!-75))) ? var_1 : var_10));
    var_17 = (max(var_17, (((633708808 | (max((var_13 + var_2), ((max(var_1, var_11))))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_18 += (arr_11 [i_2]);
                arr_13 [i_2] [i_3] = ((max(78, -66)));
                arr_14 [i_3] [i_2] = ((!((max((arr_5 [i_2] [i_3] [i_2]), var_11)))));
            }
        }
    }
    #pragma endscop
}
