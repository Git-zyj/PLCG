/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = ((((~(max(2876831390, 570262883))))) ? (((-(~79)))) : (arr_5 [i_1 - 1] [i_1 - 1]));
                var_15 = (max(var_15, ((max(2, (-570262892 / -584037645))))));
            }
        }
    }
    var_16 = ((((+(((-9223372036854775807 - 1) / 9223372036854775807)))) * (!-var_3)));
    var_17 = ((-(min(((min(var_8, var_5))), (var_4 / -32749)))));
    #pragma endscop
}
