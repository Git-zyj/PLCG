/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 24;
    var_17 = var_7;
    var_18 &= 29153;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((-(((!(arr_0 [i_1] [i_0]))))));
                arr_6 [i_0] [i_1] = (((~var_2) ^ (((((arr_0 [i_0] [i_0]) ? var_10 : var_2))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_19 = (arr_12 [i_3] [i_3] [i_2 + 1]);
                arr_14 [i_2] [5] [5] = (max((max(var_10, (arr_10 [i_2] [i_3]))), var_11));
            }
        }
    }
    #pragma endscop
}
