/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_2 <= (var_7 / 38))) ? ((var_6 ? (var_5 && var_4) : 0)) : (max(-var_5, (var_0 * var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (((((6259335383813249903 ? (arr_6 [0] [i_1] [9]) : (arr_7 [i_0] [i_0] [22])))) ? ((((!(arr_7 [24] [8] [24]))))) : ((~(max(var_2, var_3))))));
                    var_12 = (((1269113154 % 151) < ((~((~(arr_0 [i_1])))))));
                }
            }
        }
    }
    var_13 = (((max(0, (!-4470318106441521340)))) << (var_6 - 194));
    #pragma endscop
}
