/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((((var_2 > var_2) ? (var_1 - 138) : (1009917476092695448 < var_0)))) ? ((((var_5 * var_4) - (118 & 122)))) : 18446744073709551600));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = (!(((-(max((arr_2 [i_0] [i_1 - 1] [i_1]), var_9))))));
                var_12 ^= ((!(((-(((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_2 [i_1] [i_1] [i_0]))))))));
                var_13 ^= (((max(((50187 ? (arr_2 [i_0] [i_0] [i_1]) : 2105777426)), (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? ((((!((((var_9 + 9223372036854775807) >> (-6573569606266247448 + 6573569606266247486)))))))) : (max(65535, (arr_3 [i_1 - 2] [i_1 + 2] [i_1 - 2]))));
                var_14 ^= (max((((arr_3 [i_1 + 2] [i_1 + 1] [9]) + (arr_3 [i_1 + 2] [i_1 + 1] [i_1]))), ((((arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 1]) <= (arr_3 [i_1 + 2] [i_1 + 1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
