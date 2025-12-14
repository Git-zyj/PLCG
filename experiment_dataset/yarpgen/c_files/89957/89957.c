/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((-9223372036854775803 ? (((!(arr_0 [23] [16])))) : (((var_12 > (max(832490899, var_7)))))));
                arr_7 [i_1] = ((-832490909 ? (arr_2 [i_0]) : (min((arr_2 [i_0]), (arr_5 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_14 [i_3] = (((((max(var_1, (arr_10 [i_2]))))) - (arr_8 [i_3])));
                var_13 = (max((((((arr_12 [i_3] [i_2 + 2]) ? (arr_5 [i_2 - 1]) : var_4)) / var_8)), var_9));
            }
        }
    }
    var_14 = (max((((max(var_5, 832490921)))), var_5));
    #pragma endscop
}
