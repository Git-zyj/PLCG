/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (((arr_4 [i_0] [i_0]) >= (min((arr_1 [i_0 + 1]), ((5 ? 987160716485493784 : 1))))));
                    arr_10 [i_2] [i_2] [i_0] = ((((var_2 > (arr_0 [i_0 + 1] [i_0 + 2]))) ? var_5 : (arr_4 [i_0] [i_1])));
                }
            }
        }
    }
    var_11 = ((((((((17459583357224057832 > (-9223372036854775807 - 1)))) > ((-2639092137486945899 ? 5862630688885194076 : 2024720418)))))));
    var_12 = ((+(((6960950615232286979 / -9223372036854775803) ^ (max(17459583357224057803, 17459583357224057810))))));
    var_13 |= ((((max(var_1, (var_1 == var_10)))) ? (((min(var_4, var_2)))) : var_9));
    var_14 = var_6;
    #pragma endscop
}
