/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((var_12 ? 3782986452544467644 : 133)) - (var_12 % var_14))) >> ((var_11 ? var_8 : (var_12 - 5974)))))));
    var_16 = ((+(max((var_6 / var_10), ((min(var_8, var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((var_14 & (((var_3 % var_7) ? (arr_5 [i_0] [i_0]) : ((-(arr_1 [i_0])))))));
                    arr_8 [i_0] [1] [i_1] [i_0] = 9950;
                    arr_9 [i_0] [11] = (((((-(arr_7 [i_0] [i_0] [i_0])))) == 8249590435384557469));
                }
            }
        }
    }
    #pragma endscop
}
