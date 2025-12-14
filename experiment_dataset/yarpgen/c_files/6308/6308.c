/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(((var_6 ? var_7 : 255)), var_15))) ? (((((min(var_13, var_13)) + 9223372036854775807)) >> ((min(54684, 1))))) : var_1));
    var_18 += (max((min(var_13, var_11)), var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_0] [i_0] = ((((((((10861 ? 0 : 1))) ? (arr_4 [i_0]) : ((39555 / (arr_8 [i_2] [i_0] [5])))))) ? ((~(max((arr_8 [i_2] [i_0] [i_0]), var_12)))) : (((((arr_3 [i_1 + 3] [i_0] [i_1 - 2]) != (arr_7 [7] [i_1] [i_1 - 1])))))));
                    var_19 = (min(var_19, (arr_4 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
