/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = var_1;
    var_19 = (-((var_14 ? (var_3 ^ -15485) : (-127 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max(1, -15473));
                arr_7 [i_0] [i_1 - 2] = (((1878607979 >> 1) ? (((((2476237517158300910 ? var_11 : (arr_1 [12] [i_0])))) & (min((arr_2 [i_0]), var_0)))) : 1));
            }
        }
    }
    #pragma endscop
}
