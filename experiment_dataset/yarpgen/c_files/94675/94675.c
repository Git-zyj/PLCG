/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((-670933414462831528 ? ((((var_6 <= (arr_5 [i_0 + 2] [i_0 + 2] [i_1]))))) : 15));
                var_21 = (min(var_15, (arr_2 [i_0 + 2])));
                var_22 &= ((((var_5 & (arr_1 [i_0 + 2]))) ^ (arr_1 [i_0 + 2])));
                var_23 = ((((arr_0 [i_0] [i_0 + 3]) < (arr_3 [i_0]))));
                arr_8 [i_0 + 3] [i_1] [i_1] = 0;
            }
        }
    }
    var_24 = ((((min(((max(var_9, var_1))), (max(var_15, var_16))))) | ((var_13 & (((var_6 << (var_0 + 1420865006))))))));
    var_25 = var_18;
    #pragma endscop
}
