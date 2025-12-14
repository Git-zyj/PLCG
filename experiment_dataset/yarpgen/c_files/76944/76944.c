/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_1 ^ var_6) ? (1 | 0) : ((102 ? var_7 : var_2)))) & 16);
    var_12 &= (((var_0 ? var_10 : var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(var_8, 1));
                arr_6 [i_0] [i_0] = (arr_4 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_2] = (arr_7 [5] [i_1] [i_1] [i_0]);
                    arr_11 [i_0] [i_1] [14] [i_2] = (((arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (((arr_8 [i_0]) ? (~var_9) : 1)) : ((((max(var_0, (arr_4 [i_0] [i_0])))) ? ((1 ? 0 : 0)) : -var_2))));
                    var_13 = (min(var_13, (arr_9 [3] [i_1 + 1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
