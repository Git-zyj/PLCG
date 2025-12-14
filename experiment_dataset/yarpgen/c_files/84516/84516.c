/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((arr_2 [8] [17]) / ((48131 & (arr_2 [i_0 + 2] [i_0 - 1])))));
                var_14 = (max(var_14, (max((((979935442 & (arr_3 [i_0 + 1] [i_0 - 1] [i_0])))), ((((arr_1 [6] [5]) + 8388604)))))));
            }
        }
    }
    var_15 = ((((((10 == -23704) == var_8))) * var_6));
    #pragma endscop
}
