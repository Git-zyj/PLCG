/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (max((arr_3 [11] [i_1] [i_2]), (min((((!(arr_0 [i_0])))), (arr_0 [i_0 + 1])))));
                    var_13 = ((((!(arr_1 [i_2] [4])))));
                }
            }
        }
    }
    #pragma endscop
}
