/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [1] |= ((((!(arr_2 [i_0] [12]))) ? (((-2457166119571753435 && (((var_13 ? (arr_2 [i_0] [8]) : (arr_1 [i_0]))))))) : ((var_5 ? 32767 : (arr_1 [i_0])))));
                var_17 = ((min(var_6, 2457166119571753434)));
                var_18 = 1118621881;
            }
        }
    }
    #pragma endscop
}
