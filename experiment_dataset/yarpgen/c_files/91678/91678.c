/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 1));
    var_14 = (max(var_14, var_8));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [9] = ((-(((min((arr_3 [i_0]), (-2147483647 - 1)))))));
                arr_8 [i_0] = (-(min((arr_3 [i_1 - 2]), (arr_3 [i_1 - 2]))));
                arr_9 [3] = ((!(arr_0 [14] [i_1 + 1])));
                arr_10 [21] [21] [19] = (min(112, (arr_0 [1] [i_1 + 1])));
                var_16 = 16711680;
            }
        }
    }
    #pragma endscop
}
