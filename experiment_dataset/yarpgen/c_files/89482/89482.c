/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = (!var_4);
                    arr_8 [i_0] [i_2] = (775896973 - var_4);
                    var_12 = ((~((~(arr_6 [i_2])))));
                    arr_9 [i_2] [i_2] [i_2] = (((arr_6 [i_2]) ? (max(var_2, (arr_6 [i_2]))) : var_9));
                }
            }
        }
    }
    #pragma endscop
}
