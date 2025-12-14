/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((!43938), (((var_1 ? var_8 : 1452929996)))));
    var_12 = (min(var_12, (((~(((48991 / var_10) ? -245 : ((32 ? var_9 : 32)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((-51 < 9745972150272510523) ? var_1 : (((!var_2) ? (~253) : var_0))));
                    var_13 = ((241 + ((26850 ? (arr_3 [i_0 - 1] [i_0 - 1]) : 18149527256447001851))));
                    var_14 = 1;
                    var_15 -= ((~(((6359356664346685289 ? 49152 : (arr_3 [i_0] [19]))))));
                    arr_9 [i_0] = var_5;
                }
            }
        }
    }
    #pragma endscop
}
