/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = var_17;
                    arr_8 [8] [6] [8] |= min((((~(arr_5 [i_2 - 2] [i_2 + 2] [i_2 - 2])))), ((min((-9223372036854775807 - 1), var_6))));
                    var_18 &= arr_2 [i_0];
                    var_19 += ((!(((~(min((arr_5 [i_0] [i_1] [i_0]), var_14)))))));
                    var_20 = ((~(((arr_6 [i_2 - 2] [i_2 + 1] [i_2 - 2]) ? (arr_5 [i_2] [i_2 + 1] [i_2 - 2]) : (arr_5 [1] [i_2 + 1] [i_2 - 2])))));
                }
            }
        }
    }
    var_21 = ((((((var_12 ? var_3 : (-127 - 1))))) ? ((-(32767 * 63))) : (((((((min(var_1, 0)))) >= var_14))))));
    #pragma endscop
}
