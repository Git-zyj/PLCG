/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 *= ((+((var_13 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
                    arr_8 [i_1] [i_1] [i_0] = 1;
                    arr_9 [i_0] [i_1] [i_2] |= (((max((min(8122299324464498629, (arr_1 [i_2]))), (((8122299324464498629 ? (arr_3 [i_2]) : 0))))) / ((3531444035835196643 ? var_7 : (arr_7 [i_0 + 1] [i_0 + 1] [i_0])))));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = var_9;
    var_18 = (min((((!(((-1 ? var_3 : var_13)))))), (var_13 - var_1)));
    #pragma endscop
}
