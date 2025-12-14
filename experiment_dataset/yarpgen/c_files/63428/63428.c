/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((4194048 ? -12 : -65)))));
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [2] [i_0] = ((arr_5 [i_0] [i_0] [i_2]) != var_4);
                    arr_9 [i_1] [8] [12] = (arr_7 [i_1] [i_0]);
                    var_16 = (((arr_7 [i_0] [i_2]) < 65536));
                }
            }
        }
    }
    var_17 = ((-var_8 + (((var_13 ? var_12 : (-7148481422252846844 || var_12))))));
    #pragma endscop
}
