/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_1 ? var_1 : var_9))) ? var_9 : (!var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] |= (((6142721289844927933 ? 12304022783864623689 : (((27839 ? 3891783668091206392 : -34))))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = min(((max(41138, 3735))), (max(-4204890917479272773, 63)));
                }
            }
        }
    }
    var_14 = (((-((max(7168, 34437))))));
    #pragma endscop
}
