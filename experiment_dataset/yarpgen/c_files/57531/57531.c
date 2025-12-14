/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = 29974;
                arr_5 [i_0] [i_0 + 2] [i_1] = ((~29733) ? (1 >= 32425) : (arr_4 [i_0] [i_0] [i_0]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_15 = (min(var_15, ((((((!(arr_7 [i_2 + 1])))) | 31162)))));
                var_16 = (max((((-(max(var_1, (arr_11 [i_2 + 1] [i_2 + 1] [i_3])))))), (~-9223372036854775794)));
            }
        }
    }
    var_17 = var_12;
    var_18 = (max(var_18, var_1));
    #pragma endscop
}
