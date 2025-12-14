/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_1 [i_0 - 1]) || (arr_1 [i_0 - 1])))) / (arr_3 [1])));
        arr_5 [i_0] &= 10918787958958375146;
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_19 = (max(((((min(var_12, var_5))) ? (((max(var_12, var_18)))) : (max(8543135842628249674, 8543135842628249674)))), (arr_2 [i_2 + 1])));
                    var_20 = 1;
                    var_21 ^= (max((((~(arr_12 [i_3] [i_1 - 1])))), (min(var_4, 1))));
                    arr_13 [i_3] [2] [i_1] = (((max(14, 8543135842628249664)) > (arr_12 [i_1 + 3] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
