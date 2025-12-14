/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((var_17 + 2147483647) << (var_5 - 140))) < ((-var_2 ? -var_6 : var_17)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [16] = (max(((((((arr_1 [18]) - (arr_0 [i_1]))) - (arr_0 [i_0 - 2])))), ((((arr_3 [i_0] [i_0]) + (arr_2 [i_0] [i_0]))))));
                var_19 ^= (((arr_3 [i_0 - 1] [i_0 - 1]) >= (arr_2 [10] [10])));
                var_20 = (!-1957486934);
            }
        }
    }
    #pragma endscop
}
