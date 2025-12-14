/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 7464937570431461478;
                var_18 ^= (max((max((arr_4 [3] [7] [i_0 + 1]), (arr_4 [i_1 - 1] [i_1 - 1] [i_0 - 1]))), ((-5749031327782392103 ? 5749031327782392102 : -51))));
                var_19 = ((+((-((-5749031327782392079 ? (arr_4 [2] [3] [12]) : (arr_1 [i_1])))))));
                var_20 = var_15;
            }
        }
    }
    var_21 = ((((((max(-36, var_5))) ? (var_0 <= -118) : -1859002929))) ? ((-(max(5749031327782392105, var_15)))) : var_3);
    #pragma endscop
}
