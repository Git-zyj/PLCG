/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 - ((max(var_8, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((arr_3 [i_1] [i_1 - 2]) ? (1 <= 3) : (((1 >= 1) % (arr_2 [i_1] [i_0])))));
                var_11 += ((8388096 ? 1 : 2677724969));
                arr_7 [i_0] [i_0] [i_0] &= (((((arr_2 [i_0] [i_1 + 2]) ? (1 & var_8) : (arr_1 [i_1 + 1]))) > ((~(arr_2 [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
