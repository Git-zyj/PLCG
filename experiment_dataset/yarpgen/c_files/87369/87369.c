/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((-18220 ? 6713044865896626879 : (!var_6))), var_1));
    var_17 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 1] = min(var_12, (((-((var_9 ? (arr_2 [i_0]) : (arr_3 [i_0] [3])))))));
                arr_7 [i_1] [i_1] [i_1] = (min((arr_2 [i_1]), (((((115 ? 33954 : 63))) ? var_7 : (arr_2 [i_1 - 1])))));
            }
        }
    }
    var_18 = (max(((~(var_11 | var_11))), 204));
    #pragma endscop
}
