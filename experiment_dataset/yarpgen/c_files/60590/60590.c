/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 &= (((((-1508027974 ? (arr_6 [i_0] [16] [i_0 - 1]) : 6213))) ? 1 : 1));
                    arr_7 [14] [2] [i_0] &= (min((((!(arr_4 [i_1 - 2] [i_1 - 1])))), (((arr_4 [i_1 + 2] [i_1 - 2]) ? (arr_2 [i_1 + 2] [18]) : (arr_4 [i_1 + 1] [i_1 - 1])))));
                    var_16 -= ((((((arr_2 [i_0] [14]) ? ((((arr_4 [5] [4]) >= (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((arr_0 [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_1])))))) ? (((arr_6 [i_0] [i_1 + 1] [i_1 + 1]) * (arr_2 [i_0] [10]))) : (((((1 ? 1 : 2767703951)))))));
                }
            }
        }
    }
    var_17 = ((max(var_3, (min(var_6, var_3)))));
    #pragma endscop
}
