/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 17626;
    var_11 -= var_9;
    var_12 = ((((((max(20846, -25627))) / var_4)) << var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 &= ((~(((!(arr_7 [i_1] [i_1]))))));
                    arr_10 [i_0] [i_1 - 1] [i_2] = (min(((min((((arr_1 [i_1]) ? var_1 : var_8)), (((arr_3 [i_0] [i_2]) * 65535))))), -8258840532554122838));
                    arr_11 [i_0] [i_2] [i_2] = (-9223372036854775807 - 1);
                    arr_12 [i_0] [i_0] [i_0] [i_2] = (!var_0);
                    var_14 = max(((12 / (arr_5 [i_1 - 1] [i_1 - 1]))), (arr_2 [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
